#include<iostream>

using namespace std;


class Deret
{
    public:
    int mulai=1,    
        akhir=10,
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
            int cek_lagi;
            for(again;again<=10;again++)
            {
                for(int j=1;j<=again;j++ )
                {
                    
                    cek_lagi=again*2+j;
                    cout<<cek_lagi<<" ";
                }
                cout<<endl;
            }
            return 0;
        }
};
int main()
{
        Deret coba;
        coba.hitungderet(0);
}