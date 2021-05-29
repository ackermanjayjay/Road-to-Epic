#include<iostream>
using namespace std;
// class dan object 
class Factorial{
    public:
    
    int faktor(int n)
    {
        //jika ada n sama dengan 0 maka kembalikan nilai 2 
            if(n==0)
            {
                return 1;
            }
            //namun jika n sama dengan 1 maka
            //n dikali faktor(n-1) berulang kali sampai n bernilai 0
            else
            {
                return n*faktor(n-1);
            }
    }
};
int main()
{
    //inisiai class dan object
Factorial faktor1;

//objct yang di pointer yang memfaktor angka 1->4
cout<<faktor1.faktor(4);
}