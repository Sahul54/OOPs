#include<bits/stdc++.h>
using namespace std;
class Student{
 public:   
 string name;
 int roll;
 int age;
};
int main(){
    // Student static;
    // static.name = "rahul";
    // static.roll = 23;
    // static.age = 23;

    // cout<<static.name<<" "<<static.roll<<" "<<static.age<<endl;

   Student *dynamic = new Student;
   (dynamic)->name = "rahul";
   (*dynamic).roll = 45;
   (*dynamic).age = 21;
   cout<<dynamic->name<<" ";
   cout<<dynamic->roll<<" ";
   cout<<dynamic->age<<" ";

  return 0;
}