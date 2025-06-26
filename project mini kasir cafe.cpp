void tambahPesanan(string nama, int harga, int jumlah) {
    MenuItem* baru = new MenuItem{nama, harga, jumlah, NULL};
    if (!head) head = baru;
    else {
        MenuItem* temp = head;
        while (temp->next) temp = temp->next;
        temp->next = baru;
    }
    loading("Menyimpan pesanan");
}

void tampilkanPesanan() {
    if (!head) {
        cout << "Belum ada pesanan.\n";
        return;
    }

    int total = 0, nomor = 1;
    MenuItem* temp = head;
    while (temp) {
        int subtotal = temp->harga * temp->jumlah;
        cout << nomor++ << ". " << setw(12) << left << temp->nama
             << " x" << temp->jumlah << " = " << formatRupiah(subtotal) << "\n";
        total += subtotal;
        temp = temp->next;
    }
    cout << "Total: " << formatRupiah(total) << "\n";
}

void hapusSemuaPesanan() {
    while (head) {
        MenuItem* hapus = head;
        head = head->next;
        delete hapus;
    }
    cout << "Pesanan telah dibersihkan.\n";
}