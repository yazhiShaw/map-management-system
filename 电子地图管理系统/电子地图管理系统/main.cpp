#include<stdio.h>
#include<string.h>
#include"mainmap.h"
#include"SqList.h"

SqList road;

int main()
{
	road.last=0;
	int LinkID[SIZE];
	int length,i,c,IDloc,searchID;
	char searchname[SIZE];
	int x;

	printf("* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *                                ���ӵ�ͼ����ϵͳ                              **                                                                              **                          �Թ��� Ф��֧ ������ ������                         **                                                                              **                                2016��07��22��                                **                                                                              ** * * * * * * * * * * * * * * * * * * Menu* * * * * * * * * * * * * * * * * * *");                                          
	printf("\n");
	
    printf("��ѡ��Ҫ���еĲ�����\n");
	printf("                   1.��ȡ�ļ�\n                   2.����\n                   3.����\n                   4.����\n                   5.�˳�\n");
	printf("                   ��ѡ��......");
	scanf("%d",&x);
	switch(x)
	{
	case 3:
	printf("������Ҫ�����ķ�����\n                   1.��·��ż���\n                   2.��·���Ƽ���\n");
	printf("                   ��ѡ��......");
	scanf("%d",&c);
	switch(c)
	{
	case 1:
		 read(&road);
		 /*printf("������Ҫ�����ĵ�·���:\n");
		 scanf("%d",&searchID);//����Ҫ���ҵ�ֵ
	     IDloc=BinarySearch(LinkID,searchID,length);
		 if
			 (IDloc==0)printf("Sorry :Not Foud!\n");
		 else
		     printf("%d\n",LinkID[IDloc]);*/
		 break;
	case 2:
		printf("������Ҫ�����ĵ�·����:\n");
		scanf("%s",searchname);//����Ҫ���ҵ�Ԫ��
	    SequentialSearch(&road,searchname);	
	}
	}
	return 0;

}
