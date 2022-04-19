// Library 
#include<iostream>
using namespace std;

// Struct
struct game{
    string nama, genre;
    int tahun, harga;
};

// Data Elemen Array
int data_game = 0;

// Array Of Struct
game Game[100];

// Prosedur Tambah Data
void tambah_data(){
    cout << "\nMasukkan Nama Game        : "; fflush(stdin);
    getline(cin, Game[data_game].nama);
    cout << "Masukkan Genre Game       : "; fflush(stdin);
    getline(cin, Game[data_game].genre);
    cout << "Masukkan Tahun Rilis Game : "; cin >> Game[data_game].tahun;
    cout << "Masukkan Harga Game       : Rp. "; cin >> Game[data_game].harga;
    data_game++;
}

// Prosedur Ubah Data
void ubah_data(){
    int ubah, no_ubah;
    cout << "\nNomor Berapa Yang Ingin Diubah ?? >> "; cin >> ubah;
    no_ubah = ubah - 1;
    cout << "\nMasukkan Nama Game Yang Baru        : "; fflush(stdin);
    getline(cin, Game[no_ubah].nama);
    cout << "Masukkan Genre Game Yang Baru       : "; fflush(stdin);
    getline(cin, Game[no_ubah].genre);
    cout << "Masukkan Tahun Rilis Game Yang Baru : "; cin >> Game[no_ubah].tahun;
    cout << "Masukkan Harga Game Yang Baru       : Rp. "; cin >> Game[no_ubah].harga;

}

// Prosedur Lihat Data
void lihat_data(){
    for (int i = 0; i < data_game; i++){
        cout << "\n>>>>>>>>>>>>>>>>>>>>>>>>>>>    | " << i+1 << " |   <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << endl 
             << "Nama Game        : " << Game[i].nama << endl
             << "Genre Game       : " << Game[i].genre << endl
             << "Tahun Rilis Game : " << Game[i].tahun << endl
             << "Harga Game       : Rp. " << Game[i].harga << endl;
    }
}

// Prosedur Hapus Data
void hapus_data(){
    int hapus, no_hapus, i;
    cout << "\nNomor Berapa Yang Ingin Dihapus ?? >> "; cin >> hapus;
    no_hapus = hapus - 1;
    data_game--;
    for(i = no_hapus; i < data_game; i++){
        Game[i] = Game[i+1];
    }
}

// Prosedur Tampilan Menu Utama
void tampilan_menu(){
  cout << "================================================" << endl
       << "|---------------Selamat Datang-----------------|" << endl
       << "|--------Di Data Penjualan Game Online---------|" << endl
       << "================================================" << endl
       << "- Dibuat Oleh Alif Maulana Setyawan" << endl
       << "\n>>> --------Menu-------- <<<" << endl
       << "1) Tambah Data Penjualan" << endl
       << "2) Lihat Data Penjualan" << endl
       << "3) Ubah Data Penjualan" << endl
       << "4) Hapus Data Penjualan" << endl
       << "5) Exit" << endl;
}

// Program Utama
int main(){
    
    char ulang;

    // Perulangan Do ... While
    do{

        system("cls");
        tampilan_menu();
        int pilih;
        cout << "Masukkan Nomor Menu : "; cin >> pilih;
        
        // Percabangan Switch
        switch(pilih){
            
            // Kondisi Menambahkan Data
            case 1:
                system("cls");
                cout << "<<==========================|Menu Tambah Data|==================================>>" << endl;
                tambah_data();
                cout << "\n>>>> DATA TELAH DITAMBAH <<<<"; 
                break;
            
            // Kondisi Melihat Data
            case 2:
                system("cls");
                cout << "<<==========================|Menu Lihat Data|===================================>>" << endl;
                if(data_game > 0){
                    lihat_data();
                }
                else{
                    cout << "\n>>>>>>>>>>>>>>>>>>>>>>>>>>> -TIDAK ADA DATA- <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << endl;
                }
                break;
            
            // Kondisi Mengubah Data
            case 3:
                system("cls");
                cout << "<<===========================|Menu Ubah Data|===================================>>" << endl;
                if(data_game > 0){
                    lihat_data();
                    ubah_data();
                    cout << "\n>>>>> DATA TELAH DIUBAH <<<<<";
                }
                else{
                    cout << "\n>>>>>>>>>>>>>>>>>>>>>>>>>>> -TIDAK ADA DATA- <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << endl;
                }
                break;
            
            // Kondisi Menghapus Data
            case 4:
                system("cls");
                cout << "<<===========================|Menu Hapus Data|==================================>>" << endl;
                if(data_game > 0){
                    lihat_data();
                    hapus_data();
                    cout << "\n>>>> DATA TELAH DIHAPUS <<<<"; 
                }
                else{
                    cout << "\n>>>>>>>>>>>>>>>>>>>>>>>>>>> -TIDAK ADA DATA- <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << endl;
                }
                break;

            // Kondisi Untuk Keluar Program
            case 5:
                cout << "\n<------ Terima Kasih ------>" << endl;
                exit(0);
            
            // Kondisi Default
            default:
                cout << "\n>>>> Menu Tidak Tersedia <<<<"; 
        }
        cout << endl;

        // Konfirmasi Perulangan
        cout << "\nIngin Kembali Ke Menu Utama ?? (y/t) >> "; cin >> ulang;
        cout << endl;

    }while(ulang != 't');

    cout << "\n<------ Terima Kasih ------>" << endl;
}