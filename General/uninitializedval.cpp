#include <iostream>

using namespace std;

int main() {
  int a;
  cout<<&a<<endl;
  int *b ;//dangling pointers
  cout<<b<<endl;
  b = &a;
  cout<<b<<endl;
  a = 10;
  return 0;
}
