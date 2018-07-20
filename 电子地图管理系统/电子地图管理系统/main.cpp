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

	printf("* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *                                电子地图管理系统                              **                                                                              **                          赵桂钊 肖雅支 刘洁仙 王日滔                         **                                                                              **                                2016年07月22日                                **                                                                              ** * * * * * * * * * * * * * * * * * * Menu* * * * * * * * * * * * * * * * * * *");                                          
	printf("\n");
	
    printf("请选择要进行的操作：\n");
	printf("                   1.读取文件\n                   2.排序\n                   3.检索\n                   4.更新\n                   5.退出\n");
	printf("                   请选择......");
	scanf("%d",&x);
	switch(x)
	{
	case 3:
	printf("请输入要检索的方法：\n                   1.道路编号检索\n                   2.道路名称检索\n");
	printf("                   请选择......");
	scanf("%d",&c);
	switch(c)
	{
	case 1:
		 read(&road);
		 /*printf("请输入要检索的道路编号:\n");
		 scanf("%d",&searchID);//输入要查找的值
	     IDloc=BinarySearch(LinkID,searchID,length);
		 if
			 (IDloc==0)printf("Sorry :Not Foud!\n");
		 else
		     printf("%d\n",LinkID[IDloc]);*/
		 break;
	case 2:
		printf("请输入要检索的道路名称:\n");
		scanf("%s",searchname);//输入要查找的元素
	    SequentialSearch(&road,searchname);	
	}
	}
	return 0;

}
