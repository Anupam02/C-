//2018-02-18 18:41:00
#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>

using namespace std;

int main() {
  int n, k,indexOfK,countS, countL;
  cin>>n>>k;
  int arr[n];
  indexOfK = countS = countL = 0;
  for(int i = 0; i < n ; i++)
    cin>>arr[i];
  for(int i = 0; i < n ; i++){
    if ( arr[i]== k) {
      indexOfK = i;
      break;
    }
  }
  for(int i = 0; i < indexOfK; i++){
    if(arr[i] < k)
      countS += 1;
    else
      countL += 1;
  }
  int min = countS < countL ? countS : countL;
  cout<<min<<endl;
  return 0;
}
  
  // int n,k,indexOfK,noOfSwapsForSmaller,noOfSwapsForLarger,noOfSwapsOppL,noOfSwapsOppS;
//   cin>>n>>k;
//   int arr[n],arr_copy[n];
//   vector<int> V(n);
//   // for(int i = 0; i < n; i++) {
//   //   cin>>input;
//   //   V.push_back(input);
//   // }
//   // int arr[n];
//   for(int i = 0; i < n; i++) {
//     cin>>arr[i];
//   }
//   copy(arr,arr+n,arr_copy);
//   //sort(arr,arr+n);
//   indexOfK = 0;noOfSwapsForLarger = 0; noOfSwapsForSmaller = 0;noOfSwapsOppS =0; noOfSwapsOppL = 0;
//   // for (int i = 0; i < n; i++) {
//   //   if ( arr[i] >= k) {
//   //     indexOfK = i;
//   //     break;
//   //   }
//   // }
//   // for (int i = 0; i < indexOfK; i++) {
//   //   if ( arr_copy[i] >= k) {
//   //     noOfSwapsForSmaller += 1;
//   //   } else {
//   //     noOfSwapsOppS += 1;
//   //   }
//   // }
//   // for (int i = indexOfK; i < n; i++) {
//   //   if ( arr_copy[i] >= k) {
//   //     noOfSwapsForLarger += 1;
//   //   } else {
//   //     noOfSwapsOppL += 1;
//   //   }
//   // }
//   // int min = noOfSwapsForSmaller < noOfSwapsForLarger ? noOfSwapsForSmaller : noOfSwapsForLarger;
//   // cout<<min<<" "<<noOfSwapsForLarger<<" "<<noOfSwapsOppL<<" "<<noOfSwapsForSmaller<<" "<<noOfSwapsOppS<<endl;
//   // cout<<noOfSwapsForLarger<<" "<<noOfSwapsForSmaller<<endl;
//   // for (int i = 0; i < indexOfK; i ++) {
//   //   if ( arr_copy[i] < k )
//   //     noOfSwapsForSmaller += 1;
//   //   else
//   //     noOfSwapsForLarger += 1;
//   // }
//   //  int min = noOfSwapsForLarger < noOfSwapsForSmaller ? noOfSwapsForLarger : noOfSwapsForSmaller;
//   //cout<<noOfSwapsForLarger<<noOfSwapsForLarger<<endl;
//   // copy(arr,arr+n,V.begin());
//   // copy(arr,arr+n,arr_copy);
//   // sort(arr,arr+n);
//   // for(int i = 0; i < n; i++) {
//   //   cout<<arr[i]<<" ";
//   // }
  
//   // cout<<endl;
//   // for(int i = 0; i < n; i++) {
//   //   cout<<arr_copy[i]<<" ";
//   // }
//   // cout<<endl;
//   return 0;
// }
