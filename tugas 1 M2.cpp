#include<iostream>
#include <math.h>
using namespace std;

int main()

{
	cout<< "Program penentu kelipatan bilangan"<< endl;
	int a, b, hasil; //a=bilangan 1, b=bilangan 2
	cout<< "Masukan bilangan 1 : ";
	cin>> a;
	cout<< "Masukan bilangan 2 : ";
	cin>> b;
	hasil= a/b%2;
	if (hasil==0)
	cout<< "bilangan 1 kelipatan bilangan 2";
	else 
	cout<< "bilangan 1 bukan kelipatan bilangan 2";
}
