#include"sqList.h"
#include<iostream>

ElemType findMinElem(SqList& L);

int main()
{
    using namespace std;
    SqList list = ListCreate(list);
    int sucess = RandomListInit(list,5);
    ListPrint(list);
    ElemType minValue = findMinElem(list);
    cout<<"minValue = "<<minValue<<endl;
    return 0;
}

ElemType findMinElem(SqList& L)
{
    if(isEmpty(L)){
        exit(0);
    }
    ElemType minValue = L.data[0];
    int minIndex = 0;
    for(int index =1;index<L.length;++index){
        if(L.data[index]<minValue){
            minIndex = index;
            minValue = L.data[index];
        }
    }
    L.data[minIndex] = L.data[L.length - 1];
    L.length--;
    return  minValue;
}