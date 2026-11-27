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


void tampilkanTUI() {
    bersihkanLayar();
    cout << "█  █ █▀▀ █▀█ █   ▀▀█▀▀ █  █ █  █   █▀▀ █▀█ █▄  █ ▀▀█▀▀ █▀▀ █▀▀ █▄  █\n";
    cout << "█▀▄█ █▀▀ █▀█ █     █   █▀▄█ ▀▄▄█   █   █▀█ █ █ █   █   █▀▀ █▀▀ █ █ █\n";
    cout << "▀  ▀ ▀▀▀ ▀ ▀ ▀▀▀   ▀   ▀  ▀ ▄▄▄▀   ▀▀▀ ▀ ▀ ▀  ▀█   ▀   ▀▀▀ ▀▀▀ ▀  ▀█\n\n";


    cout << "╭──────────────────────────────────────────────────╮\n";
    cout << "│ Silakan pilih program yang ingin dijalankan:     │\n";
    cout << "├──────────────────────────────────────────────────┤\n";
    cout << "│ [1] Bahasa Indonesia                             │\n";
    cout << "│ [2] English                                      │\n";
    cout << "│ [0] Keluar                                       │\n";
    cout << "╰──────────────────────────────────────────────────╯\n";

   cout << " * ready | Ketik angka pilihan lalu tekan Enter\n\n";
   cout << "> ";
}
void programPertama() {
    bersihkanLayar();
    cout << "=== MENJALANKAN PROGRAM PERTAMA ===" << "\n\n";
    cout << "Halo! Ini adalah eksekusi dari Program 1.\n";
}
void programKedua() {
    bersihkanLayar();
    cout << "=== MENJALANKAN PROGRAM KEDUA ===" <<"\n\n";
    cout << "Halo! Ini adalah eksekusi dari Program 2.\n";
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
            programPertama();
            cout << "\nTekan Enter untuk kembali ke menu...";
            cin.ignore();
            cin.get();
        } 
        else if (pilihan == 2) {
            programKedua();
            cout << "\nTekan Enter untuk kembali ke menu...";
            cin.ignore();
            cin.get();
        } 
        else if (pilihan == 0) {
            cout << "\nKeluar dari program. Sampai jumpa!\n";
            break;
        } 
        else {
            cout <<"\nPilihan tidak valid! Tekan Enter untuk coba lagi...";
            cin.ignore();
            cin.get();
        }
    }

    return 0;
}
