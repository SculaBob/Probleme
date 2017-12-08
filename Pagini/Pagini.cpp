//Pentru numerotarea paginilor unei serii enciclopedice formate din unul sau mai multe volume se presupune ca se folosesc n cifre. 
//Fiecare volum are 300 de pagini, eventual cu exceptia ultimului volum care ar putea avea mai putine. 
//Pentru n dat, sa se determine numarul de volume din serie V si numarul de pagini P ale ultimului volum. 
//Daca nu este posibila numerotarea paginilor folosind n cifre, se va afisa mesajul IMPOSIBIL. 
#include <iostream>

using namespace std;
int main()
{
	int V, n, P;
	cout<<"Numarul de pagini al seriei enciclopedice: "; cin>>n;
	V=n/300;
	P=n%300;
	if (P==0)
	P=300;
	
	
	if (n<300)
	cout<<"Imposibil";
	else
	{
		cout<<"Numarul de volume este "<<V<<endl;
		cout<<"Numarul de pagini ale ultimului volum "<<P;
	}
	return 0;
}
