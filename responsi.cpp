#include <iostream>
#include <fstream>
#include <stdio.h>	// fungsi kompiler
#include <string.h>
using namespace std;

class Responsiuas{
	friend istream& operator>>(istream& in, Responsiuas& a);
    friend ostream& operator<<(ostream& out,Responsiuas& a);
	
    public:	//pengaksesan suatu variabel instan atau method dapat dilakukan diluar kelas
    void inputbarang();
    void sorting();
	void searching();
   
    private:  //pengaksesan suatu variabel instan atau method hanya dapat dilakukan didalam kelas itu saja
    int kode[10]; 
	string tipe[20];
	int jumlah[10];
	int i, n, b, cari, ada;
    	
};
// void  (kata kunci di bahasa pemrograman)
void Responsiuas::inputbarang(){	//proses input judul
	cout<<"==============================================================="<<endl;
	cout<<"|           RESPONSI PROGRAM SORTING DAN SEARCHING             |"<<endl;
	cout<<"|      ADELIA SYARLA CHORESA-2100018043-SLOT JUMAT 13.30       |"<<endl;
	cout<<"================================================================"<<endl;

	//proses input banyak data
	cout<<"Masukan banyak data = ";cin>>n;

 	for(i=0;i<n;i++){
    	cout<<endl;



      	cout<<"Data ke-"<<(i+1)<<":"<<endl;
      	cout<<"Input Kode Produksi : ";cin>>kode[i];
      	cout<<"Input Tipe Bumper   : ";cin.ignore();  //fungsi untuk spasi input tipe bumper
									   getline(cin,tipe[i]);
      	cout<<"Input Jumlah        : ";cin>>jumlah[i];
      	cout<<endl;
      	}

      cout<<"Data Barang Anda"<<endl;
      cout<<"============================================================================="<<endl;
      cout<<"|             Kode Produksi    |    Tipe Barang    |         Jumlah         |"<<endl;
	  cout<<"============================================================================="<<endl;

        for(i=0;i<n;i++){
        	cout<<"|            "<<kode[i]<<"\t\t\t"<<tipe[i]<<"\t\t\t"<<jumlah[i]<<"             |"<<endl;

        }cout<<endl;

      cout<<"============================================================================="<<endl;
}
//kode sorting program (proses mengatur sekumpulan objek menurut urutan atau susunan tertentu)
void Responsiuas::sorting(){
	for(i=0;i<n;i++){
             for(b=0;b<n-1;b++){
                if(kode[b] > kode[b+1]){
					kode[b]=kode[b];
                    kode[b]=kode[b+1];
                    kode[b+1]=kode[b];

                    tipe[b]=tipe[b];
                    tipe[b]=tipe[b+1];
					tipe[b+1]=tipe[b];

                    jumlah[b]= jumlah[b];
                    jumlah[b]= jumlah[b+1];
                	jumlah[b+1]= jumlah[b];
                     }
                  }
               }
               cout<<endl;
        cout<<endl;
    cout<<endl;
// hasil variabel input yang telah diurutkan
        cout<<"Setelah data diurutkan : "<<endl;
        cout<<"============================================================================="<<endl;
        cout<<"|                Jumlah     |       Tipe Bumper  |         Kode produksi    |"<<endl;
        cout<<"============================================================================="<<endl;
        
        for(b=0;b<n;b++){
        	cout<<"|              "<<jumlah[b]<<"\t\t\t"<<tipe[b]<<"\t\t\t"<<kode[b]<<"          |"<<endl;
        }

        cout<<"============================================================================="<<endl;		
}
//proses penvarian program yang ingin dicari
void Responsiuas::searching(){
	cout<<endl;
	
        cout<<"Masukan Kode Bumper Untuk Mencari : ";
		cin>>cari;
        ada = 0;
        
        for(b=0;b<n;b++){
            if(kode[b]==cari){
                    ada=1;
                    cout<<"============================================================================="<<endl;
                    cout<<"|          Kode Barang  |       Nama Barang  |           Stock Barang       |"<<endl;
        			cout<<"============================================================================="<<endl;
                    cout<<"|             "<<kode[b]<<"\t\t\t"<<tipe[b]<<"\t\t\t"<<jumlah[b]<<"         |"<<endl;
                }     
            }
                    cout<<"============================================================================="<<endl;

        if (ada == 0)
//kode gagal penemuan program
            {
                cout<<"Data Tidak ditemukan"<<endl;
            }
}
int main(){
		Responsiuas run;
		run.inputbarang();
		run.sorting();
		run.searching();
	};
