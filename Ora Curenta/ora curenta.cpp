//Se dau numerele naturale?h m, reprezentând un ora curenta exprimata în ore si minute. Sa se determine care va fi ora peste?x?ore si?y?minute. 

//Program data v2.0
//Iei data completa
//primesti numar de ore in viitor
//calculezi data completa
//TODO

#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	int h, m, x, y, j;
	
	time_t t = time(0);   // get time now
    struct tm * now = localtime( & t );
    cout << (now->tm_year + 1900) << '-' 
         << (now->tm_mon + 1) << '-'
         <<  now->tm_mday << ' '
         << now->tm_hour << ':'
         << now->tm_min
         << endl;

	
	h = now->tm_hour;
	m = now->tm_min;
	
	//cout<<"ora curenta "; cin>>h;
	//cout<<"minute "; cin>>m;
	cout<<"cate ore in viitor vrei sa fii? "; cin>>x;
	cout<<"si minute? "; cin>>y;
	cout<<"esti sigur? "; cin>>j;
	if (0<=h && h<=23 && 0<=m && m<=59 && 0<=y && y<=59){
		x=x%24;
		h=h+x;
		h=h%24;
		m=m+y;
		if (m>=60){
			m=m%60;
			h++;
		}
		cout<<"Va fi "<<h<<":"<<m<<"! Mai asteapta!";
	}
	else{
		cout<<""<<endl;
		cout<<"Mai baga o fisa";
	}
}
