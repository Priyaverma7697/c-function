//if an array is shorted in ascending order
#include <iostream>
using namespace std;
//find the unique value
void shorting(int a[]){
    int temp;
for(int i=0; i<5; ++i){
    for(int j=i+1; j<5; ++j){
        if(a[i]>a[j]){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
} 
}
int main() {
int a[5]={3,1,2,5,4};
shorting(a);
for(int i=0; i<5; ++i){
    cout<<a[i];
}
} 
