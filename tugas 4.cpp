#include <iostream>
using namespace std;
int main()
{
	int j1,j2,j3,m1,m2,m3;
	cout << "Program menghitung selisih jam dan menit" << endl;
	cout << "Masukan Jam Masuk : ";
	cin >> j1;
	cout << "Masukan Menit Masuk : ";
	cin >> m1;
	cout << "___________________________" << endl;
	cout << "Masukan Jam Keluar : ";
	cin >>j2;
	cout << "Masukan Menit Keluar : ";
	cin >> m2;
	if(m2-m1<0){
		m3 = 60-(m1-m2);
		j3 = (j2-j1)-1;
	}
	else{
		j3 = j2-j1;
		m3 = m2-m1;
	}
	cout << "Selisih :" << endl;
	cout << j3 << "Jam" << m3 << "Menit";
}
