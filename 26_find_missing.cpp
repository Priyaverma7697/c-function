//Find the missing number in an array of consecutive integer
#include <iostream>
using namespace std;
int missnum(int a[], int n){
int sum;
sum=n*(n+1)/2;
int sum_two=0;
for(int i=0; i<n-1; ++i){
    sum_two=sum_two+a[i];
}
return sum-sum_two;
}
int main() {
int a[]={1,3,4,5,6};
int n=5;
int mis_num=missnum(a,n);
cout<<mis_num;
}
