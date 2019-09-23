#ifndef SQLIST
#define SQLIST

typedef int ElemType;
#define MaxSize 50 
typedef struct SqList
{
    ElemType data[MaxSize];
    int length;
};

typedef struct SeqList
{
    ElemType *data;
    int length;
    int size; //数组长度
};

SqList& ListCreate(SqList &L);
bool ListInsert(SqList &L,int i,ElemType e);
bool ListDelete(SqList &L,int i,ElemType &e);
int ListLocated(SqList &L,ElemType e);
int ListLength(SqList &L);
ElemType& ListGet(SqList &L,int i);
bool isEmpty(SqList &L);
void ListPrint(SqList &L);
bool ListClear(SqList &L);
bool RandomListInit(SqList &L,int length);


#endif 