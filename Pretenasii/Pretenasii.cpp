//i. �ntr-un grup sunt N prieteni. C�nd se �nt�lnesc se saluta, fiecare d�nd m�na cu to?i ceilal?i.
//C�te str�ngeri de m�na au loc? (doua solutii: formula directa si numarare � cu for sau cu while)

#include <iostream>
using namespace std;

int main ()
{
	int n, s;
	cout<<"Numarul de pretenasi "; cin>>n;
	s=n*(n-1)/2;
	cout<<"Numarul de strangeri de mana "<<s;
}
