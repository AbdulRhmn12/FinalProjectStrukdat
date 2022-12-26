void displayQueueTerambil()
{
  typeq bantu;
  bantu = head1;
  if(isTerambilEmpty()) {
    cout << "Antrian Pembayaran Masih Kosong" << endl;
  } else {
    cout << "Antrian Pembayaran : ";
    do {
      cout << bantu -> info << ", ";
      bantu = bantu -> next;
    } while(bantu != NULL);
  }
}
