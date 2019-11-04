#include<bits/stdc++.h>
using namespace std;
int main()
{
 string s,t;
 cout<<"Enter your string: ";
 cin>>s;
 t=s;
 reverse(t.begin(),t.end());
 if(t==s)
  cout<<"Palindrome!!!"<<endl;
 else
  cout<<"Not a Palindrome"<<endl;
return 0;
}
