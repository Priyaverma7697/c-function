#include <iostream>
using namespace std;
//find the unique value
void frequency(int a[]){
    for(int i=0; i<5; ++i){
        int count=1;
        if(a[i]==-1){
        continue;
        }
    for(int j=i+1; j<5; ++j){
        if(a[i]==a[j]){
            count++;
            a[j]=-1;
        }
    }
cout<<count;
}
}
int main() {
int a[5]={1,2,1,2,5};
frequency(a);
}
