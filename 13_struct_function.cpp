#include<iostream>
using namespace std;
struct info{
    int number;
    string name;
    void display(info p){
        cout<<p.number<<p.name;
    }
};
int main()
{
    info p={1,"Riya"};
    p.display(p);
    return 0;
}