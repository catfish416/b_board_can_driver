#include "module.h"
#include "CLinuxMsgQueuet.h"
#include "cyclequeue.h"


EXTERN_VAR CLinuxMsgQueuet *MA;
EXTERN_VAR CLinuxMsgQueuet *MB;
EXTERN_VAR CLinuxMsgQueuet *MC;


EXTERN_VAR cycleQueue<uint8_t>  QA;
EXTERN_VAR cycleQueue<uint8_t>  QB;
EXTERN_VAR cycleQueue<uint16_t> QC;
EXTERN_VAR cycleQueue<uint16_t> QD;
EXTERN_VAR cycleQueue<uint32_t> QE;
EXTERN_VAR cycleQueue<uint32_t> QF;
//EXTERN_VAR cycleQueue<FUSING_OUTPUT_TRIG> QFUSING;


uint8_t A_var =0;

uint8_t B_var=0;

uint16_t C_var=0;


uint16_t D_var=0;

uint32_t E_var=0;

uint32_t F_var=0;

uint16_t temp = 0;

void Set_A(uint8_t value)
{
  QA.push(value);
}
 uint8_t Get_A(void)
 {
   QA.pop(&A_var);
  // printf("A_var=%d\n",A_var);
   return A_var; 
 }

 void Set_B(uint8_t value)
 {
    QB.push(value);
 }
 
  uint8_t Get_B(void)
  {
      QB.pop(&B_var);
     // printf("B_var=%d\n",B_var);
 	
      return B_var;
  }

  void Set_C(uint16_t value)
  {
    QC.push(value);
	
  }

  uint16_t Get_C(void)
  {
      QC.pop(&C_var);
	  return C_var;
  }

  void Set_D(uint16_t value)
  {
    QD.push(value);
  }
   uint16_t Get_D(void)
   {
       QD.pop(&D_var);
      // printf("D_var=%d\n",D_var);
       return D_var;
   }

  void Set_E(uint32_t value)
  {
     QE.push(value);
  }
  uint32_t Get_E(void)
  {
     QE.pop(&E_var);
   //  printf("E_var=%d\n",E_var);
      return E_var;
  }

  void Set_F(uint32_t value)
  {
    QF.push(value);
  }
  uint32_t Get_F(void)
  {
      QF.pop(&F_var);
      //printf("F_var=%d\n",F_var);
      return F_var;
  }





