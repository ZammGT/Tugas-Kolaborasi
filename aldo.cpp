#include <iostream>
using namespace std;

void menuMakananBerat(){
    cout<<"=========Makanan Berat=========="<<endl;
    cout<<"1. Nasi merah Dada Ayam - Rp 25.000(450kkal, 35 gram)"<<endl;
    cout<<"2. Salad sayur - Rp 22.0000 (250kkal, 5 gram)"<<endl;
    cout<<"3. Salad wrap - Rp 30.000 (400kkal, 22 gram)"<<endl;
    cout<<"4. Mashed potato - Rp 20.000 (250kkal, 6 gram)"<<endl;
    cout<<"5. Sandwich - Rp23.0000 (380kkal, 18 gram)"<<endl;
}

void menuMakananRingan(){
    cout<<"=========Makanan ringan=========="<<endl;
    cout<<"1. Berry smoothies - Rp 25.000(250kkal, 10 gram)"<<endl;
    cout<<"2. Yogurt - Rp 15.0000 (150kkal, 12 gram)"<<endl;
    cout<<"3. Oat bowl - Rp 20.000 (350kkal, 12 gram)"<<endl;
    cout<<"4. Protein barr - Rp 25.000 (230kkal, 20 gram)"<<endl;
    cout<<"5. Telur rebus - Rp 5.0000 (80kkal, 7 gram)"<<endl;
}

void menuMinuman(){
    cout<<"=========Makanan ringan=========="<<endl;
    cout<<"1. Air Putih - Rp 5.000(0kkal, 0 gram)"<<endl;
    cout<<"2. Air Kelapa - Rp 10.000 (2kkal, 60 gram)"<<endl;
    cout<<"3. Jus Apel - Rp 15.000 (150kkal, 1 gram)"<<endl;
    cout<<"4. Jus Mangga - Rp 26.000 (200kkal, 1 gram)"<<endl;
    cout<<"5. Jus Sayur - Rp 10.0000 (100kkal, 3 gram)"<<endl;
}
int main() 
{
    int pilihanKategori, pilihanMenu;
    int totalHarga = 0;
    int totalKalori = 0;
    int totalProtein = 0;
    char lanjut;

    do{
        cout<<"n/Pilih kategori menu"<<endl;
        cout<<"1. Makanan Berat "<<endl;
        cout<<"2. Makanan Ringan "<<endl;
        cout<<"3. Minuman"<<endl;
        cout<<"Silahkan memilih kategori (1-3)"<<endl;
        cin>>pilihanKategori;
        if(pilihanKategori == 1){
            menuMakananBerat();
            cout<<"silakan memilih menu (1-5)"<<endl;
            cin>>pilihanMenu;

            if(pilihanMenu == 1){
                
            }
        }
    }
    return 0;
}
