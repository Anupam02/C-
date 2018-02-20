// 2018-02-18 22:36:13
#include <iostream>

int A[1000001];

using namespace std;

bool sameElem(int A[],int n) {
  for (int i = 0 ; i < n -1 ; i++)
    if(A[i] != A[i+1])
      return false;
  return true;
}

int main() {
  int t,n,temp;
  bool found;
  cin>>t;
  while (t--) {
    cin>>n;
    found = false;
    for(int i = 0; i < n; i++)
      cin>>A[i];
    for(int i = n-1; i > 0; i--) {
      if(A[i] > A[i-1]) {
	// cout<<"inside if i , A[i] : "<<i<<A[i]<<" i-1 , A[i-1] : "<<i-1<<A[i-1]<<endl;
	swap(A[i],A[i-1]);
	// cout<<"after swap i , A[i] : "<<i<<A[i]<<" i-1, A[i-1] : "<<i-1<<A[i-1]<<endl;
	found = true;
	break;
      }
    }
    if(found) {
      for(int i = 0 ; i < n; i++)
	cout<<A[i];
      // cout<<endl;
    } else {
      if( sameElem(A , n) )
	cout<<"-1";
      else
	for(int i = n-1 ; i >= 0; i--)
	  cout<<A[i];
      // for(int i = 0; i < n; i++)
      // 	cout<<"i = "<<i<<" A[i] = "<<A[i];
      // cout<<"-1";
      // cout<<endl;
    }
    cout<<endl;
  }
  return 0;
}
