typedef struct
{
   Road elem[SIZE];
   int last;
}SqList;

int  EnSqList(SqList *List, Road e);
int DelSqList(SqList *List, int loc, Road *e);
void  SequentialSearch(SqList *road,char searchname_[]);//˳�������·����

void read(SqList *road);//��ȡ�ļ�