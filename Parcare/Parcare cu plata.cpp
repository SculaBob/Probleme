//Cunoscându-se data ?i ora intrarii într-o parcare, data ?i ora prilecarii din parcare ?i taful orar, 
//sa se determine timpul cât a stat ma?ina în parcare ?i suma de plata. 

#include <iostream>
using namespace std;

int main (){
	int h1, h2, m1, m2, p;
	double c;
	cout<<"Costul stationarii /ora "; cin>>p;
	cout<<"Ora la care masina a intrat in parcare "; cin>>h1;
	cout<<":"; cin>>m1;
	if(h1<0||h1>23||m1<0||m1>59)
	{
		cout<<"Prst";
	}
	
	cout<<"Ora la care masina iese din parcare "; cin>>h2;
	cout<<":"; cin>>m2;
	if(h2<0 || h2>23 || m2<0 || m2>59)
	{
		cout<<"Prst";
	}
	
	h2=h2-h1;
	if(h2<0){
		h2=24+h2;
	}
	
	m2=m2-m1;
	if(m2<0){
		m2=60+m2;
		h2--;
	}
	cout<<"Masina a stationat "<<h2<<":"<<m2<<endl;
	c=p*h2 + p*m2/60;
	cout<<"Costul stationarii "<<c;
	return 0;
}
