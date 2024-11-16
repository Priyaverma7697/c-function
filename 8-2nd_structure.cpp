#include<iostream>
using namespace std;
struct info{
    int rolln;
    char section;
    string name;
    float marks[5];
void display(struct info a){
 cout<<a. rolln;
}
};
int main()
{
    info p{1,'A',"Riya",{1,2,3,4,5}};
    p.display(p);
    return 0;
}