void Bayar()
{
  typeptr data;
  typeq hapus;
  int jumlahUang;
  int isStruk;
  if(isTerambilEmpty())
  {
    cout << "Antrian Pembayaran Masih Kosong" << endl;
  }
  else
  {
    hapus = head1;
    head1 = head1 -> next;
    data = cariPelanggan(hapus -> info);
    if(data != NULL)
    {
      cout << " Nama Pelanggan\t\t : " << data -> pelanggan.name << endl;
      cout << " Nomor Handphone\t : " << data -> pelanggan.phoneNumber << endl;
      cout << " Berat Cucian\t\t : " << data -> pelanggan.weight << endl;
      data -> pelanggan.totalPrice = data -> pelanggan.weight * 10000;
      cout << " Total Pembayaran\t : " << data -> pelanggan.totalPrice << endl;
      do
      {
        cout << " Jumlah Uang\t\t : ";
        cin >> jumlahUang;
        if(data -> pelanggan.totalPrice > jumlahUang)
        {
          cout << " Jumlah Uang Tidak Mencukupi" << endl;
        }
        else if(data -> pelanggan.totalPrice < jumlahUang)
        {
          cout << " Kembalian\t\t : " << jumlahUang - data -> pelanggan.totalPrice << endl;
        }
      } while(data -> pelanggan.totalPrice > jumlahUang);
      cout << "Apakah Anda Ingin Mencetak Struk ? [1:Iya | 2:Tidak] : ";
      cin >> isStruk;
      if(isStruk == 1)
      {
        cout << endl;
        struk(data, jumlahUang);
        saveToFile(data, jumlahUang);
      }
      hapusDataPelanggan(data -> pelanggan.number, data -> pelanggan.name);
      delete hapus;
      cout << " Pembayaran Berhasil !!" << endl;
    }
  }
}
