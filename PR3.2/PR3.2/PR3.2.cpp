#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний параметр
	double a; // результат обчислення виразу
	double b; // проміжний результат - функціонально стала частина виразу
	double c; // проміжний результат - функціонально змінна частина виразу
	double F;

	cout << "x = "; cin >> x;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;


	if (x < 0 && b != 0)
		F = a * (x * x) + b; // x * x = pow(x,2)        x*x - менше пам'яті займає
	if (x > 0 && b == 0)
		F = (x-a)/(x-c);
	else
		F = x/c;

	cout << endl;
	cout << "1) F = " << F << endl;
	
	
	F = 0;

	if (x < 0 && b != 0)
		F = a * (x * x) + b; // x * x = pow(x,2)        x*x - менше пам'яті займає
	else
		if (x > 0 && b == 0)
			F = (x - a) / (x - c);
		else
			F = x / c;

	cout << "2) F = " << F << endl;
	cin.get();
	return 0;


}
