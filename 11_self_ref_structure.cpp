//OOPS
//self reference structure
#include<iostream>
using namespace std;
struct info
{
    int number;
    string name;
    struct info *link;
};

int main()
{
    info p;
    p.link=NULL;
    p.number=10;
    p.name="Priya";

    info d;
    d.number=20;
    d.name="Riya";
    p.link=&d;
    cout<<p.link->number;
    cout<<p.link->name;
    return 0;
}
//compile issue name output nahi a rhaa