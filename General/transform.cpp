// 2018-02-14 09:12:27
// program showing use of transform

// Using transform function of STL, we can add arrays in single line.

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int arr1[]= {1,2,3};
  int arr2[]= {4,5,6,7}; // should be greater than arr1 size

  int n = sizeof(arr1)/sizeof(arr1[0]);
  cout<<"n = "<<n<<endl;
  int res[1];
  cout<<"res[0] = "<<res[0]<<endl;
  cout<<"res[1] = "<<res[1]<<endl;

  transform(arr1,arr1+n,arr2, res, plus<int>());

  for(int i= 0; i < n; i++) {
    cout<<"i = "<<i<<" res[i] = "<<res[i]<<endl;
  }
  cout<<endl;
  return 0;
}

