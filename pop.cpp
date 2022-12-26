void pop(){
	typestack bantu, hapus;
	if (isBajuEmpty()){
		cout << "Tidak ada tumpukan baju yang bisa dicuci!!"<< endl;
	}
	else{
		hapus = top;
		bantu = top->next;
		cout << "Baju nomor antrian ke-"<< hapus->info<< " berhasil dicuci"<< endl;
		pushAmbilList(&hapus->info);
		free(hapus);
		top=bantu;
	}
}
