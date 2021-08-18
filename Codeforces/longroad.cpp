#include <bits/stdc++.h>
using namespace std;

string a;
int b;
void solve()
{
cin>>b;
for(int z=0;z<b;b--)
{
    cin>>a;
    if(a.length()>10)
    {
        cout<<a[0]<<a.length()-2<<a[a.length()-1]<<endl;
    }
    else
    {
        cout<<a<<endl;
    }
    
}
}
int main()
{
    solve();
}


 
   