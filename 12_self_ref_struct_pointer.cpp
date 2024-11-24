//self reference structure
//pointer se value access karna 
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
    info d;
    d.number=120;
    d.name="Riya";

    info *p=&d;
    cout<<p->number;
    cout<<p->name;
    return 0;
}



