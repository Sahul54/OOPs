#include<bits/stdc++.h>
using namespace std;

class Constructor{
public:
string name;
long account_NO;
long balance;

// default Constructor
Constructor(){
    cout<<"Constructor Was called...."<<endl;
}

inline Constructor(string a, int b, int c ): name(a), account_NO(b), balance(c){

}

void display(){
  cout<<name<<" "<<account_NO<<" "<<balance<<endl;
}

};
int main(){
    Constructor a1;
    Constructor a2("rahul",34,1000);
    a2.display();
  return 0;
}