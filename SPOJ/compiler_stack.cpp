// 2018-02-19 00:37:42
#include <iostream>
#include <stack>

using namespace std;
int main(){
  int t,count;
  cin>>t;
  string input;
  while(t--) {
    cin>>input;
    stack<char> exp;
    // cout<<"size of stack = "<<exp.size()<<endl;
    count = 0;
    // cout<<"after count"<<endl;
    for (int i = 0; i < input.size(); i++) {
      if( input[i] == '<') {
	exp.push(input[i]);
      } else if (input[i] == '>') {
	if(exp.size() > 0 && exp.top() == '<' ) {
	  exp.pop();
	  count += 2;
	}
      } else
	break;
    }
    if(exp.empty())
      cout<<count<<endl;
    else
      cout<<"0"<<endl;
    // while(exp.empty()) exp.pop();
    // cout<<count<<endl;
   }
    
    // for(int i = 0; i < input.size(); i++) {
  //     if ( input[i] == '<') {
  // 	exp.push(input[i]);
  //     } else if (input[i] == '>') {
  // 	if (exp.top() == '<') {
  // 	  exp.pop();
  // 	  count += 2;
  // 	}
  // 	exp.push(input[i]);
  //     }
  //   }
  //   cout<<count<<endl;
  //}
  return 0;
}
    
