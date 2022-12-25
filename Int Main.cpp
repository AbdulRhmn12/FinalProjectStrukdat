#include <iostream>
#include <limits>
#include <cstdlib>
#include <fstream>

using namespace std;

int main (){
    int userChoice, roll, maxRoll, rollNum = 1, price = 15000, banyaknyaCuci;
    dataPelanggan pelanggan;
    char lanjutkan;

    userChoice = getOption();
    while (userChoice != finish){
        switch (userChoice){
            case input:
                cout << "=== Menu Input Pelanggan ===" << endl;
                cout << "Masukkan Banyaknnya Antrian Pelanggan : "<< endl;
                cin >> roll;
                maxRoll = rollNum + roll; // batas atas perulangan
                for (int i = rollNum; i < maxRoll; i++){
                    cout << "Pelanggan Ke-" << i << endl;
                    pelanggan.number = i;
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Nama Pelanggan : ";
                    cin.getline(pelanggan.name, 30);
                    cout << "Nomor Handpone Pelanggan : ";
                    cin >> pelanggan.phoneNumber;
                    cout << "Berat Baju : ";
                    cin >> pelanggan.weight;
                    pelanggan.totalPrice = pelanggan.weight * price;
                    enqueue(pelanggan);
                    push(pelanggan.number);
                 }
                break;
            case lihat:
                cout << "=== Menu Lihat Daftar Pelanggan ===" << endl;
                displayQueue();
                break;
            case cuci:
                cout << "=== Menu Pencucian Baju ===" << endl;
                displayStack();
                cout << endl;
                if(!isBajuEmpty()){
                    cout << "Masukkan Jumlah Pencucian Yang Ingin dilakukan : ";
                    cin >> banyaknyaCuci;
                    for(int i = 0; i<banyaknyaCuci; i++){
                        pop();
                    }
                }
                break;
            case ambil:
                cout << "=== Menu Pengambilan Baju ===" << endl;
                displayStackAmbil();
                cout << endl;
                int nomorbaju;
                if (!isAmbilEmpty()){
                    cout << "Masukkan Nomor Baju Yang Ingin Diambil : ";
                    cin >> nomorbaju;
                    getAmbil(nomorbaju);
                }
                break;
            case bayar:
                cout << "=== Menu Pembayaran ===" << endl;
                pembayaran();
                //flow control aplikasi
                if(lanjutkan == 'y' or lanjutkan == 'Y'){
                    userChoice = getOption();
                }
                else if (lanjutkan == 'n' or lanjutkan == 'N'){
                    break;
                }
                else{
                    break;
                }
        }
    }
    retrun 0;
}
