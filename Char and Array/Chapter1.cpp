#include<bits/stdc++.h>
using namespace std;

int findLength(char name[], int size){
    int index = 0;
    while (name[index] != '\0')
    {
        index++;
    }
    return index;
    
}

void reverseWord(char name[], int size){
    int s = 0;
    int e = size-1;

    while(s<=e){
        swap(name[s], name[e]);
        s++;
        e--;
    }

    cout<<name;
}
int main(){
    // char a[10]; //= {'a','b','c','d',' ','f','g','a','b','c'};
    // // cin>>a;
    // cin.getline(a, 15);  // space k sath agr print krwna ha to cin.getline(varable Name, size) pass krna padta hai
    // cout<<a<<endl;
    // // cout<<a[15]<<endl;
    // for(int i =0; i<=15; i++){
    //    cout<<a[i]<<endl; 
    // }

    // cout<<"size of char a: "<<sizeof(a)<<endl;
    // cout<<strlen(a);



    // reverse string

    char name[10];
    cin>>name;

    int length = findLength(name, 10);
    reverseWord(name, length);
    cout<<name;
    // cout<<length;
  return 0;
}