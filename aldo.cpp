#include <iostream>
using namespace std;

int totalHarga = 0;
int totalKalori = 0;
int totalProtein = 0;
void menuMakananBerat(){
    int pilih, porsi;
    cout<<"\n=========Makanan Berat=========="<<endl;
    cout<<"1. Nasi merah Dada Ayam - Rp 25.000(450 kkal, 35 gram)"<<endl;
    cout<<"2. Salad sayur - Rp 22.0000 (250 kkal, 5 gram)"<<endl;
    cout<<"3. Salad wrap - Rp 30.000 (400 kkal, 22 gram)"<<endl;
    cout<<"4. Mashed potato - Rp 20.000 (250 kkal, 6 gram)"<<endl;
    cout<<"5. Sandwich - Rp23.0000 (380 kkal, 18 gram)"<<endl;
    cout<<"pilih (1-5): ";
    cin >> pilih;
    cout<<"jumlah porsi: ";
    cin >> porsi;

    if (porsi > 0) {
        if(pilih == 1) {
            totalHarga = totalHarga + (25000*porsi);
            totalKalori = totalKalori + (450*porsi);
            totalProtein = totalProtein + (35*porsi);
        }
        else if(pilih == 2) {
            totalHarga = totalHarga + (22000*porsi);
            totalKalori = totalKalori + (250*porsi);
            totalProtein = totalProtein + (5*porsi);
        }
        else if(pilih == 3) {
            totalHarga = totalHarga + (30000*porsi);
            totalKalori = totalKalori + (400*porsi);
            totalProtein = totalProtein + (22*porsi);
        }
        else if(pilih == 4) {
            totalHarga = totalHarga + (20000*porsi);
            totalKalori = totalKalori + (250*porsi);
            totalProtein = totalProtein + (6*porsi);
        }
        else if(pilih == 5) {
            totalHarga = totalHarga + (23000*porsi);
            totalKalori = totalKalori + (380*porsi);
            totalProtein = totalProtein + (18*porsi);
        }
        else {
            cout<< "Pilihan Tidak Ada";
        }
    }
}

void menuMakananRingan(){
    int pilih, porsi;
    cout<<"\n=========Makanan ringan=========="<<endl;
    cout<<"1. Berry smoothies - Rp 25.000(250 kkal, 10 gram)"<<endl;
    cout<<"2. Yogurt - Rp 15.0000 (150 kkal, 12 gram)"<<endl;
    cout<<"3. Oat bowl - Rp 20.000 (350 kkal, 12 gram)"<<endl;
    cout<<"4. Protein barr - Rp 25.000 (230  kkal, 20 gram)"<<endl;
    cout<<"5. Telur rebus - Rp 5.000 (80 kkal, 7 gram)"<<endl;
    cout<<"pilih (1-5): ";
    cin >> pilih;
    cout<<"jumlah porsi: ";
    cin >> porsi;
    
    if (porsi > 0) {
        if(pilih == 1) {
            totalHarga = totalHarga + (25000*porsi);
            totalKalori = totalKalori + (250*porsi);
            totalProtein = totalProtein + (10*porsi);
        }
        else if(pilih == 2) {
            totalHarga = totalHarga + (15000*porsi);
            totalKalori = totalKalori + (150*porsi);
            totalProtein = totalProtein + (12*porsi);
        }
        else if(pilih == 3) {
            totalHarga = totalHarga + (20000*porsi);
            totalKalori = totalKalori + (350*porsi);
            totalProtein = totalProtein + (12*porsi);
        }
        else if(pilih == 4) {
            totalHarga = totalHarga + (25000*porsi);
            totalKalori = totalKalori + (230*porsi);
            totalProtein = totalProtein + (20*porsi);
        }
        else if(pilih == 5) {
            totalHarga = totalHarga + (5000*porsi);
            totalKalori = totalKalori + (80*porsi);
            totalProtein = totalProtein + (7*porsi);
        }
        else {
            cout<< "Pilihan Tidak Ada";
        }
    }
}

void menuMinuman(){
    int pilih, porsi;
    cout<<"\n=========Makanan ringan=========="<<endl;
    cout<<"1. Air Putih - Rp 5.000(0 kkal, 0 gram)"<<endl;
    cout<<"2. Air Kelapa - Rp 10.000 (2 kkal, 60 gram)"<<endl;
    cout<<"3. Jus Apel - Rp 15.000 (150 kkal, 1 gram)"<<endl;
    cout<<"4. Jus Mangga - Rp 26.000 (200 kkal, 1 gram)"<<endl;
    cout<<"5. Jus Sayur - Rp 10.0000 (100 kkal, 3 gram)"<<endl;
    cout<<"pilih (1-5): ";
    cin >> pilih;
    cout<<"jumlah porsi: ";
    cin >> porsi;

    if (porsi > 0) {
        if(pilih == 1) {
            totalHarga = totalHarga + (5000*porsi);
            totalKalori = totalKalori + (0*porsi);
            totalProtein = totalProtein + (0*porsi);
        }
        else if(pilih == 2) {
            totalHarga = totalHarga + (10000*porsi);
            totalKalori = totalKalori + (2*porsi);
            totalProtein = totalProtein + (60*porsi);
        }
        else if(pilih == 3) {
            totalHarga = totalHarga + (15000*porsi);
            totalKalori = totalKalori + (150*porsi);
            totalProtein = totalProtein + (1*porsi);
        }
        else if(pilih == 4) {
            totalHarga = totalHarga + (26000*porsi);
            totalKalori = totalKalori + (200*porsi);
            totalProtein = totalProtein + (1*porsi);
        }
        else if(pilih == 5) {
            totalHarga = totalHarga + (10000*porsi);
            totalKalori = totalKalori + (100*porsi);
            totalProtein = totalProtein + (3*porsi);
        }
        else {
            cout<< "Pilihan Tidak Ada";
        }
    }
}

void pilihKategori() {
    int kate;
    char tambah;

    do{
        cout<<"\n1. Makanan berat";
        cout<<"\n2. Makananan Ringan";
        cout<<"\n3. Minuman";
        cout << "\nPilih kategori (1-3): ";
        cin>>kate;

        if(kate==1) {
            menuMakananBerat ();
        }
        else if(kate==2) {
            menuMakananRingan ();
        }
        else if(kate==3) {
            menuMinuman ();
        }
        else {
            cout<<"Pilihan Tidak ada";
            return;
        }

        cout<<"Pilih Kategori Menu Lagi (y/n)"<<endl;
        cout<<"Jika merasa cukup pencet tombol selain y/n: ";
        cin>>tambah;
    }while (tambah == 'y' || tambah == 'Y');
}
int main() {
    char ulang;
    do {
        totalHarga = 0;
        totalKalori = 0;
        totalProtein = 0;

        pilihKategori();

        cout<<"\n=========Total Pesanan=========="<<endl;
        cout<<"Total Harga   : Rp "<<totalHarga<<endl;
        cout<<"Total Kalori  : "<<totalKalori<<" kkal"<<endl;
        cout<<"Total Protein : "<<totalProtein<<" gram"<<endl;
        
        cout<<"Apakah Anda Ingin Mengulang Pesanan (y/N)";
        cin>>ulang;
    }while (ulang == 'y' || ulang == 'Y');
    return 0;
}
