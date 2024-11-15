#include<iostream>
using namespace std;
//reverse value by using function

int rev (int a){
int rev=0;
while(a>0){
rev=rev*10+a%10;
a=a/10;
}
return rev;

}
int main()
{
int n;
cout<<"enter your numbers: ";
cin>>n;
cout<<rev(n);

    return 0;
}