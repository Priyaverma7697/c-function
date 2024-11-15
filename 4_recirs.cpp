#include<iostream>
using namespace std;
// jisme ek hi chij bar bar repeat hoti hai.. usme recursion use hota hi
int sum(int num){
if(num<=1){
    return 1;
}
else{
    return num+sum(num-1);
}

}
int main()
{
int num=10;
cout<<sum(num);
    return 0;
}