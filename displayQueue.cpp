void displayQueue(){
	typeptr bantu;
	bantu = head;
	if (isAntrianEmpty())
	{
		cout<< "Daftar pelanggan masih kosong"<< endl
	}
	else
	{
		do
		{
			cout<< "pelanggan ke-" << bantu->pelanggan.number << endl;
			cout<< "		Nama			: " << bantu->pelanggan.name<<endl;
			cout<< "		Nomor handphone	: " << bantu->pelanggan.phoneNumber<<endl;
			bantu = bantu->next;
		} while (bantu != NULL);
	}
}
