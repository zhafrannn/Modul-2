#include<iostream>
#include<math.h>
using namespace std;

int main()

{
	cout<< "Program penentu segitiga siku-siku" << endl;
	float a, b, c;
	cout<< "Masukan bilangan 1 : " ;
	cin>> a;
	cout<< "Masukan bilangan 2 : " ; 
	cin>> b;
	cout<< "Masukan bilangan 3 : " ;
	cin>> c;
	if(c*c == a*a + b*b || a*a == c*c + b*b || b*b == a*a + c*c )
		cout<< "Dapat Membentuk Segitiga Siku-Siku";
	else
		cout<< "Tidak Dapat Membentuk Segitiga Siku-Siku";
}
