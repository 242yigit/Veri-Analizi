#include <iostream>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main(){
	srand(time(NULL));
	int sayilar[500];
	for(int i =0;i<500;i++){
		int rastgele = rand()%(35-25+1)+25;
		cout << (i+1) << ". Sayi : " << rastgele << endl;
	}









	return 0;
}