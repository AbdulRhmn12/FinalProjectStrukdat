typeptr cariPelanggan(int no){
    typeptr data = NULL;
    typeptr bantu;
    bantu = head;
    if (isAntrianEmpty()){
        cout << "Daftar Pelanggan Masih Kosong" << endl;
    }
    else {
        do {
            if(bantu->pelanggan.number == no){
                data = bantu;
                break;
            }
            else {
                bantu = bantu->next;
            }

        } while (bantu != NULL);
    }
    return data;
}
