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
            for(again;again<=5;++again)
            {
                for(int j=1;j<=5;++j )
                {
                    if(again+j )
                    cout<<again+j<<" ";
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