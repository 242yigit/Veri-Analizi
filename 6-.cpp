#include <iostream>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main()
{
	srand(time(NULL));
	float sayilar[500];
	for(int i =0;i<500;i++)
    {
		float rastgele = ((float)rand()) / (float)RAND_MAX * (1 - 0+1)+0;
		sayilar[i] = rastgele;
		cout << i+1 << ". Sayi : " << rastgele<< endl;
	}
    	return 0;
    }