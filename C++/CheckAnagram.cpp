/**
* given 2 string s and r , |s| and |r| <= 1e6 
* check these are anagram or not?
* See Anagram :  https://en.wikipedia.org/wiki/Anagram
**/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,r;cin>>s>>r;
    sort(s.begin(),s.end());
    sort(r.begin(),r.end());
    
    if(s==r)
    {
        cout<<"Anagrams!"<<endl;
    }
    else
    {
        cout<<"Not Anagrams!"<<endl;
    }
    return 0;
}
