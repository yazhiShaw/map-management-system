#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"mainmap.h"
#include"SqList.h"

void read(SqList *road)
{
	int i;
	FILE *fp;
	Road r;
	fp=fopen("d:\\data\\GTBL.dat","rb");
	for(i=0;!feof(fp);i++)
	{
		//读取各部分的值
		fread(&r.Length,2,1,fp);
		fread(&r.LinkID,4,1,fp);
		fread(&r.LenOfRoad,2,1,fp);
		fread(&r.Info,4,1,fp);
		
		//大端小端的转化
		r.Length=(r.Length<<8)|(r.Length>>8);
		r.LinkID=r.LinkID<<24|(r.LinkID&0xff0000)>>8|(r.LinkID&0xff00)<<8|r.LinkID>>24;
		r.LenOfRoad=(r.LenOfRoad<<8)|(r.LenOfRoad>>8);
		r.Info=(r.Info>>24)|((r.Info &0xff0000)>>8)|((r.Info&0xff00)<<8)|(r.Info<<24);

		//读取名称
		if((r.Length-12)!=0)
			fread(r.Name,r.Length-12,1,fp);
		else
			strcpy(r.Name,"\0");
		printf("%d. %x %d %x %x %s\n",i,r.Length,r.LinkID,r.LenOfRoad,r.Info,r.Name);
		EnSqList(road,r);
	}
	fclose(fp);
}