#include<iostream>
using namespace std;
int fibo(int num){
    if(num<=1){
        return num;
    }
    else{
        return fibo(num-1)+fibo(num-2);
    }
}

int main()
{
    int num=5;
    cout<<fibo(num);
    return 0;
}