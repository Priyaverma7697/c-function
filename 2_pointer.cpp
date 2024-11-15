#include <iostream>
using namespace std;
int sum(int *a){
    *a=10;
    return *a;
}
int main() {
  int a;
  cout<<sum(&a);

    return 0;
}
