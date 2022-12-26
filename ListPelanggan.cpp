void enqueue(struct dataPelanggan pelanggan)
{
	typeptr NB;
	NB=new typequeue();
	NB->pelanggan=pelanggan;
	NB->next=NULL;
	if(isAntrianEmpty()){
		head = NB;
	}else{
		tail->next=NB
	}
	tail = NB;
}

void enqueueTerambil(int IB){
	typeptr NB;
	NB=new Node();
	NB->info=IB;
	NB->next=NULL;
	NB->prev=NULL;
	if(isTerambilEmpty()){
		head1 = NB;
	}else{
		tail->next=NB;
	}
	tail1=NB;
}
