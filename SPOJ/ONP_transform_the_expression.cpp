// 2018-02-17 23:52:30 
#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool isOperator(char c)
{
    if ( c == '+' || c == '-' || c == '*' || c == '/' || c == '%' || c == '^' )  {
        return true;
    }
    return false;
}

int main(int argc, char* argv[])
{
    int t;
    char c;
    string expression;
    string::iterator it;
    cin>>t;
    stack<char> par;
    while (t--) {
        cin>>expression;
	// for ( it = expression.begin(); it != expression.end(); it++)
	//   cout<<*it<<endl;

	for ( it = expression.begin(); it != expression.end() ; it++) {
	  c = *it;
	  if ( c == '(' || isOperator(c)) {
	    par.push(c);
	    //  cout<<"inside first if c = "<<c<<endl;
	  } else if ( isalpha(c) ) {
	    cout<<c;
	  } else if ( c == ')') {
	    while( par.top() != '(') {
	      cout<<par.top();
	      par.pop();
	      // cout<<par.pop();
	    }
	    par.pop();
	  }
	}
	cout<<endl;
        // for (it = expression.begin(); it != expression.end(); it++)
        // {
	//   if (*it == '(' || isOperator(*it))
	//     par.push(*it);
	//   else if ((*it).isalpha())
	//     cout<<*it;
	//   else if (*it == ')') {
	//     while (par.top() != '(')
	//       cout<<par.pop()
        // }
     
    }
    return 0;
}
