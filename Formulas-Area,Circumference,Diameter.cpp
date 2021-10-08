#include <iostream>
using namespace std;
int main()
{
	int r = 0;
	int d = 0;
	int c = 0;
	int A = 0;
	float pi = 3.14;
	cout << "Enter the value of radius(r) \n";
	cin >> r;
    d=2* r;
	c = 2 * pi * r;
	cout << "ANSWERS  \n";
	cout << "Area= " << pi * (r * r) << endl;
	cout << "Diameter= " << d << endl;
	cout << "Circumference= " << c << endl;
	return 0;



}