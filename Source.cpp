#include <iostream>
import student0;
import student1;
import student2;
import student3;
import student4;

using std::cout;
using std::cin;
using std::endl;
void print(double x, double f1, double x2, double f2, int n, double f3, double accuracy, double f4);
int main()
{
	int choice2, n;
	double x1, x2, accuracy;
	int choice1 = 0;
	setlocale(LC_ALL, "RUSSIAN");
	while (choice1 !=9)
	{
		if (choice1 != 1)
		{
			cout << "x ��� ������� f1(x)" << endl;
			cin >> x1;
			cout << "x ��� ������� f2(x)" << endl;
			cin >> x2;
			cout << "������� ����� ����� ������������������ a ��� ������� f3(n)" << endl;
			cin >> n;
			cout << "������� �������� ��� ������� f4(n)" << endl;
			cin >> accuracy;
		}
		cout << "\t����\t" << endl;
		cout << "1 - 1 �������" << endl;
		cout << "2 - 2 �������" << endl;
		cout << "3 - 3 �������" << endl;
		cout << "4 - 4 �������" << endl;
		cout << "5 - 5 �������" << endl;
		cout << "0 - ����� �� ���������" << endl;
		cin >> choice2;
		switch (choice2)
		{
		case 1:
			cout << "\t\t\t����� ������� �������\t\t\t" << endl;
			print(x1, RBPO::Lab2::Variant25::Task1::f1(x1), x2, RBPO::Lab2::Variant25::Task1::f2(x2), n, RBPO::Lab2::Variant25::Task1::f3(n), accuracy, RBPO::Lab2::Variant25::Task1::f4(accuracy));
			break;
		case 2:
			cout << "\t\t\t����� ������� �������\t\t\t" << endl;
			print(x1, RBPO::Lab2::Variant25::Task2::f1(x1), x2, RBPO::Lab2::Variant25::Task2::f2(x2), n, RBPO::Lab2::Variant25::Task2::f3(n), accuracy, RBPO::Lab2::Variant25::Task2::f4(accuracy));
			break;
		case 3:
			cout << "\t\t\t����� �������� �������\t\t\t" << endl;
			print(x1, RBPO::Lab2::Variant25::Task3::f1(x1), x2, RBPO::Lab2::Variant25::Task3::f2(x2), n, RBPO::Lab2::Variant25::Task3::f3(n), accuracy, RBPO::Lab2::Variant25::Task3::f4(accuracy));
			break;
		case 4:
			cout << "\t\t\t����� ���������� �������\t\t\t" << endl;
			print(x1, RBPO::Lab2::Variant25::Task4::f1(x1), x2, RBPO::Lab2::Variant25::Task4::f2(x2), n, RBPO::Lab2::Variant25::Task4::f3(n), accuracy, RBPO::Lab2::Variant25::Task4::f4(accuracy));
			break;
		case 5:
			cout << "\t\t\t����� ������ �������\t\t\t" << endl;
			print(x1, RBPO::Lab2::Variant25::Task5::f1(x1), x2, RBPO::Lab2::Variant25::Task5::f2(x2), n, RBPO::Lab2::Variant25::Task5::f3(n), accuracy, RBPO::Lab2::Variant25::Task5::f4(accuracy));
			break;
		case 0:
			return 0;
		default:
			cout << "�������� ����" << endl;
			break;
		}
		cout << "����������?" << endl << endl;
		cout << "1 - ����������" << endl;
		cout << "9 - �����" << endl;
		cin >> choice1;
	}
	return 0;
}

void print(double x1, double f1, double x2, double f2, int n, double f3, double accuracy, double f4)
{
	printf("f1(%f) = %f\n", x1, f1);
	printf("f2(%f) = %f\n", x2, f2);
	printf("f3(%d) = %f\n", n, f3);
	printf("f4(%f) = %f\n", accuracy, f4);
}