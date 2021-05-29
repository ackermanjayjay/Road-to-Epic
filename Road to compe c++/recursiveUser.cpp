#include<iostream>
using namespace std;

class Faktor{
    public:
    int n, hasil;
   //Contructor 
     //menginisiai nilai variable
    Faktor(int nih, int noh){
      // initialize private variables
      //alias menggunakan ini jika public maka tak perlu
      //hanya jika private private variable
        n=nih;
        hasil=noh;
    }
    // Function to faktor 
       int faktor(int n)
    {
        if(n>1)
        {
            return n*faktor(n-1);
        }
        else
        {
            return 1;
        }
      
    }
    int getfaktornih()
    {
        cin>>n;
        hasil = faktor(n);
        return n;
    }
 
 
    void display()
    {
        cout<<"hasil dari faktor"<<n<<" = "<<hasil<<endl;
    }
};
int main()
{
Faktor coba(0,0);
coba.getfaktornih();
coba.faktor(0);
coba.display();
}
