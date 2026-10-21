#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Masukkan jumlah data nilai mahasiswa: ";
    cin >> n;

    int nilai[n];

    cout << "Masukkan nilai mahasiswa secara ascending:\n";
    for (int i = 0; i < n; i++) {
        cout << "Nilai ke-" << i + 1 << ": ";
        cin >> nilai[i];
    }

    int cari;
    cout << "\nMasukkan nilai yang ingin dicari: ";
    cin >> cari;

    int kiri = 0;
    int kanan = n - 1;
    int tengah;
    int indeks = -1;

    // Binary Search secara iterative
    while (kiri <= kanan) {
        tengah = kiri + (kanan - kiri) / 2;

        if (nilai[tengah] == cari) {
            indeks = tengah;
            break;
        } else if (nilai[tengah] < cari) {
            kiri = tengah + 1;
        } else {
            kanan = tengah - 1;
        }
    }

    // Menampilkan hasil pencarian
    if (indeks != -1) {
        cout << "\nData ditemukan!" << endl;
        cout << "Nilai mahasiswa: " << cari << endl;
        cout << "Indeks data: " << indeks << endl;
        cout << "Posisi data: " << indeks + 1 << endl;
    } else {
        cout << "\nData tidak ditemukan!" << endl;
    }

    return 0;
}