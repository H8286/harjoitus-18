/*Sami Liimatainen
IIO14S1
11.11.2014
Harjoitus 18
versio 1.0

Tee ohjelma, joka kysyy viiden koiran nimet ja i�t.
Tiedot tallennetaan tietuetaulukkoon.
a) j�rjest� tiedot ik� - kent�n mukaan suuruusj�rjestykseen
(pienimm�st� suurimpaan).Ohjelma tulostaa lopuksi
jarjestetyn taulukon n�yt�lle.
b) j�rjest� tiedot nimi - kent�n mukaan aakkosj�rjestyksess�
Ohjelma tulostaa lopuksi jarjestetyn taulukon n�ytolle.

Lajittelu tulee toteuttaa siten, ett� se toimisi samoin
my�s 50 tai 5000 koiran tapauksssa.
*/


#include <iostream>
#include <cstring>
using namespace std;
struct KOIRATIEDOT
{
	int ika;
	char nimi[20];
};

int main()
{
	const int MAX_KOIRAT = 3;
	KOIRATIEDOT koira[MAX_KOIRAT];
	int ind;
	for (ind = 0; ind < MAX_KOIRAT; ind++)
	{
		cout << "Anna " << ind + 1 << ". koiran nimi ja ik�: ";
		cin >> koira[ind].nimi >> koira[ind].ika;
	}
	cout << "Koirien tiedot \n";
	for (ind = 0; ind < MAX_KOIRAT; ind++)
	{
		cout << ind + 1 << ". koiran nimi ja ik�: " << koira[ind].nimi << ' ' << koira[ind].ika << endl;
	}
	cout << endl;


	for (int i = 0; i < MAX_KOIRAT - 1; i++)
		for (int j = i + 1; j < MAX_KOIRAT; j++)
			if (koira[i].ika > koira[j].ika)
			{
				KOIRATIEDOT tmp = koira[i];
				koira[i] = koira[j];
				koira[j] = tmp;

				/*int tmp = koira[i].ika;
				koira[i].ika = koira[j].ika;
				koira[j].ika = tmp;

				char tmp2[20];
				strcpy_s(tmp2, koira[i].nimi);
				strcpy_s(koira[i].nimi, koira[j].nimi);
				strcpy_s(koira[j].nimi, tmp2);*/
			}
	cout << "Koirat nuorimmasta vanhimpaan \n";
	for (ind = 0; ind < MAX_KOIRAT; ind++)
	{
		cout << koira[ind].nimi << ' ' << koira[ind].ika << endl;
	}
	cout << endl;


	for (int i = 0; i < MAX_KOIRAT - 1; i++)
		for (int j = i + 1; j < MAX_KOIRAT; j++)
			if (strcmp(koira[i].nimi, koira[j].nimi)>0)
			{
				KOIRATIEDOT tmp = koira[i];
				koira[i] = koira[j];
				koira[j] = tmp;

				/*int tmp = koira[i].ika;
				koira[i].ika = koira[j].ika;
				koira[j].ika = tmp;

				char tmp2[20];
				strcpy_s(tmp2, koira[i].nimi);
				strcpy_s(koira[i].nimi, koira[j].nimi);
				strcpy_s(koira[j].nimi, tmp2);*/
			}
	cout << "Koirat aakkosj�rjestyksess� \n";
	for (ind = 0; ind < MAX_KOIRAT; ind++)
	{
		cout << koira[ind].nimi << ' ' << koira[ind].ika << endl;
	}
	cout << endl;
}

/*
//vaihtolajittelu
#include <iostream>
using namespace std;
int main()
{
	const int MAX_TAULU = 4;
	int taulu[MAX_TAULU] = { 2, 7, 1, 3 };

	cout << "Taulukkko ennen j�rjestely� \n";

	int ind;
	for (ind = 0; ind < MAX_TAULU; ind++)
	{
		cout << taulu[ind] << ' ';
	}
	cout << endl;
	cout << "J�rjestet��n \n";
	for (int i = 0; i < MAX_TAULU - 1; i++)
		for (int j = i + 1; j < MAX_TAULU; j++)
			if (taulu[i] > taulu[j])
			{ //cout << i << ' ' << j << endl;
				int tmp=taulu[i];
				taulu[i] = taulu[j];
				taulu[j] = tmp;
			}
	cout << "Taulukkko j�rjest�misen j�lkeen \n";
	for (ind = 0; ind < MAX_TAULU; ind++)
	{
		cout << taulu[ind] << ' ';
	}
	cout << endl;	
}*/