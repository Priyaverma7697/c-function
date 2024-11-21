//Remove all occurrences of a specific element from an array.
#include<iostream>
using namespace std;
void remove(int a[],int target){
int index=0;
for(int i=0; i<5; ++i){
    if(a[i]!=target){
        a[index++]=a[i];
        cout<<a[i];
    }
}
cout<<endl;
}
int main()
{
    int a[5]={1,2,3,2,5};
    int target=2;
    remove(a, target);
    return 0;
}