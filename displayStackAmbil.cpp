void displayStackAmbil()
{
  if(isAmbilEmpty())
  {
    cout << "Daftar Baju yang Telah Dicuci Kosong !!" << endl;
  }
  else
  {
    cout << endl << "Nomor Baju Pelanggan Telah Dicuci : ";
    typestack bantu;
    bantu = top1;
    while(bantu != NULL)
    {
      cout << bantu -> info << ", ";
      bantu = bantu -> next;
    }
  }
}
