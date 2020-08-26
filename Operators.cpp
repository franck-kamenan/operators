#include <iostream>
using namespace std;

int main()
{
	int somme1 = 100 + 50;
	cout << somme1 << "\n";
	int somme2 = somme1 + 250;
	int somme3 = somme1 + somme2;
	cout << somme2 << "\n";
	cout << somme3 << "\n";
	int substraction = somme2 - somme1;
	cout << substraction << "\n";
	int multiplication = substraction * 2;
	cout << multiplication << "\n";
	int division = multiplication / 2;
	cout << division << "\n";
	int modulus = 5 % 2;
	cout << modulus << "\n";
	int increment = ++somme1;
	cout << increment << "\n";
	int decrement = --somme2;
	cout << decrement << "\n\n";

	int a = 10;
	cout << a << "\n";
	a += 5;
	cout << a << "\n";
	a -= 3;
	cout << a << "\n";
	a *= 2;
	cout << a << "\n";
	a /= 4;
	cout << a << "\n";
	a %= 5;
	cout << a << "\n\n";

	int b = 5;
	int c = 3;
	int d = 3;
	cout << (b > c) << "\n";
	cout << (b < c) << "\n";
	cout << (c == d) << "\n";
	cout << (b != c) << "\n";
	cout << (b >= c) << "\n";
	cout << (c <= d) << "\n";
	cout << (b > c && b > d) << "\n";
	cout << (b > c || b < d) << "\n";

	return 0;
}