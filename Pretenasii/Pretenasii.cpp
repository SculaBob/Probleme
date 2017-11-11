//i. Într-un grup sunt N prieteni. Când se întâlnesc se saluta, fiecare dând mâna cu to?i ceilal?i.
//Câte strângeri de mâna au loc? (doua solutii: formula directa si numarare – cu for sau cu while)

#include <iostream>
using namespace std;

int main ()
{
	int n, s;
	cout<<"Numarul de pretenasi "; cin>>n;
	s=n*(n-1)/2;
	cout<<"Numarul de strangeri de mana "<<s;
}
