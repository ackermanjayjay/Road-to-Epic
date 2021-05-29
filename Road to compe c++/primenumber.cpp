#include<iostream>
using namespace std;

class Prime{
    public:
    int n;
    bool hasil;
   //Contructor 
     //menginisiai nilai variable
    Prime(int nih){
      // initialize private variables
      //alias menggunakan ini jika public maka tak perlu
      //hanya jika private private variable
        n=nih;
    
    }
    // Function to faktor 
       bool Primetest(int n)
    {
      
      // Corner case
            if (n <= 1) {
            return false;
            } 
 
    // Check from 2 to n-1
    for (int i=2; i<n; i++)
        if (n%i == 0)
            return false;
 
    return true;
    }
    bool getPrime()
    {
        cout<<"Masukkan angka"<<endl;
        cin>>n;
     hasil=Primetest(n);
        return n;
    }
 
 
    void display()
    {
        cout<<"hasil dari bool "<<n<<" = "<<hasil<<endl;
    }
};
int main()
{
    Prime test(0);
    test.getPrime();
    test.Primetest(0);
    test.display();
}