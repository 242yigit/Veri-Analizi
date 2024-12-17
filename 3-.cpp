#include <iostream>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main(){
	srand(time(NULL));
	int sayilar[500];
	int toplam = 0;
	int ortalama = 0;
	for(int i =0;i<500;i++)
    {
		int rastgele = rand()%(35-10+1)+10;
		sayilar[i] = rastgele;
		toplam+= rastgele;
	}
	ortalama += toplam/500;
	if(ortalama >=20 && ortalama <=30){
		cout << "20 ile 30 Arasinda Kalan Sayilarin Ortalamasi : " << ortalama << endl;
	}








	return 0;
}