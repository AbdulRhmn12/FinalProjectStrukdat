void getAmbil(int key)
{
  typestack bantu, hapus;
  bantu = top1;
  bool ketemu = false;
  while(bantu != NULL)
  {
    if(bantu -> info == key) {
      ketemu = true;
      break;
    }
    bantu = bantu -> next;
  }
  if(ketemu)
  {
    hapus = bantu;
    if(bantu -> next == NULL && bantu -> prev == NULL) {
      top1 = NULL;
    } else if(bantu -> next == NULL) {
      bantu -> prev -> next = NULL;
    } else if(bantu -> prev == NULL) {
      cout << "AH";
      top1 = top1 -> next;
      bantu -> prev -> next = NULL;
    } else {
      cout << "IH";
      bantu -> prev -> next = bantu -> next;
      bantu -> next -> prev = bantu -> prev;
    }
    cout << "Baju Nomor Antrian Ke-" << hapus -> info << " Telah Diambil" << endl;
    enqueueTerambil(hapus -> info);
    free(hapus);
  }
  else
  {
    cout << "Baju Tidak Ada Dalam List" << endl;
  }
}
