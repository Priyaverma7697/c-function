//Move all zero elements to end of the array	
#include <iostream>
using namespace std;	 
void zerotoend(int a[]){
int temp, index=0;
for(int i=0; i<5; ++i){
    if(a[i]!=0){
        temp=a[i];
        a[i]=a[index];
        a[index]=temp;
        index++;
    }
}
}
int main() {
int a[]={1,0,2,0,3};
int index=0; 
zerotoend(a);
for(int i=0; i<5; ++i){
    cout<<a[i];
}
}
