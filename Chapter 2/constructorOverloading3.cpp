#include<bits/stdc++.h>
using namespace std;

class Constructor{
public:
string name;
long account_NO;
long balance;

// default Constructor
// Constructor(){
//     cout<<"Constructor Was called....";
// }

// Parametrized Constructor
// Constructor(string a, long b, long c){
//     name = a;
//     account_NO = b;
//     balance = c;

//     // cout<<name<<account_NO<<balance;
//     // cout<<a<<b<<c;
// }

// same name pass
Constructor(string name, long account_NO, long blance){
    this->name = name;
    this->account_NO = account_NO;
    this->balance = balance;

    // cout<<name<<account_NO<<balance;
    // cout<<a<<b<<c;
}
Constructor(string a, long b){  // function overloading
    name = a;
    account_NO = b;
}

void display(){
    cout<<name<<" "<<account_NO<<" "<<balance<<endl;
}

};
int main(){
    Constructor a1("rahul", 455, 1000);
    Constructor a2("ravi", 23);
    a1.display();
    a2.display();
    // cout<<a1.name<<" "<<a1.account_NO<<" "<<a1.balance<<endl;
    // cout<<a1.a<<" "<<a1.b<<" "<<a1.c; // ----> yese access nhi kr sakte hai Kyuki class Constructor has no member function of a, b, c; 

  return 0;
}