//i. �ntr-un grup sunt N prieteni. C�nd se �nt�lnesc se saluta, fiecare d�nd m�na cu to?i ceilal?i.
//C�te str�ngeri de m�na au loc? (doua solutii: formula directa si numarare � cu for sau cu while)

#include <iostream>
using namespace std;

int main ()
{
	int n, i, j, s;
	cout<<"Numarul de pretenasi "; cin>>n;
	for (i=1, s=0; i<=n; i++)
	{
		j=n-i;
		s+=j;
		
	}
	
	cout<<"Numarul de strangeri de mana "<<s << endl;
	
	for (i=1, s=0; i<=n; i++)
	{
		for (j=i+1; j<=n; j++){
			s++;
			cout<< "copilul " << i << " da mana cu copilul " << j << endl;
		}
		
	}
	cout<<"Numarul de strangeri de mana "<<s;
	return 0;
}
