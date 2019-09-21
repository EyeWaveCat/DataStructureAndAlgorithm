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
    int a =0,b=1;
    int temp;
    while(n>0){
        temp = a + b;
        a = b;
        b = temp;
        --n;
    }

    return a;
}

//Time Complexity O(n)