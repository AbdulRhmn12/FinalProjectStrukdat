void pembayaran()
{
  int no = 1, bayar;
  int bayarLagi = 1;
  while(bayarLagi == 1)
  {
    if(isTerambilEmpty())
    {
      displayQueueTerambil();
      cout << "Tidak Dapat Melanjutkan Pembayaran" << endl;
      break;
    }
    else
    {
      displayQueueTerambil();
    }
    cout << endl;
    cout << "Melanjutkan Pembayaran Antrian Ke-" << no << " [1: Iya | 2: Tidak] : ";
    cin >> bayar;
    if(bayar == 1)
    {
      Bayar();
      cout << "Ingin Melakukan Pembayaran Lagi ? [1: Iya | 2: Tidak] : ";
      cin >> bayarLagi;
      no++;
    }
    else
    {
      bayarLagi = 2;
    }
  }
}
