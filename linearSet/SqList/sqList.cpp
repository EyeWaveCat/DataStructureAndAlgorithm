#include"sqList.h"
#include<iostream>

SqList& ListCreate(SqList &L)
{
    L.length = 0;
    return L;
}

bool ListInsert(SqList &L,int i,ElemType e)
{
    if(i<1 || i>L.length+1){
        std::cout<<i<<" is invalid!"<<std::endl;
        return false;
    }
    if(L.length >= MaxSize){
        std::cout<<"This list is full!";
        return false;
    }
    for(int index = L.length ; index >= i ; --index){
        L.data[index] = L.data[index - 1];
    }
    L.data[i - 1] = e;
    L.length++;
    return true;
}

bool ListDelete(SqList &L,int i,ElemType &e)
{
    if(i<1 || i>L.length){
        std::cout<<i<<" is invalid!"<<std::endl;
        return false;
    }
    e = L.data[i-1];
    for(int index = i; index <L.length; ++index){
        L.data[index - 1] = L.data[index];
    }
    L.length--;
    return true;
}

int ListLocated(SqList &L,ElemType e)
{
    for(int index =0; index < L.length; ++index){
        if(L.data[index] == e){
            return index + 1;
        }
    }
    return 0;
}

int ListLength(SqList &L)
{
    return L.length;
}

ElemType& ListGet(SqList &L,int i)
{
    if(i>0 && i<=L.length){
        return L.data[i-1];
    }else{
        std::cout<<"i is out of range.";
        exit(0);       
    }
}

bool isEmpty(SqList &L)
{
    return !L.length;
}

void ListPrint(SqList &L)
{
    if(isEmpty(L)){
        std::cout<<"This list is empty!"<<std::endl;
        return ;
    }
    for(int index = 0;index < L.length; ++index){
        std::cout<<"Element["<<index<<"] = "<<L.data[index]<<" ";
    }
    std::cout<<std::endl;
}

bool ListClear(SqList &L)
{
    for(int index = 0;index < L.length;index++){
        L.data[index] = 0;
    }
    L.length = 0;
    return true;
}

bool RandomListInit(SqList &L,int length)
{
    if(length>MaxSize){
        std::cout<<"length is out of range("<<MaxSize<<")"<<std::endl;
        return false;
    }
    for(int index = 0;index<length; index++){       
        L.data[index] = rand()%100 + 1;
    }
    L.length = length;
    return true;
}

int main()
{
    using namespace std;
    SqList list = ListCreate(list);
    ListPrint(list);
    RandomListInit(list,5);
    ListPrint(list);
    ListInsert(list,1,30);
    ListInsert(list,1,39);
    ListInsert(list,1,3);
    ListPrint(list);
    ElemType e = ListGet(list,2);
    cout<<e<<endl;
    int length = ListLength(list);
    cout<<length<<endl;
    int locate = ListLocated(list,39);
    cout<<locate<<endl;
    bool sucess = ListDelete(list,1,e);
    cout<<sucess<<endl;
    ListPrint(list);
    bool isClear = ListClear(list);
    cout<<isClear<<endl;
    ListPrint(list);

    return 0;

}