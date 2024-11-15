#include <iostream>
using namespace std;
//minimum and maximum elements of array
int max(int a[10]){
    int max=a[0];
    for(int i=0; i<10; ++i){
        if(a[i]>max){
            max=a[i];
        }
    }
    return max;
}
int min(int a[10]){
    int min=a[0];
    for(int i=0; i<10; ++i){
        if(a[i]<min){
            min=a[i];
        }
    }
    return min;
}

int main() {
int a[10];
cout<<"enter your array elements: "<<endl;
for(int i=0; i<10; ++i){
    cin>>a[i];
}
cout<<"maximum value: "<<max(a[10])<<endl;
cout<<"minimum value: "<<min(a[10])<<endl;

    return 0;
}
