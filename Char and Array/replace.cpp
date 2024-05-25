#include <bits/stdc++.h>
using namespace std;

void replace(char ch[], int size)
{
    int index = 0;

    while (ch[index] != '\0')
    {
        if (ch[index] == ' ')
        {
            ch[index];
        }
        index++;
    }
}

bool checkPalindrome(char ch[], int size)
{
    int s = 0;
    int e = size - 1;

    while (s <= e)
    {
        if (ch[s] != ch[e])
        {
            return false;
        }
        s++;
        e--;
    }
    return true;
}
int main()
{
    char ch[54];
    cin.getline(ch, 54);

    int length = strlen(ch);
    // cout<<length;
    // replace(ch, length);
    // cout << ch;
    bool ans = checkPalindrome(ch, length);
    // cout<<ans;

    if(ans){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}