//i. Într-un grup sunt N prieteni. Când se întâlnesc se saluta, fiecare dând mâna cu to?i ceilal?i.
//Câte strângeri de mâna au loc? (doua solutii: formula directa si numarare – cu for sau cu while)

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
