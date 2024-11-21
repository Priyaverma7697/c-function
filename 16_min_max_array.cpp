#include <iostream>
using namespace std;
//minimum and maximum elements of array
int max(int a[], int n){
    int max=a[0];
    for(int i=0; i<10; ++i){
        if(a[i]>max){
            max=a[i];
        }
    }
    return max;
}
int min(int a[], int n){
    int min=a[0];
    for(int i=0; i<10; ++i){
        if(a[i]<min){
            min=a[i];
        }
    }
    return min;
}
int main() {
const int n=10;
int a[n];
cout<<"enter your array elements: "<<endl;
for(int i=0; i<10; ++i){
    cin>>a[i];
}
cout<<"maximum value: "<<max(a, n)<<endl;
cout<<"minimum value: "<<min(a, n)<<endl;

    return 0;
}
