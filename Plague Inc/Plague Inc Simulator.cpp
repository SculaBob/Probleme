//Tinutul de Nord era �mpar?it �n n r�nduri a c�te m comitate, fiecare comitat ocup�nd o suprafa?a patrata de un hectar. �nsa descoperirile au mai aratat ca aceasta 
//civiliza?ie a fost atacata de la sud-vest de o bacterie periculoasa, ce a ac?ionat astfel: �n primul an, a infectat comitatul din 
//col?ul din st�nga jos al har?ii, �n al doilea an a infectat cele doua comitate vecine cu primul, �n al treilea an a infectat cele 
//trei comitate vecine cu anterioarele doua ?i a?a mai departe, infec?ia oprindu-se c�nd bacteria a ajuns la marginea 
//de sus sau la marginea din dreapta a har?ii. Scrieti un program care sa determine numarul de comitate ramase neinfectate dupa oprirea expansiunii bacteriei. 


#include <iostream>
using namespace std;
int main()
{
	int n, m, i, j, v[40][40], a=0;
	
	cout<<"Cate randuri are Tinutul de Nord? "; cin>>n;
	cout<<"Cate comitate are Tinutul de Nord? "; cin>>m;
	
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=m; j++)
		{
			v[i][j]=1;
		}
	}
	
	v[n][1]=0;
		
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=m; j++)
		{
			if (v[i][j]==0)
			{
				
			v[i-1][j]=0;
			v[i][j+1]=0;
			}
		}
		
	}
	
	
	a=0;
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=m; j++)
		{
				a=a+v[i][j];
			}
	}
	
	cout<<"Numarul de comitate ramase neinfectate este "<<a;
	return 0;	
}
