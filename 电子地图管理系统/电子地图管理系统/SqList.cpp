#include <stdio.h>
#include <stdlib.h>
#include"mainmap.h"
#include"SqList.h"

int  EnSqList(SqList *List, Road e)   //按位置插入e值
{  
       int j = List -> last ;                //取得表长(已有元素个数)值
       if(j == SIZE)
            return 0 ;                     // 若表已满，则返回0
       else
	   {
		   int i=List->last+1;
	       List->elem[i]=e;
		   List->last = List->last + 1;
		   return 1;
	   }
}

int DelSqList(SqList *List, int loc, Road *e)          //用e返回被删除值
{  
       int j ;
       if ( loc<0|| loc>= SIZE)
            return -1 ;                      //若欲删除位置不合理，则返回-1
       else 
       { 
            *e = List ->elem[loc];         //将表中loc处元素取出
	      List -> last -=1;               // 表长度减1
           for(j = loc; j<=List -> last ; ++j)
                List ->elem[j] = List ->elem[j+1];  // 向前移动元素
           return 1;                               // 返回成功
        }
}

