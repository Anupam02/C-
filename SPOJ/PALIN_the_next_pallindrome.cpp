// 2018-02-18 00:42:03
#include <iostream>
#include <iterator>

using namespace std;
int A[1000001] = {};

void mirrorLeftToRight(int A[],int size) {
  for (int i = 0; i < size/2 ; i++){
    A[size-i-1] = A[i];
  }
}
  
      

int main() {
  int t,size,j,mid_size,i;
  string input;
  bool found;
  string::iterator it;
  cin>>t;
  while(t--) {
    cin>>input;
    found = false;
    size = input.size();
    j = 0;i=0;
    for(it = input.begin(); it != input.end() ; it++) {
      int int_eq = *it - '0';
      A[j++] = int_eq;
    }
    mid_size = size/2;
    while ( i < size/2) {
      if(A[i] > A[size-i-1]) {
	cout<<"i = "<<i<<" size-i-1 = "<<size-i-1<<endl;
	A[size-i-1] = A[i];
		cout<<"inside if";
	mirrorLeftToRight(A,size);
	found = true;
	break;
      } else if (A[i] < A[size-i-1]) {
		 cout<<"Inside  else if";
	i++;
      } 
      i++;
            cout<<"outside everything";
    }
    if (!found) {
           cout<<"inside found clause and i = "<<i<<endl;
      A[i] = A[size-i-1] = A[size-i-1]+1;
      mirrorLeftToRight(A,size);
    }
    for(int i = 0; i < size ; i++)
      cout<<A[i];
    cout<<endl;
  }
  return 0;
    
}

// int main() {
//   int t, size,j,mid_size;
//   string input;
//   string::iterator it;
//   cin>>t;
//   while(t--) {
//     cin>>input;
//     size = input.size();
//     j = 0;
//     for ( it = input.begin(); it != input.end(); it++) {
//       int int_eq = *it - '0';
//       A[j++] = int_eq;
//     }
//     mid_size = size/2;
//     for ( int i = mid_size ; i >= 0 ; i-- ) {
//       int min = A[mid_size] < A[size - mid_size -1] ? A[mid_size] : A[size - mid_size -1] ;
//       A[mid_size] = A[size - mid_size - 1 ] = min+1;
    

// int main() {
//   int t,size,j;
//   string input;
//   string::iterator it;
//   cin>>t;
//   while(t--) {
//     cin>>input;
//     size = input.size();
//     j = 0;
//     for(it = input.begin(); it != input.end(); it++) {
//       int int_eq = *it-'0';
//       A[j++] = int_eq;
//       //      cout<<*it<<" "<<i<<endl;
//     }
//     for (int i = 0; i < size/2 ; i++) {
//       if(A[i] < A[size-i-1]) {
// 	A[i] = A[size-i-1];
//       } else {
// 	A[size-i-1] = A[i];
//       }
//     }
//     for( int i = 0; i < size; i++) {
//       cout<<A[i];
//     }
//     cout<<endl;
//   }
//   return 0;
// }

// // From https://stackoverflow.com/questions/1489830/efficient-way-to-determine-number-of-digits-in-an-integer

// int numOfDigits(int n) {
//   n = abs(n);
//   return (x < 10 ? 1 :   
//         (x < 100 ? 2 :   
//         (x < 1000 ? 3 :   
//         (x < 10000 ? 4 :   
//         (x < 100000 ? 5 :   
//         (x < 1000000 ? 6 :   
//         (x < 10000000 ? 7 :  
//         (x < 100000000 ? 8 :  
//         (x < 1000000000 ? 9 :  
//         10)))))))));  
// }pp

// int main() {
//   int t,n,noOfDigits;
//   cin>>t;
//   while (t--) {
//     cin>>n;
//     noOfDigits = numOfDigits(n);
//     int A[n];
//     for (int i = 0; i < noOfDigits ; i++) {
//       A[i] = n % pow(10,noOfDigits);
//     }

// int  arrEquivalentandreturnSize( str ) {
//   int i = 0;
//   while( n ) {
//     A[i++] = n%10;
//     n = n/10;
//   }
//   return i;
// }

// int main() {
//   int t,n,size;
//   cin>>t;
//   while (t--) {
//     cin>>n;
//     size = arrEquivalentandreturnSize( n );
//     cout<<"size = "<<size<<endl;
//     for(int i = 0; i < size; i++) {
//       cout<<A[i]<<" ";
//     }
//     cout<<endl;
//   }
//   return 0;
// }

