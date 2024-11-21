//check if an array contains a specific element
#include <iostream>
using namespace std;
bool findtarget(int a[], int target){
for(int i=0; i<5;++i){
    if (a[i]==target){
        return true;
    }
}
return false;  
}
int main() {
int target=5;
int a[5]={3,1,2,5,4};
if(findtarget (a,target)){
    cout<<"Target found";
}
else{
    cout<<"Target not found";
}
}
