typedef struct
{
   Road elem[SIZE];
   int last;
}SqList;

int  EnSqList(SqList *List, Road e);
int DelSqList(SqList *List, int loc, Road *e);
void  SequentialSearch(SqList *road,char searchname_[]);//顺序检索道路名称

void read(SqList *road);//读取文件