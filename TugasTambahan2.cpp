#include <iostream>

int main() {
    int Kode_minuman, Uang_Anda, Harga_Minuman, Kembalian, Lembar_5000, Lembar_1000, Kekurangan, sisa_Setelah_5000;
    std::cout << "=== VENDING MACHINE AUTOMATIS ===" << std::endl
    << "Pilihan Minuman : " << std::endl
    << "1. Air Mineral (Rp 4000)" << std::endl
    << "2. Teh Botol (Rp 6000)" << std::endl
    << "3. Kopi Susu (Rp 10000)" << std::endl
    << "Pilih Kode Minuman (1-3): "; std::cin >> Kode_minuman;
    std::cout << "Masukkan Uang Anda (Rp): "; std::cin >> Uang_Anda;

    switch (Kode_minuman) {
        case 1:
            Harga_Minuman = 4000;
            break;
        case 2:
            Harga_Minuman = 6000;
            break;
        case 3:
            Harga_Minuman = 10000;
            break;
        default:
            std::cout << "Kode minuman tidak valid. Silakan pilih antara 1-3." << std::endl;
    }
    std::cout << std::endl;
    std::cout << "======= DETAIL  TRANSAKSI =======" << std::endl;
    if (Uang_Anda >= Harga_Minuman) {
        Kembalian = Uang_Anda - Harga_Minuman;
        Lembar_5000 = Kembalian / 5000;
        sisa_Setelah_5000 = Kembalian % 5000;
        Lembar_1000 = sisa_Setelah_5000 / 1000;
        std::cout << "Transaksi Berhasil!" << std::endl;
        std::cout << "Total Kembalian Anda \t: Rp " << Kembalian << std::endl;
        std::cout << "Dalam Bentuk 5000an \t: " << Lembar_5000 << " Lembar" << std::endl;
        std::cout << "Dalam Bentuk 1000an \t: " << Lembar_1000 << " Lembar" << std::endl;
    } else {
        Kekurangan = Harga_Minuman - Uang_Anda;
        std::cout << "Transaksi Gagal! Uang Anda kurang Rp " << Kekurangan << "." << std::endl;
    }

    return 0;
}