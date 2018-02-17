// 2018-02-17 16:11:49
#include<iostream>

using namespace std;

int main() {
  int n,min,max,temp;
  while(cin>>n && n != 0) {
    int A[n];
    for(int i = 0; i < n; i++)
      cin>>A[i];
    min = A[0]; max = 0;
    for(int i = 0; i < n; i++) {
      if ( A[i] < min ) {
	min = A[i];
	max = max > min*i ? max : min*i;
	cout<<"inside if : min = "<<min<<", max = "<<max<<endl;
      }
      else {
	max += min;
	cout<<"inside else : max = "<<max<<" min = "<<min<<endl;
      }
    }
    cout<<max<<endl;
  }
  return 0;
}
	
	
