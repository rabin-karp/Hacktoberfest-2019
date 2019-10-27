#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;cin>>s;
  int cnt=0;
  for(int i=0;i<s.length();i++)
  {
    if(s[i]>='A' && s[i] <= 'Z')cnt++;
  }
  cout<<"Upper_char_count:"<<cnt<<endl;
}
