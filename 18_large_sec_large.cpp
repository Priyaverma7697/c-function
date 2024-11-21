#include <iostream>
using namespace std;
int big(int a[]){
int large_num=a[0];
for(int i=0; i<5; ++i){
    if(a[i]>large_num){
        large_num=a[i];
    }
}
return large_num;
}
int sec_big(int a[], int large_num){
int second_large=-1;
    for(int i=0; i<5; ++i){
        if(a[i]>second_large && a[i]!=large_num){
            second_large=a[i];
        }
    }
return second_large;
}
int main() {
int a[5]={1,2,3,4,5};
int large_num=big(a);
int second_large=sec_big(a, large_num);
cout<<large_num<<endl;
cout<<second_large;
}