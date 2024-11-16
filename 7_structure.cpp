#include<iostream>
using namespace std;
//struction basic example
struct info
{
    int rolln=1;
    char section='A';
    string name="Riya";
    float marks[5]={1,2,3,4,5};

void display(){
cout<<rolln<<endl<<section<<endl<<name;
}
}p; //yaha per p lena hai... ya second way
int main()
{
    // info p;  //yadi upar p; nahi liye to main me info p; lena hai
    p.display();
    return 0;
}