#include<iostream>
using namespace std;
int factorial(int num){
if(num<=1){
    return 1;
}
else{
    return num* factorial (num-1);
}

}
int main(){
int num=5;
cout<<factorial(num);
    return 0;
}