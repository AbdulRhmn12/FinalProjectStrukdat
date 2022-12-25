void hapusDataPelanggan(int no, string nama){
    typeptr bantu, hapus, prev;
    // check apakah nomoer pelanggan yang dicari ada di awal list
    if(no == head->pelanggan.number && nama == head ->pelanggan.name){
        hapus == head;
        head = head->next;
        delete hapus;
    }
    else if(no == tail->pelanggan.number && nama == tail->pelanggan.name){
        // mengecek apakah nomor pelanggan yang dicari ada di akhir list
        bantu = head;
        hapus = tail;
        while(bantu->next != tail){
            bantu = bantu->next;
        }
        bantu->next = NULL;
        tail = bantu;
        delete hapus;
    }
    else{
        // check nomer pelanggan yang cocok dan berada di tengah linked list        
        bantu = head
        while(bantu != NULL){
            if(no == bantu->pelanggan.number && nama == bantu->pelanggan.name)break;
            else bantu = bantu->next
        }
        while(prev->next != bantu){
            prev = prev->next;
        }
        hapus = bantu;
        prev->next = bantu->next;
        delete hapus;
    }
}
