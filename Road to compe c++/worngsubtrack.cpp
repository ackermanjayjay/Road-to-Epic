#include <iostream>  
using namespace std;
 
int main() {
   int a ;
   int b ;
 cin>>a>>b;
 for(int i=0; i<b; i++)
 {
 if(a%10==0)
 {
    a/=10;
 }else{
     a--;
 }
 }
  cout<<a;
}