void struk(typeptr data, int tunai){
    int harga = 10000;
    cout << "===================================================================" << endl;
    cout << "                           Clean Laundry                           " << endl;
    cout << "                          Struk Pembayaran                         " << endl;
    cout << "===================================================================" << endl;
    cout << "|\t No. Pelanggan\t : "<< data->pelanggan.number << endl;
    cout << "|\t Nama \t\t : "<< data->pelanggan.name << endl;
    cout << "|\t Weight \t : "<< data->pelanggan.weight  << endl;
    cout << "|\t Harga /kg \t : "<< harga  << endl;
    cout << "===================================================================" << endl;
    cout << "|\t Total \t\t : "<< data->pelanggan.totalPrice << endl;
    cout << "|\t Tunai \t\t : "<< tunai << endl;
    cout << "===================================================================" << endl;
    cout << endl;
}
