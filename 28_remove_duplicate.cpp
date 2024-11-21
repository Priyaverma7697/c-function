//Remove all duplicates from an array keeping only the first occurrences of each element
#include<iostream>
using namespace std;
void remove(int a[]){
for(int i=0; i<5; ++i){
    for(int j=i+1; j<5; ++j){
        if(a[i]==a[j]){
            a[j]=-1;
        }
    }
}
int index=0;
for(int j=0; j<5; ++j){
    if(a[j]!=-1){
        a[index++]=a[j];
    }
}
for(int i=0; i<index; ++i){
    cout<<a[i];
}
}
int main()
{
    int a[]={1,2,3,2,1};
    remove(a);
    return 0;
}