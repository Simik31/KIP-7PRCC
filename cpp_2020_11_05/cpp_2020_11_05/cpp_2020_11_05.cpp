#include "my.h"
#include "MathFce.h"

using namespace std;

int My::pocetInstanci = 0;

int main()
{
	My instance1(1);
	My instance2(2);
	cout << "Intanci: " << My::GetCountOfInstances() << endl;

	cout << "abs(-6): " << MathFce::absolute(-6) << endl;

	cout << "pow(2, 2): " << MathFce::power(2, 2) << endl;
	cout << "pow(2, -8): " << MathFce::power(2, -8) << endl;

	cout << "add(2, 3): " << MathFce::add(2, 3) << endl;

	cout << "subtract(5, 3): " << MathFce::subtract(5, 3) << endl;

	cout << "multiply(2, 7): " << MathFce::multiply(2, 7) << endl;

	cout << "devide(5, 2): " << MathFce::devide(5, 2) << endl;

	cout << "intDevide(5, 2): " << MathFce::intDevide(7, 3) << endl;

	cout << "mod(5, 2): " << MathFce::mod(9, 5) << endl;
}