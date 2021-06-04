#include<iostream>

using namespace std;


class Deret_ganjil
{
    public:
    int mulai=11,    
        akhir=50,
        hasil;

        bool hitungderet(int cek)
        {
            hasil=cek;
            mulai;
            akhir;
            cout<<"angka awal: "<<mulai<<endl;
            hasil=tampilanderet(mulai);
          
            return mulai;
        }
        int tampilanderet(int again)
        {
        
            akhir;
            for(again;again<=akhir;again++)
            {
                
                for(int i=2;i<=(again/2);i++)
                {
                if(again%2==1&&again!=25)
                    cout<<again<<" ";
                    break;
                
                
            }
            }
            return 0;
        }
};
int main()
{
        Deret_ganjil coba;
        coba.hitungderet(0);
}