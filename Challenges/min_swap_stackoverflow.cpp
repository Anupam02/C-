// 2018-02-18 19:56:03
#include <iostream>

using namespace std;

int main() {
  int n,k,noOfLessthanK,noOfMorethanK,noOfLessInLessK,noOfMoreInMoreK;
  cin>>n>>k;
  int A[n];
  for(int i = 0; i < n; i++)
    cin>>A[i];
  noOfLessthanK = noOfMorethanK = 0;
  noOfLessInLessK = noOfMoreInMoreK = 0;
  for(int i = 0; i < n; i++)
    if(A[i] < k)
      noOfLessthanK += 1;
    else
      noOfMorethanK += 1;

  for(int i = 0; i < noOfLessthanK; i++)
    if(A[i] <  k)
      noOfLessInLessK += 1;

  for(int i = 0; i < noOfMorethanK; i++)
    if(A[i] >= k)
      noOfMoreInMoreK += 1;

  int min = (noOfLessthanK - noOfLessInLessK) < ( noOfMorethanK - noOfMoreInMoreK) ? (noOfLessthanK - noOfLessInLessK) : ( noOfMorethanK - noOfMoreInMoreK);
  cout<<min<<endl;
  return 0;
}
