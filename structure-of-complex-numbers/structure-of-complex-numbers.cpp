//Завдання 1. Створіть структуру, що описує комплексне  число.Реалізуйте арифметичні операції з комплексними числами : суму, різницю, множення, ділення
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
void  Sum(double a, double b, double c, double d, const int i);//функція знаходження суми комплексних чисел
void  Difference(double a, double b, double c, double d, const int i);//функція знаходження різнмці комплексних чисел
void  Product(double a, double b, double c, double d, const int i);//функція знаходження добутку комплексних чисел
void  Division(double a, double b, double c, double d, const int i);//функція ділення комплексних чисел
struct Complex_numbers {//структура, що описує комплексне  число
	double a = 0;//дійсне число Re(z)-комплексного числа
	double b = 0;//дійсне число Im(z)-комплексного числа
	const int i = 1;//уявна одиниця комплексного числа
	void inputComplexNumders() {//функція введення чисел комплексного числа
		cout << "Enter  Re(z) - number a" << endl;
		cin >> a;
		cout << "Enter  Im(z) - number a" << endl;
		cin >> b;
	}
};
int main()
{	
	cout << "First complex numbers" << endl;
	Complex_numbers Z1;//перше комплексне число
    Z1.inputComplexNumders();// введення чисел першого комплексного числа
	cout << "Second complex numbers" << endl;
	Complex_numbers Z2;//друге комплексне число
	Z2.inputComplexNumders();//введення чисел другого комплексного числа
	cout << "The sum of complex numders" << endl;
	Sum(Z1.a, Z1.b, Z2.a, Z2.b,Z1.i);//звертаємось до функції  знаходження суми комплексних чисел
	cout << "The difference of complex numders" << endl;
	Difference(Z1.a, Z1.b, Z2.a, Z2.b, Z1.i);//звертаємось до функції  знаходження різнмці комплексних чисел
	cout << "The product of complex numders" << endl;
	Product(Z1.a, Z1.b, Z2.a, Z2.b, Z1.i);//звертаємось до функції знаходження добутку комплексних чисел
	cout << "The  division of complex numders" << endl;
	Division(Z1.a, Z1.b, Z2.a, Z2.b, Z1.i);//звертаємось до функції  ділення комплексних чисел
	}

void  Sum(double a, double b, double c, double d, const int i) {//функція знаходження суми комплексних чисел
	double sum = (a + c) + (b + d) * i;//використовуємо формулу для знаходження суми комплексних чисел
	cout << "Sum=" << sum << endl;
}
void  Difference(double a, double b, double c, double d, const int i) {//функція знаходження різнмці комплексних чисел
	double diff = (a - c) + (b - d) * i;//використовуємо формулу для знаходження різниці комплексних чисел
	cout << "Difference=" << diff << endl;
}
void  Product(double a, double b, double c, double d, const int i) {//функція знаходження добутку комплексних чисел
	double prod = (a * c - b * d) + (a * d + b * c) * i;//використовуємо формулу для знаходження добутку комплексних чисел
	cout << "Product=" << prod << endl;
}
void  Division(double a, double b, double c, double d, const int i) {//функція ділення комплексних чисел
	double div = (a * c + b * d) / (c * c + d * d) + ((b * c - a * d) / (c * c + d * d)) * i;//використовуємо формулу для ділення комплексних чисел
	cout << "Division=" << div << endl;
}