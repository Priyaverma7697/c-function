//check if an array is palindrome 
#include <iostream>
using namespace std;
bool palindrome(int a[], int n){
for(int i=0; i<n/2; ++i){
    if(a[i]!=a[n-i-1]){
        return false;
    }
}
return true;
}
int main() {
int a[]={1,2,3,2,1};
int n=5;
if(palindrome(a, n)){
    cout<<"palindrome";
}
else{
    cout<<"Not palindrome";
} 
}
