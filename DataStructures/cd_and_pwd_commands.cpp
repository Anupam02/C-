// 2018-02-21 17:42:04
#include <iostream>
#include <cstdio>
#include <stack>
#include <iterator>

using namespace std;

int main() {
  int n;
  string command;
  stack<string> path ,temp;
  cin>>n;
  cout<<n<<endl;
   cin.ignore();
  while(n--) {
    path.push("/");
    //cin.ignore();
    getline(cin,command);
    // scanf("%[^\n]%*s",command);
    //getline(cin, command);
    cout<<command<<endl;
    if(command == "pwd") {
      // cout<<"inside if pwd"<<endl;
      // cout<<path.empty()<<endl;
      while (!path.empty()) {
	// cout<<path.top();
	temp.push(path.top());
	path.pop();
	// cout<<"abc"<<endl;
      }
      // cout<<temp.empty()<<endl;
      while (! temp.empty()) {
	cout<<temp.top()<<endl;
	temp.pop();
      }
      // cout<<"def"<<endl;
    } // else if ( command.compare(0, sizeof("cd"), "cd") == 0) {
    else if ( command.find("cd") == 0) {
      cout<<command<<endl;
      cout<<"inside else condition"<<endl;
    }
     cout<<"outside default"<<endl;
  }
  return 0;
}
