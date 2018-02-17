#include <iostream>
using namespace std;
bool isPrime(long long int n) {
  if ( n == 1 ) return false;
  if ( n == 2 ) return true;
  for (long long int i = 2 ; i*i <= n; i++) {
    if ( n % i == 0) return false;
  }
  return true;
}

int main() {
  long long int t, l, r;
  cin>>t;
  while(t--) {
    cin>>l>>r;
    for(long long int i = l ; i <= r ; i++ )
      if(isPrime(i))
	cout<<i<<endl;
  }
  return 0;
}
    
    

