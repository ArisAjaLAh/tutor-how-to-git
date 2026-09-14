#include <iostream>

int main() {
    int Total_Belanja;
    int Total_Bayar;
    int Diskon;
    std::cout << "=== Kalkulator Kasir Toko Buku ===" << std::endl;
    std::cout << "Masukkan Total Belanja (Rp): "; std::cin >> Total_Belanja;
    std::cout << std::endl;

    if (Total_Belanja >= 300000) {
        Diskon = 20; // Diskon 20%
    } else if (Total_Belanja >= 100000 && Total_Belanja <= 299999) {
        Diskon = 10; // Diskon 10%
    } else {
        Diskon = 0; // Tidak ada diskon
    }
    std::cout << "====== Ringkasan Pembayaran ======" << std::endl;
    std::cout << "Diskon (" << Diskon << "%) \t:" << Total_Belanja * Diskon / 100 << std::endl;
    std::cout << "Total Bayar \t:" << Total_Belanja - (Total_Belanja * Diskon / 100) << std::endl;
    return 0;
}