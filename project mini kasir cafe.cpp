int main() {
    int pilihmenu, jumlah;
    bool selesai = false;

    tampilkanHeader();

    while (!selesai) {
        cout << "\n1. Tambah Pesanan\n2. Lihat Pesanan\n3. Hapus Semua\n0. Keluar\nPilih menu: ";
        cin >> pilihmenu;

        switch (pilihmenu) {
            case 1:
                cout << "\nMenu:\n";
                cout << "1. Kopi Susu    - Rp15.000\n";
                cout << "2. Americano    - Rp13.000\n";
                cout << "3. Hazelnut     - Rp18.000\n";
                cout << "4. Red Velvet   - Rp18.000\nPilih menu (1 sampai 4): ";
                cin >> pilihmenu;
                cout << "Jumlah: ";
                cin >> jumlah;

                if (pilihmenu == 1) tambahPesanan("Kopi Susu", 15000, jumlah);
                else if (pilihmenu == 2) tambahPesanan("Americano", 13000, jumlah);
                else if (pilihmenu == 3) tambahPesanan("Hazelnut", 18000, jumlah);
                else if (pilihmenu == 4) tambahPesanan("Red Velvet", 18000, jumlah);
                else cout << "Menu tidak tersedia.\n";
                break;
            case 2:
                tampilkanPesanan();
                break;
            case 3:
                hapusSemuaPesanan();
                break;
            case 0:
                selesai = true;
                cout << "\nTerima kasih telah bertransaksi!\n";
                break;
            default:
                cout << "Pilihan tidak valid.\n";
        }
    }

    return 0;
}