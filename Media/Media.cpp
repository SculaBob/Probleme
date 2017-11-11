//Sa se scrie un program care citeste de la tastatura cele trei note ale unui elev ?i determina media lor. (media sa fie afisata cu doua zecimale) 

#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
	int a, b, c, m;
	double m2;
	cout<<"Dati prima nota "; cin>>a;
	cout<<"Dati a doua nota "; cin>>b;
	cout<<"Dati a treia nota "; cin>>c;
	m=(a+b+c)*100/3;
	m2=(a+b+c)/3.0;
	cout<<"Media este "<<m/100<<"."<<m%100 << endl;
	cout << fixed;
    cout << setprecision(2);
	cout << "Media 2 este " << m2;
	
	printf("%.2f ", m2);

	return 0;
}
