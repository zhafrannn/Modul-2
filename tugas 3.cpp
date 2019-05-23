#include<iostream>
using namespace std;

int main()

{
	cout<< "konversi nilai " <<endl;
	float bil;
	cout<< "Masukan Nilai : ";
	cin>> bil;
	if (bil>=80 && bil<=100)
	cout<< "A";
	if (bil>=65 && bil<=79.9)
	cout<< "B";
	if (bil>=55 && bil<=64.9)
	cout<< "C";
	if (bil>=45 && bil<=54.9)
	cout<< "D";
	if (bil>=0 && bil<=44.9)
	cout<< "E";
}
