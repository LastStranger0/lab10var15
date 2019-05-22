#include "pch.h"
#include <iostream>
using namespace std;

int fackt(int x) {
	if (x < 0)
		return 0; 
	if (x == 0)
		return 1; 
	else
		return x * fackt(x - 1); 

}
int main()
{
	setlocale(LC_ALL, "Russian");
	double z;
	int n1, k1,s1;
	int n2=1, k2=1, s2=1;
	cout << "Введите n:";
	cin >> n1;
	cout << "\n";
	cout << "Введите k:";
	cin >> k1;
	cout << "\n";
	k2 = fackt(k1);
	n2 = fackt(n1);
	/*for (int i = 0; i < k1; i++) {
		k2 = k2*(k1 - i);
	}
	for (int i = 0; i < n1; i++) {
		n2 = n2*(n1 - i);
	}*/
	s1 = n1 - k1;
	s2 = fackt(s1);
	/*for (int i = 0; i < s1; i++) {
		s2 = s2*(s1- i);
	}*/

	z = n2 / (k2*s2);
	cout << "Результат:" << z << endl;
	system("PAUSE");
}