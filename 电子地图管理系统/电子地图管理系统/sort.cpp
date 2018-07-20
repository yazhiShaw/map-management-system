#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include"mainmap.h"
#include"SqList.h"
void  SequentialSearch(SqList *road,char searchname_[])//顺序检索道路名称
{
	int i,flag=0;//flag作为该数组里有无要找的值的标志
	strcpy(road->elem[0].Name,searchname_);
	for(i=road->last;i>=0;i--)
	{
			if(!strcmp(road->elem[i].Name,searchname_)&&i!=0)
			{
				printf("%s\n",road->elem[i].Name);
			   flag=1;//flag=1,证明找到了该值；
			}
	}
	if(i==-1&&flag==0)//退出循环的时候i=-1;没找到该值时flag=0；
		printf("Sorry:Not Founf!\n");

}

