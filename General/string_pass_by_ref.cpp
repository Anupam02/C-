#include <iostream>

using namespace std;
void pass_by_val(string name);
void pass_by_ref(string & name); // pass by reference is like alias
void pass_by_pointer(string *name);
void pass_by_ref_const(const string & name);

int main() {
  // cout<<"Hello World!\n";
  string my_name;
  my_name = "Anupam";
  // cin>>my_name;
  cout<<"my name before call by value is : "<<my_name<<endl;
  pass_by_val(my_name);
  cout<<"my name after call by value is : "<<my_name<<endl;
  cout<<"+++++++++++++++++++++++++++++++++++++++++++"<<endl;
  cout<<"my name before call by ref is : "<<my_name<<endl;
  pass_by_ref(my_name);
  cout<<"my name after call by ref is : "<<my_name<<endl;
  cout<<"+++++++++++++++++++++++++++++++++++++++++++"<<endl;
  cout<<"my name before call by pointer is : "<<my_name<<endl;
  cout<<"Address of my_name = "<<&my_name<<endl;
  pass_by_pointer(& my_name);
  cout<<"my name after call by pointer is : "<<my_name<<endl;
  return 0;
}

void pass_by_val(string name) {
  cout<<"inside pass by val name = "<<name<<endl;
  name = "Anurag";
  cout<<"inside pass by val name = "<<name<<endl;
}

void pass_by_ref(string & name) {
  cout<<"inside pass by ref name = "<<name<<endl;
  name = "Anurag";
  cout<<"inside pass by ref name = "<<name<<endl;
}

void pass_by_pointer(string * name) {
  cout<<"Address of values stored at name = "<<name<<endl;
  cout<<"inside pass by pointer name = "<<*name<<endl;
  *name = "Anupam";
  cout<<"inside pass by pointer name = "<<*name<<endl;
}

void pass_by_ref_const(const string & name) {
  // name = "Aditya"; // cant change the value
}
