#include<iostream>
using namespace std;
struct info{
    int number;
    string name;

    void display(int num, string name){
        cout<<name<<num;
    }
};
int main()
{
    info p;
    p.display(10, "Priya");
    
}