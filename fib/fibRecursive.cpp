#include<iostream>

int fib(int n);

int main()
{
    using namespace std;
    int n;
    cout<<"Enter a int number(-1 to exit):";
    cin>>n;
    while (n != -1)
    {    
        cout<<"fib("<<n<<")  = "<<fib(n)<<endl;
        cout<<"Enter a int number(-1 to exit):";
        cin>>n;
    }
    
    cout<<"program exit!"<<endl;
    return 0;
}

int fib(int n)
{
    if( n == 1 || n == 0 ){
        return  n;
    }else{
        return fib(n-1) + fib(n-2) ;
    }
}

/*
Time complexity O(2^n)
https://www.cnblogs.com/33debug/p/6848330.html
    Time complexity for fibnaci 
*/