#include<bits/stdc++.h>
using namespace std;

// Class create
class Student
{
// public:
 string name;
 int age;
 int roll;

// By setter and getter
 public:
 void setName(string n){
    if(n.size() == 0){
        cout<<"Invalid Name"<<endl;
        return;
    }
    name = n;
 }

 void getName(){
    cout<<name;
 }
 
};

int main(){
  Student s1;
//   s1.name = "Rahul";
//   s1.age = 23;
//   s1.roll = 34;

//   cout<<s1.name<<s1.age<<s1.roll;

// without Public kiye
s1.setName("");
s1.getName();



  

  return 0;
}