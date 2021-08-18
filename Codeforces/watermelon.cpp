#include <bits/stdc++.h>
using namespace std;

int a=0;
void solve()
{
    cin>>a;
   
 
    if(a<=2 || a%2!=0)
    {
        cout<<"NO";
    }
     else if(a%2==0)
   {
       cout<<"YES";
   }
   
   
}

int main()
{
    solve();
}