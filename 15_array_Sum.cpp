#include <iostream>
using namespace std;
void sum(int a[]){
int sum;
for(int i=0; i<5; ++i){
   sum=sum+a[i]; 
}
cout<<sum;
}
int main() {
int a[]={1,2,3,4,5};
sum(a);
    return 0;
}
