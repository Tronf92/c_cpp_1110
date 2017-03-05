#include <iostream>

using namespace std;
template<class T> T compara_valori(T a, T b){
	return ( (a>b) ? a:b);
}


void main(){
	double a = 1.2345, b = 2.34567;
	cout << "Comparam " << a << ' ' << b << ' ' << compara_valori(a,b) << endl;
	
	int c = 1, d = 1001;

	cout << "Comparam " << c << ' ' << d << ' ' << compara_valori(c,d) << endl;

	long e = 1010101L , f = 2020202L;

	cout << "Comparam " << e << ' ' << f << ' ' << compara_valori(e,f) << endl;
	
	system("pause");
}


double compara_valori(double a, double b);
int compara_valori(int a, int b);
long compara_valori(long a, long b);
