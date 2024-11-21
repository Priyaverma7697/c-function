#include <iostream>
using namespace std;
//find the unique value
void unique(int a[]){
    for(int i=0; i<5; ++i){
        bool unique=true;
        for(int j=0; j<5; ++j){
            if(i!=j && a[i]==a[j]){
                unique=false;
            }
        }
        if(unique){
            cout<<a[i];
        }
    }
}
int main() {
int a[5]={1,2,1,2,5};
unique(a);
}   
