//self reference structure
//pointer se value accet karna 
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
    info *p;
    p.number=10;            //incomplete
    p.name="Priya";

    info d;
    d.number=120;
    d.name="Riya";

    p.link=&d;
    cout<<p.link->number;
    cout<<p.link->name;
    return 0;
}



