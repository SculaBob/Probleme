//ii. În regatul lui Catalin ?i al lui Sebi exista 3 elfi magici, fiecare având vârsta formata dintr-o singura cifra. Fie aceste cifre x, y, z. Ei au aflat ca se ?ine un sfat al batrânilor în care pot participa doar elfii ale caror vârste sunt numere de  3 
//cifre. Pentru a fi si ei prezenti, cei trei elfi magici î?i folosesc puterile pentru a-?i uni vârstele într-un singur numar de 3 cifre. Transformarea lor este perfecta doar daca obtin, alaturând vârstele lor, un numar par de 3 cifre. Sa se afi?eze 
//
#include <iostream>
using namespace std;
int main ()
{ 
	int x, y, z, a, n=0, v[10];
	cout<<"Varsta primului copil elf este "; cin>>x;
	if (x>10)
	{
		cout<<"Se cere varsta de o singura cifra. Elful este inca un copil!";
		return 0;
	}
	
	cout<<"varsta celui de al doilea copil elf este "; cin>>y;
	if (y>10)
	{
		cout<<"Se cere varsta de o singura cifra. Elful este inca un copil!";
		return 0;
	}
	cout<<"Varsta celui de al treilea copil elf este "; cin>>z;
	if (z>10)
	{
		cout<<"Se cere varsta de o singura cifra. Elful este inca un copil!";
		return 0;
	}
	v[1]=100*x+10*y+z;
	v[2]=100*x+10*z+y;
	v[3]=100*y+10*x+z;
	v[4]=100*y+10*z+x;
	v[5]=100*z+10*x+y;
	v[6]=100*z+10*y+x;
	for (a=1; a<=6; a++)
	{
		if (v[a]%2==0)
		{
			cout<<v[a]<<" este un numar perfect "<<endl;
			n++;
		}
		}
	if (n==0)
	cout<<"Anul viitor sigur veti putea concura! Mult succes data viitoare!";
	else 
	{
		cout<<"Se pot forma "<<n<<" numere perfecte";
	}
	return 0;
}
