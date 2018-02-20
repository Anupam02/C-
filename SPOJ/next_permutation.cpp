// 2018-02-18 20:45:29
#include <iostream>
#include <algorithm>
using namespace std;
int A[1000001];
//int B[1000001];
int main() {
  int t,n;
  cin>>t;
  while(t--) {
    cin>>n;
    for(int i = 0; i < n; i++)
      cin>>A[i];
    //  copy(A,A+n,B);
    if(next_permutation(A, A+n)) {
    //  sort(B,B+n);
    for(int i = 0; i < n; i++)
      cout<<A[i];
    }
    else {
      cout<<"-1";
    }
    cout<<endl;
  }
  return 0;
}
