// программа дл€ вы€снени€ параметров окружности
#include <iostream>
using namespace std;
int main()
{
	const float PI = 3.141592;// обозначение константы - 
	// числа пи
	// объ€вление переменных дл€ хранени€ параметров
	float radius, circumference, area;
	// приглашение ввести радиус
	cout << "Welcome to program of work with rounds\n\n";
	cout << "Put the radius from rounds\n\n";
	cin >> radius;
	cout << "\n\n";
	area = PI * radius * radius; // подсчет площади круга
	circumference = PI * (radius * 2); // подсчет длины 
	// окружности
	// вывод результатов
	cout << "Square of round: " << area << "\n\n";
	cout << "length of round: " << circumference << "\n\n";
	cout << "THANKS!!! BYE!!!\n\n";

	return 0;
}