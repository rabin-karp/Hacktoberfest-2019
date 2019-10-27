// Binary Index Tree
/**
* 1 : updation query
* 2 : sum query
* index [ 1, 1e6]
*  q <= 1e6 , val >=0 && val <= 1e2
**/
#include<bits/stdc++.h>
using namespace std;

const int N=1e6;
int arr[N+1];
void update(int I,int val)
{
  while(I<=N)
  {
    arr[I]+=val;
    I+=I&(-I);
  }
}

int sum(int I)
{
  int s=0;
  while(I>=1)
  {
     s+=arr[I];
     I-=I&(-I);
  }
  return s;
}

int main()
{
    int q;cin>>q;
    while(q--)
    {
        int t;cin>>t;
        if(t==1)
        {
            int I,val;cin>>I>>val;
            update(I,val);
        }
        else
        {
            int I;cin>>I;
            cout<<sum(I)<<endl;
        }
    }
}
  
