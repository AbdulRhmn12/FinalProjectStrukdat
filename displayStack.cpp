void displayStack(){
	if (isBajuEmpty()){
		cout<<"Daftar baju yang bisa dicuci kosong!!"<<endl;
	}
	else{
		cout<<endl<<"Nomor baju pelanggan yang bisa dicuci : ";
		typestack bantu;
		bantu=top;
		while (bantu != NULL){
			cout<< bantu->info <<", ";
			bantu = bantu->next;
		}
	}
}
