string formatRupiah(int angka) {
    stringstream ss;
    ss.imbue(locale(""));
    ss << fixed << angka;
    return "Rp" + ss.str();
}

void loading(const string& pesan) {
    cout << pesan;
    for (int i = 0; i < 3; i++) {
        cout << ".";
        cout.flush();
        this_thread::sleep_for(chrono::milliseconds(250));
    }
    cout << "\n";
}