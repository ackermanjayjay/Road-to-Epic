#include<iostream>
using namespace std;

class Factorial{
    public:
    
    int faktor(int n)
    {
            if(n==0)
            {
                return 1;
            }
            else
            {
                return n*faktor(n-1);
            }
    }
};
int main()
{
Factorial faktor1;

cout<<faktor1.faktor(4);
}