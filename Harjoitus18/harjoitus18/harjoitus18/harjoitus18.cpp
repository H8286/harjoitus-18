/*Sami Liimatainen
IIO14S1
11.11.2014
Harjoitus 18
versio 1.0

Tee ohjelma, joka kysyy viiden koiran nimet ja iät.
Tiedot tallennetaan tietuetaulukkoon.
a) järjestä tiedot ikä - kentän mukaan suuruusjärjestykseen
(pienimmästä suurimpaan).Ohjelma tulostaa lopuksi
jarjestetyn taulukon näytälle.
b) järjestä tiedot nimi - kentän mukaan aakkosjärjestyksessä
Ohjelma tulostaa lopuksi jarjestetyn taulukon näytolle.

Lajittelu tulee toteuttaa siten, että se toimisi samoin
myäs 50 tai 5000 koiran tapauksssa.
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
		cout << "Anna " << ind + 1 << ". koiran nimi ja ikä: ";
		cin >> koira[ind].nimi >> koira[ind].ika;
	}
	cout << "Koirien tiedot \n";
	for (ind = 0; ind < MAX_KOIRAT; ind++)
	{
		cout << ind + 1 << ". koiran nimi ja ikä: " << koira[ind].nimi << ' ' << koira[ind].ika << endl;
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
	cout << "Koirat aakkosjärjestyksessä \n";
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

	cout << "Taulukkko ennen järjestelyä \n";

	int ind;
	for (ind = 0; ind < MAX_TAULU; ind++)
	{
		cout << taulu[ind] << ' ';
	}
	cout << endl;
	cout << "Järjestetään \n";
	for (int i = 0; i < MAX_TAULU - 1; i++)
		for (int j = i + 1; j < MAX_TAULU; j++)
			if (taulu[i] > taulu[j])
			{ //cout << i << ' ' << j << endl;
				int tmp=taulu[i];
				taulu[i] = taulu[j];
				taulu[j] = tmp;
			}
	cout << "Taulukkko järjestämisen jälkeen \n";
	for (ind = 0; ind < MAX_TAULU; ind++)
	{
		cout << taulu[ind] << ' ';
	}
	cout << endl;	
}*/