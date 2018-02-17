// 2018-02-17 17:52:34
#include <iostream>
#define N 10000000002

using namespace std;

bool A[N] = {};
int main() {
  fill_n(A,N,true);
  A[0] = A[1] = false;
  for(long long int i = 4 ; i < N; i += 2)
    A[i] = false;
  for(long long int i = 6 ; i < N; i += 3)
    A[i] = false;
  for(long long int i = 10 ; i < N; i += 5)
    A[i] = false;
  for(long long int i = 14 ; i < N; i += 7)
    A[i] = false;
  for(long long int i = 22 ; i < N; i += 11)
    A[i] = false;
  for(long long int i = 26 ; i < N; i += 13)
    A[i] = false;
  long long int t,l,r;
  cin>>t;
  while(t--) {
    cin>>l>>r;
    for(int i = l ; i <= r; i++)
      if(A[i])
	cout<<i<<endl;
  }
  
  return 0;
}
  
