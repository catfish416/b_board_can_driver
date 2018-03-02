#ifndef _CYCLE_QUEUE_
#define _CYCLE_QUEUE_
#include <string.h>

#define FAA    __sync_fetch_and_add    
#define FAS   __sync_fetch_and_sub   
#define VCAS   __sync_val_compare_and_swap  
#define CAS     __sync_bool_compare_and_swap 	
#define VSET   __sync_lock_test_and_set

template <typename T>
class cycleQueue
{   
    public:
		cycleQueue(int size);
		 ~cycleQueue( );
		void push(T element);
		void pop(T* element);
		
  private:
	    int msize;
		int  read_next;
		int  reading;
		T* mdata;	
}__attribute__((packed));

template <typename T>
cycleQueue<T>::cycleQueue(int size)
{
    this->msize = size;
	this->read_next = -1;
	this->reading = -1;
    this->mdata = new T[size];
	memset(this->mdata,0,sizeof(T)*size);

}


template<typename T>
cycleQueue<T>::~cycleQueue()
{
    delete[] this->mdata ;
}


template<typename T>
void cycleQueue<T>::push(T element)
{
   int pos = 0;

    do
    {
       if((pos != FAA(&this->read_next,0)) && (pos != FAA(&this->reading,0)))
       	{
       	  memcpy(this->mdata+pos,&element,sizeof(T));
	     // this->mdata[pos] = element;
	      VSET(&this->read_next,pos);
		  break;
       	}
	    pos++;
    }while(pos<this->msize);
       	       
	
		
}


template<typename T>
void cycleQueue<T>::pop( T* element)
{     
      VSET(&this->reading,this->read_next);
	  if(FAA(&this->reading,0) >= 0 )
	  memcpy(element,this->mdata+this->reading,sizeof(T));
	 //*element = this->mdata[this->reading];
    
  
}


#endif


