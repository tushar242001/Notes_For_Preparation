// Check whether the string is palindrome or not 


code : 
#include<bits/stdc++.h>
#include <iostream>
using namespace std;
bool checkpalindrome(string s)
{
    string st=s;
     for (auto& x : st) { 
        x = tolower(x); 
    } 
    stack<char> arr;
    stack<char> arr2;
    for(int i=0;i<st.length();i++)
    {
        char c=st[i];
        if(c!=' ' && c!=',')
        {
            arr.push(c);
        }
    }
    for(int i=st.length()-1;i>=0;i--)
    {
        char c=st[i];
        if(c!=' ' && c!=',')
        {
            arr2.push(c);
        }
    }
    while(!arr.empty())
    {
        cout<<arr.top()<<" ";
        arr.pop();
    }
    cout<<endl;
    while(!arr2.empty())
    {
        cout<<arr2.top()<<" ";
        arr2.pop();
    }
    cout<<endl;
    while(!arr.empty())
    {
        if(arr.top()!=arr2.top())
        {
            return false;
        }
        else
        {
            arr.pop();
            arr2.pop();
        }
    }
    return true;
}
int main()
{
    string str="A man and Boy, yob dna nama";
    if(checkpalindrome(str))
    {
        cout<<"Yes it is Palindrome"<<endl;
    }
    else
    {
        cout<<"No It is not"<<endl;
    }

    return 0;
}
