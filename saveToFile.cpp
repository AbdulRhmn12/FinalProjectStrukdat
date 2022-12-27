void saveToFile(typeptr data, int tunai){
    ofstream file;
    file.open("struk.txt", ios::app);
    file << data->pelanggan.number <<endl;
    file << data->pelanggan.name <<endl;
    file << data->pelanggan.phoneNumber <<endl;
    file << data->pelanggan.weight <<endl;
    file << data->pelanggan.totalPrice <<endl;
    file << tunai << endl;
    file.close();
}
