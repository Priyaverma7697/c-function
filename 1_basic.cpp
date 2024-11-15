#include<iostream>
using namespace std;
//call by value
// void sum(int b){
// b=20;
// cout<<20;

// }
//call by reference
void sum(int &b){
b=20;
cout<<b;

}

int main()
{
int a=10;

sum(a);
cout<<a;
   


}