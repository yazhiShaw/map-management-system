#include <stdio.h>
#include <stdlib.h>
#include"mainmap.h"
#include"SqList.h"

int  EnSqList(SqList *List, Road e)   //��λ�ò���eֵ
{  
       int j = List -> last ;                //ȡ�ñ�(����Ԫ�ظ���)ֵ
       if(j == SIZE)
            return 0 ;                     // �����������򷵻�0
       else
	   {
		   int i=List->last+1;
	       List->elem[i]=e;
		   List->last = List->last + 1;
		   return 1;
	   }
}

int DelSqList(SqList *List, int loc, Road *e)          //��e���ر�ɾ��ֵ
{  
       int j ;
       if ( loc<0|| loc>= SIZE)
            return -1 ;                      //����ɾ��λ�ò������򷵻�-1
       else 
       { 
            *e = List ->elem[loc];         //������loc��Ԫ��ȡ��
	      List -> last -=1;               // ���ȼ�1
           for(j = loc; j<=List -> last ; ++j)
                List ->elem[j] = List ->elem[j+1];  // ��ǰ�ƶ�Ԫ��
           return 1;                               // ���سɹ�
        }
}

