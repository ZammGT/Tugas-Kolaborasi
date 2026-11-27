#include <iostream>
#include <cstdlib> 

using namespace std;

void bersihkanLayar() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

int totalHarga = 0;
int totalKalori = 0;
int totalProtein = 0;

void menuMakananBerat(){
    int pilih, porsi;
    cout << "\n========= Makanan Berat ==========" << endl;
    cout << "1. Nasi merah Dada Ayam - Rp 25.000 (450 kkal, 35 gram)" << endl;
    cout << "2. Salad sayur - Rp 22.000 (250 kkal, 5 gram)" << endl;
    cout << "3. Salad wrap - Rp 30.000 (400 kkal, 22 gram)" << endl;
    cout << "4. Mashed potato - Rp 20.000 (250 kkal, 6 gram)" << endl;
    cout << "5. Sandwich - Rp 23.000 (380 kkal, 18 gram)" << endl;
    cout << "Pilih (1-5): ";
    cin >> pilih;
    if(pilih <= 5 && pilih>=1){
        cout << "Jumlah porsi: ";
        cin >> porsi;
    }
    else{
        cout<<"Pilih Kategori Yang Valid";
    }

    if (porsi > 0) {
        if(pilih == 1) {
            totalHarga += 25000 * porsi;
            totalKalori += 450 * porsi;
            totalProtein += 35 * porsi;
        }
        else if(pilih == 2) {
            totalHarga += 22000 * porsi;
            totalKalori += 250 * porsi;
            totalProtein += 5 * porsi;
        }
        else if(pilih == 3) {
            totalHarga += 30000 * porsi;
            totalKalori += 400 * porsi;
            totalProtein += 22 * porsi;
        }
        else if(pilih == 4) {
            totalHarga += 20000 * porsi;
            totalKalori += 250 * porsi;
            totalProtein += 6 * porsi;
        }
        else if(pilih == 5) {
            totalHarga += 23000 * porsi;
            totalKalori += 380 * porsi;
            totalProtein += 18 * porsi;
        }
        }
        else {
            cout << "Pilihan Tidak Ada\n";
        }
    }


void menuMakananRingan(){
    int pilih, porsi;
    cout << "\n========= Makanan Ringan ==========" << endl;
    cout << "1. Berry smoothies - Rp 25.000 (250 kkal, 10 gram)" << endl;
    cout << "2. Yogurt - Rp 15.000 (150 kkal, 12 gram)" << endl;
    cout << "3. Oat bowl - Rp 20.000 (350 kkal, 12 gram)" << endl;
    cout << "4. Protein bar - Rp 25.000 (230 kkal, 20 gram)" << endl;
    cout << "5. Telur rebus - Rp 5.000 (80 kkal, 7 gram)" << endl;
    cout << "Pilih (1-5): ";
    cin >> pilih;
    if(pilih <= 5 && pilih>=1){
        cout << "Jumlah porsi: ";
        cin >> porsi;
    }
    else{
        cout<<"Pilih Kategori Yang Valid";
    }

    
    if (porsi > 0) {
        if(pilih == 1) {
            totalHarga += 25000 * porsi;
            totalKalori += 250 * porsi;
            totalProtein += 10 * porsi;
        }
        else if(pilih == 2) {
            totalHarga += 15000 * porsi;
            totalKalori += 150 * porsi;
            totalProtein += 12 * porsi;
        }
        else if(pilih == 3) {
            totalHarga += 20000 * porsi;
            totalKalori += 350 * porsi;
            totalProtein += 12 * porsi;
        }
        else if(pilih == 4) {
            totalHarga += 25000 * porsi;
            totalKalori += 230 * porsi;
            totalProtein += 20 * porsi;
        }
        else if(pilih == 5) {
            totalHarga += 5000 * porsi;
            totalKalori += 80 * porsi;
            totalProtein += 7 * porsi;
        }
        else {
            cout << "Pilihan Tidak Ada\n";
        }
    }
}

void menuMinuman(){
    int pilih, porsi;
    cout << "\n========= Minuman ==========" << endl;
    cout << "1. Air Putih - Rp 5.000 (0 kkal, 0 gram)" << endl;
    cout << "2. Air Kelapa - Rp 10.000 (2 kkal, 60 gram)" << endl;
    cout << "3. Jus Apel - Rp 15.000 (150 kkal, 1 gram)" << endl;
    cout << "4. Jus Mangga - Rp 26.000 (200 kkal, 1 gram)" << endl;
    cout << "5. Jus Sayur - Rp 10.000 (100 kkal, 3 gram)" << endl;
    cout << "Pilih (1-5): ";
    cin >> pilih;
    if(pilih <= 5 && pilih>=1){
        cout << "Jumlah porsi: ";
        cin >> porsi;
    }
    else{
        cout<<"Pilih Kategori Yang Valid";
    }

    if (porsi > 0) {
        if(pilih == 1) {
            totalHarga += 5000 * porsi;
            totalKalori += 0 * porsi;
            totalProtein += 0 * porsi;
        }
        else if(pilih == 2) {
            totalHarga += 10000 * porsi;
            totalKalori += 2 * porsi;
            totalProtein += 60 * porsi;
        }
        else if(pilih == 3) {
            totalHarga += 15000 * porsi;
            totalKalori += 150 * porsi;
            totalProtein += 1 * porsi;
        }
        else if(pilih == 4) {
            totalHarga += 26000 * porsi;
            totalKalori += 200 * porsi;
            totalProtein += 1 * porsi;
        }
        else if(pilih == 5) {
            totalHarga += 10000 * porsi;
            totalKalori += 100 * porsi;
            totalProtein += 3 * porsi;
        }
        else {
            cout << "Pilihan Tidak Ada\n";
        }
    }
}

void pilihKategori() {
    int kate;
    char tambah;

    do {
        cout << "\n1. Makanan Berat";
        cout << "\n2. Makanan Ringan";
        cout << "\n3. Minuman";
        cout << "\nPilih kategori (1-3): ";
        cin >> kate;

        if(kate == 1) {
            menuMakananBerat();
        }
        else if(kate == 2) {
            menuMakananRingan();
        }
        else if(kate == 3) {
            menuMinuman();
        }
        else {
            cout << "Pilihan Tidak ada\n";
            return;
        }

        cout << "\nPilih Kategori Menu Lagi (y/n)? ";
        cin >> tambah;
    } while (tambah == 'y' || tambah == 'Y');
}

void tampilkanTUI() {
    bersihkanLayar();
    cout << "█  █ █▀▀ █▀█ █   ▀▀█▀▀ █  █ █  █   █▀▀ █▀█ █▄  █ ▀▀█▀▀ █▀▀ █▀▀ █▄  █\n";
    cout << "█▀▄█ █▀▀ █▀█ █     █   █▀▄█ ▀▄▄█   █   █▀█ █ █ █   █   █▀▀ █▀▀ █ █ █\n";
    cout << "▀  ▀ ▀▀▀ ▀ ▀ ▀▀▀   ▀   ▀  ▀ ▄▄▄▀   ▀▀▀ ▀ ▀ ▀  ▀█   ▀   ▀▀▀ ▀▀▀ ▀  ▀█\n\n";

    cout << "╭──────────────────────────────────────────────────╮\n";
    cout << "│ Silakan pilih bahasa / Please select language:   │\n";
    cout << "├──────────────────────────────────────────────────┤\n";
    cout << "│ [1] Bahasa Indonesia                             │\n";
    cout << "│ [2] English                                      │\n";
    cout << "│ [0] Keluar / Exit                                │\n";
    cout << "╰──────────────────────────────────────────────────╯\n";

    cout << " * ready | Ketik angka pilihan lalu tekan Enter\n\n";
    cout << "> ";
}

void programIndonesia() {
    char ulang;
    do {
        bersihkanLayar(); // Langsung bersihkan TUI awal
        totalHarga = 0;
        totalKalori = 0;
        totalProtein = 0;

        pilihKategori();

        cout << "\n========= Total Pesanan ==========" << endl;
        cout << "Total Harga   : Rp " << totalHarga << endl;
        cout << "Total Kalori  : " << totalKalori << " kkal" << endl;
        cout << "Total Protein : " << totalProtein << " gram" << endl;
        
        cout << "\nApakah Anda Ingin Mengulang Pesanan (y/n)? ";
        cin >> ulang;
    } while (ulang == 'y' || ulang == 'Y');
}

void programEnglish() {
    bersihkanLayar();
    cout << "=== ENGLISH VERSION ===" << "\n\n";
    cout << "Put your English canteen program code here.\n";
}

int main() {
    #ifdef _WIN32
        system("chcp 65001 > nul");
    #endif

    int pilihan;

    while (true) {
        tampilkanTUI();
        if (!(cin >> pilihan)) {
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }
        
        if (pilihan == 1) {
            programIndonesia();
            cout << "\nTerima kasih sudah memesan!\n";
            break; 
        } 
        else if (pilihan == 2) {
            programEnglish();
            cout << "\nThank you for ordering!\n";
            break;
        } 
        else if (pilihan == 0) {
            cout << "\nKeluar dari program. Sampai jumpa!\n";
            break;
        } 
        else {
            cout << "\nPilihan tidak valid! Tekan Enter untuk coba lagi...";
            cin.ignore();
            cin.get();
        }
    }

    return 0;
}
