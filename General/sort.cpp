// 2018-02-15 10:57:07
#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
using namespace std;

int main() {
  int n,input;
  cin>>n;
  vector<int> V; // try with vector<int> V(n)
  while(n--) {
    cin>>input;
    V.push_back(input);
  }
  
  for(int i = 0; i < V.size(); i++)
    cout<<V[i]<<" ";
  cout<<endl;

  sort(V.begin(),V.end());
  for(vector<int>::iterator  it = V.begin(); it != V.end(); it++)
    cout<<*(it)<<" ";
  
  cout<<endl;
  return 0;
}
