#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    srand(time(NULL));
    int sayilar[500];
    int toplam = 0;
    int aritmetik = 0;
    int enb, enk;
    int teksayilar[500];
    int ciftsayilar[500];
    int cifts = 0, teks = 0;
    int ortk[500];
    int ortb[500];
    int ortib = 0, ortik = 0;
    int frekans[36] = {0}; 

    for (int i = 0; i < 500; i++) {
        int rastgele = rand() % (35 - 10 + 1) + 10;  
        sayilar[i] = rastgele;
        toplam += rastgele;

        if (rastgele % 2 == 0) {
            ciftsayilar[cifts++] = rastgele;
        } else {
            teksayilar[teks++] = rastgele;
        }

        frekans[rastgele - 10]++;  
    }

    aritmetik = toplam / 500;
    cout << "Dizideki Sayilarin Aritmatik Ortalamasi: " << aritmetik << endl;

    enb = sayilar[0];
    enk = sayilar[0];
    for (int i = 1; i < 500; i++) {
        if (sayilar[i] > enb) 
            enb = sayilar[i];
        if (sayilar[i] < enk) 
            enk = sayilar[i];
    }

    cout << "En buyuk sayi: " << enb<< endl;
    cout << "En kucuk sayi: " << enk << endl;

    cout << "Cift Sayilar: " << endl;
    for (int i = 0; i < cifts; i++) {
        cout << ciftsayilar[i] << ",";
    }
    cout<<endl;
    cout << "Tek Sayilar: " << endl;
    for (int i = 0; i < teks; i++) {
        cout << teksayilar[i] << ",";
    }
    cout << "Ortalamanin Alti Sayilar: " << endl;
    for (int i = 0; i < ortib; i++) 
    {
        cout << ortb[i] <<",";
        }
    cout<<endl;
    cout << "Ortalamanin Ustu Sayilar: " << endl;
    for (int i = 0; i < ortik; i++) 
    {
        cout << ortk[i] <<",";
        }
        cout << "\nSayilardaki frekanslar: " << endl;
    for (int i = 0; i < 36; i++) { 
        if (frekans[i] > 0) { 
            cout << "Sayi " << i + 10 << ": " << frekans[i] << " kez tekrar etti." << endl;
        }
    }
    for (int i = 0; i < 500; i++) {
        int rastgele = sayilar[i]; 
        if (rastgele < aritmetik) {
            ortb[ortib++] = rastgele;
        } else {
            ortk[ortik++] =rastgele;
        }
	}

    return 0;
}
