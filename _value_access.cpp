//  "How to access the value of struct d using struct p through a pointer?"

// 1. How to correctly declare and initialize struct variables?
// 2. How to use pointers to access struct members?
// 3. How to assign values to struct members through pointers?
#include<iostream>
using namespace std;
struct info{
    int rolln;
    char section;
    string name;
    info *link;  
};
int main()
{
    info p;
    info d;
    p.link=NULL;
    p.rolln=11;
    // p se d ki value access karna
    d.link=NULL;
    d.rolln=12;
    p.link=&d;
    cout<<p.link->rolln;
    return 0;
}

