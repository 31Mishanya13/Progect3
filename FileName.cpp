// ��������� ��� ��������� ���������� ����������
#include <iostream>
using namespace std;
int main()
{
	const float PI = 3.141592;// ����������� ��������� - 
	// ����� ��
	// ���������� ���������� ��� �������� ����������
	float radius, circumference, area;
	// ����������� ������ ������
	cout << "Welcome to program of work with rounds\n\n";
	cout << "Put the radius from rounds\n\n";
	cin >> radius;
	cout << "\n\n";
	area = PI * radius * radius; // ������� ������� �����
	circumference = PI * (radius * 2); // ������� ����� 
	// ����������
	// ����� �����������
	cout << "Square of round: " << area << "\n\n";
	cout << "length of round: " << circumference << "\n\n";
	cout << "THANKS!!! BYE!!!\n\n";

	return 0;
}