#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include"mainmap.h"
#include"SqList.h"
void  SequentialSearch(SqList *road,char searchname_[])//˳�������·����
{
	int i,flag=0;//flag��Ϊ������������Ҫ�ҵ�ֵ�ı�־
	strcpy(road->elem[0].Name,searchname_);
	for(i=road->last;i>=0;i--)
	{
			if(!strcmp(road->elem[i].Name,searchname_)&&i!=0)
			{
				printf("%s\n",road->elem[i].Name);
			   flag=1;//flag=1,֤���ҵ��˸�ֵ��
			}
	}
	if(i==-1&&flag==0)//�˳�ѭ����ʱ��i=-1;û�ҵ���ֵʱflag=0��
		printf("Sorry:Not Founf!\n");

}

