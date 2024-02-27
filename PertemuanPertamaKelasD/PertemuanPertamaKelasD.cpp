#include <iostream>
using namespace std;

int main() 
{//begin 


	//numeric nAlas, nTinggi, nLuas 
	//display 'Masukan Alasnya=	
	//accept nAlas
	//display 'Masukan TIngginya=
	//accept nTinggi
	//compute nLuas = 1/2 * nAlas * nTinggi 
	//display 'luasnya adalah=

	int nAlas, nTinggi;
	double nLuas;
	cout << "Masukan Alasnya= ";
	cin >> nAlas;
	cout << "Masukan Tingginya= ";
	cin >> nTinggi;
	nLuas = 0.5 * (nAlas * nTinggi);
	cout << "Luasnya adalah= " << nLuas << endl;

	system("pause");



}
