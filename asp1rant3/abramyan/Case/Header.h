#include <iostream>
#include <cmath>
using namespace std;

void mission_1(int p) {
	setlocale(LC_ALL, "");
	switch (p) {
	case 1: {
		cout << "�����������" << endl;
		break;
	}
	case 2: {
		cout << "�������" << endl;
		break;
	}
	case 3: {
		cout << "�����" << endl;
		break;
	}
	case 4: {
		cout << "�������" << endl;
		break;
	}
	case 5: {
		cout << "�������" << endl;
		break;
	}
	case 6: {
		cout << "�������" << endl;
		break;
	}
	case 7: {
		cout << "�����������" << endl;
		break;
	}
	default: {
		cout << "������ ��� ������ �� ����������." << endl;
	}
	}
}
void mission_2(int p) {
	setlocale(LC_ALL, "");
	switch (p)
	{
	case 1: {
		cout << "�����" << endl;
		break;
	}
	case 2: {
		cout << "�������������������" << endl;
		break;
	}
	case 3: {
		cout << "�����������������" << endl;
		break;
	}
	case 4: {
		cout << "������" << endl;
		break;
	}
	case 5: {
		cout << "�������" << endl;
		break;
	}
	default: {
		cout << "������" << endl;
	}
	}
}
void mission_3(int p) {
	setlocale(LC_ALL, "");
	switch (p) {
	case 1: {
		cout << "����" << endl;
		break;
	}
	case 2: {
		cout << "����" << endl;
		break;
	}
	case 3: {
		cout << "�����" << endl;
		break;
	}
	case 4: {
		cout << "�����" << endl;
		break;
	}
	case 5: {
		cout << "�����" << endl;
		break;
	}
	case 6: {
		cout << "����" << endl;
		break;
	}
	case 7: {
		cout << "����" << endl;
		break;
	}
	case 8: {
		cout << "����" << endl;
		break;
	}
	case 9: {
		cout << "�����" << endl;
		break;
	}
	case 10: {
		cout << "�����" << endl;
		break;
	}
	case 11: {
		cout << "�����" << endl;
		break;
	}
	case 12: {
		cout << "����" << endl;
		break;
	}
	default: {
		cout << "������" << endl;
	}
	}
}
void mission_4(int p) {
	setlocale(LC_ALL, "");
	switch (p) {
	case 1: {
		cout << "� ������ 31 ����" << endl;
		break;
	}
	case 2: {
		cout << "� ������ 28 (29) ����" << endl;
		break;
	}
	case 3: {
		cout << "� ������ 31 ����" << endl;
		break;
	}
	case 4: {
		cout << "� ������ 30 ����" << endl;
		break;
	}
	case 5: {
		cout << "� ������ 31 ����" << endl;
		break;
	}
	case 6: {
		cout << "� ������ 30 ����" << endl;
		break;
	}
	case 7: {
		cout << "� ������ 31 ����" << endl;
		break;
	}
	case 8: {
		cout << "� ������ 31 ����" << endl;
		break;
	}
	case 9: {
		cout << "� ������ 30 ����" << endl;
		break;
	}
	case 10: {
		cout << "� ������ 31 ����" << endl;
		break;
	}
	case 11: {
		cout << "� ������ 30 ����" << endl;
		break;
	}
	case 12: {
		cout << "� ������ 31 ����" << endl;
		break;
	}
	default: {
		cout << "������" << endl;
	}
	}
}
void mission_5(int N, int a, int c) {
	setlocale(LC_ALL, "");
	switch (N) {
	case 1: {
		cout << a + c;
		break;
	}
	case 2: {
		cout << a - c;
		break;
	}
	case 3: {
		cout << a * c;
		break;
	}
	case 4: {
		cout << a / c;
		break;
	}
	default: {
		cout << "������" << endl;
	}
	}
}
void mission_6(int N, double a) {
	setlocale(LC_ALL, "");
	switch (N) {
	case 1:
		cout << a / 10 << endl;
		break;
	case 2:
		cout << a * 1000 << endl;
		break;
	case 3:
		cout << a << endl;
		break;
	case 4:
		cout << a / 1000 << endl;
		break;
	case 5:
		cout << a / 100 << endl;
		break;
	default:
		cout << "������" << endl;
	}
}
void mission_7(int N, double m) {
	setlocale(LC_ALL, "");
	switch (N) {
	case 1:
		cout << m << endl;
		break;
	case 2:
		cout << m / 1000000 << endl;
		break;
	case 3:
		cout << m / 1000 << endl;
		break;
	case 4:
		cout << m * 1000 << endl;
		break;
	case 5:
		cout << m * 100 << endl;
		break;
	default:
		cout << "������" << endl;
	}
}
void mission_8(int M) {
	setlocale(LC_ALL, "");
	int D = 0;
	switch (M)
	{
	case 1: 
		D = 31;
		cout << D << endl;
	case 2:
		D = 28;
		cout << D << endl;
	case 3: 
		D = 31;
		cout << D << endl;
	case 5: 
		D = 31;
		cout << D << endl;
	case 7: 
		D = 31;
		cout << D << endl;
	case 8: 
		D = 31;
		cout << D << endl;
	case 10: 
		D = 31;
		cout << D << endl;
	case 12: 
		D = 31;
		cout << D << endl;
	case 4: 
		D = 30;
		cout << D << endl;
	case 6: 
		D = 30;
		cout << D << endl;
	case 9: 
		D = 30;
		cout << D << endl;
	case 11: 
		D = 30;
		cout << D << endl;
	default:
		cout << "������" << endl;
	}
}
void mission_9(int M) {
	setlocale(LC_ALL, "");
	int D = 0;
	switch (M)
	{
	case 1:
		D = 31;
		cout << D << endl;
	case 2:
		D = 28;
		cout << D << endl;
	case 3:
		D = 31;
		cout << D << endl;
	case 5:
		D = 31;
		cout << D << endl;
	case 7:
		D = 31;
		cout << D << endl;
	case 8:
		D = 31;
		cout << D << endl;
	case 10:
		D = 31;
		cout << D << endl;
	case 12:
		D = 31;
		cout << D << endl;
	case 4:
		D = 30;
		cout << D << endl;
	case 6:
		D = 30;
		cout << D << endl;
	case 9:
		D = 30;
		cout << D << endl;
	case 11:
		D = 30;
		cout << D << endl;
	default:
		cout << "������" << endl;
	}
}
void mission_10(char c, int n) {
	setlocale(LC_ALL, "");
	switch (c) {
	case '�':
		switch (n) {
		case 1:
			c = '�';
			break;
		case 0:
			c = '�';
			break;
		case -1:
			c = '�';
			break;
		}
		break;
	case '�':
		switch (n) {
		case 1:
			c = '�';
			break;
		case 0:
			c = '�';
			break;
		case -1:
			c = '�';
			break;
		}
	case '�':
		switch (n) {
		case 1:
			c = '�';
			break;
		case 0:
			c = '�';
			break;
		case -1:
			c = '�';
			break;
		}
		break;
	case '�':
		switch (n) {
		case 1:
			c = '�';
			break;
		case 0:
			c = '�';
			break;
		case -1:
			c = '�';
			break;
		}
	}
	cout << c;
}
void mission_11(int c, int n1, int n2, int nc, int c1) {
	setlocale(LC_ALL, "");
	switch (nc) {
	case 1: {
		switch (c) {
		case 1: {
			c = 2;
			break; 
		}
		case 2: {
			c = 3;
			break; 
		}
		case 3: {
			c = 4;
			break; 
		}
		case 4: {
			c = 1;
			break; 
		}
		}
		break;
	}

	case 2:
	case -2: {
		switch (c) {
		case 1: {
			c = 3;
			break; 
		}
		case 2: {
			c = 4;
			break; 
		}
		case 3: {
			c = 1;
			break; 
		}
		case 4: {
			c = 2;
			break;
		}
		}
		break;
	}

	case -1:
	case 3: {
		switch (c) {
		case 1: {
			c = 4;
			break; 
		}
		case 2: {
			c = 1;
			break; 
		}
		case 3: {
			c = 2;
			break; 
		}
		case 4: {
			c = 3;
			break; 
		}
		}
		break;
	}

	case 0:
	case 4: {
		switch (c) {
		case 1: {
			c = 1;
			break; 
		}
		case 2: {
			c = 2;
			break; 
		}
		case 3: {
			c = 3;
			break; 
		}
		case 4: {
			c = 3;
			break; }
		}
		break;
	}
	}

	switch (c) {
	case 1: {
		cout << "������� �����������: " << "�����" << "!!!" << endl;
		break;
	}
	case 2: {
		cout << "������� �����������: " << "�����" << "!!!" << endl;
		break;
	}
	case 3: {
		cout << "������� �����������: " << "��" << "!!!" << endl;
		break;
	}
	case 4: {
		cout << "������� �����������: " << "������" << "!!!" << endl;
		break;
	}
	}
}
void mission_12() {
	setlocale(LC_ALL, "");
	double a, r1, r2, s;
	int number = 0;
	unsigned char el = 0;
	double x = 0.0;

	switch (number)
	{
	case 1: 
		el = 'a'; 
		break;
	case 2: 
		el = 'r'; 
		break;
	case 3: 
		el = 'R'; 
		break;
	case 4: 
		el = 's'; 
		break;
	}
	cout << "���� ������� � " << el << endl;
	cout << "�������� �������� " << x << endl;

	switch (el)
	{
	case 'a':
		a = x;
		r1 = (a * sqrt(3)) / 6;
		r2 = 2 * r1;
		s = (pow(a, 2) * sqrt(3)) / 4;
		cout << "a = " << a << endl;
		cout << "r1 = " << r1 << endl;
		cout << "r2 = " << r2 << endl;
		cout << "s = " << s << endl;
		break;
	case 'r':
		a = x * 6 / sqrt(3);
		r1 = a * sqrt(3) / 6;
		r2 = 2 * r1;
		s = (pow(a, 2) * sqrt(3)) / 4;
		cout << "a = " << a << endl;
		cout << "r1 = " << r1 << endl;
		cout << "r2 = " << r2 << endl;
		cout << "s = " << s << endl;
		break;
	case 'R':
		a = x * 6 / 2 / sqrt(3);
		r1 = a * sqrt(3) / 6;
		r2 = 2 * r1;
		s = (pow(a, 2) * sqrt(3)) / 4;
		cout << "a = " << a << endl;
		cout << "r1 = " << r1 << endl;
		cout << "r2 = " << r2 << endl;
		cout << "s = " << s << endl;
		break;
	case 's':
		a = sqrt(x * 4 / sqrt(3));
		r1 = (a * sqrt(3)) / 6;
		r2 = 2 * r1;
		s = (pow(a, 2) * sqrt(3)) / 4;
		cout << "a = " << a << endl;
		cout << "r1 = " << r1 << endl;
		cout << "r2 = " << r2 << endl;
		cout << "s = " << s << endl;
		break;
	}
}
void mission_13(int p, double x, double a, double c, double h, double s) {
	setlocale(LC_ALL, "");
	switch (p) {
	case 1:
		a = x;
		c = a * sqrt(2);
		h = c / 2;
		s = c * h / 2;
		cout << c << h << s;
		break;
	case 2:
		c = x;
		a = c / sqrt(2);
		h = c / 2;
		s = c * h / 2;
		cout << a << h << s;
		break;
	case 3:
		h = x;
		c = 2 * h;
		a = c / sqrt(2);
		s = c * h / 2;
		cout << a << c << s;
		break;
	case 4:
		s = x;
		h = sqrt(s);
		c = 2 * h;
		a = c / sqrt(2);
		cout << a << c << h;
		break;
	}
}
void mission_14(int p, double x, double a, double r1, double r2, double s) {
	setlocale(LC_ALL, "");
	switch (p) {
	case 1:
		a = x;
		r1 = a * sqrt(3) / 6;
		r2 = 2 * r1;
		s = a * a * sqrt(3) / 4;
		cout << r1 << endl << r2 << endl << s;
		break;
	case 2:
		r1 = x;
		a = r1 * 6 / sqrt(3);
		r2 = 2 * r1;
		s = a * a * sqrt(3) / 4;
		cout << a << endl << r2 << endl << s;
		break;
	case 3:
		r2 = x;
		r1 = r2 / 2;
		a = r1 * 6 / sqrt(3);
		s = a * a * sqrt(3) / 4;
		cout << a << endl << r1 << endl << s;
		break;
	case 4:
		s = x;
		a = sqrt(s * 4 / sqrt(3));
		r1 = a * sqrt(3) / 6;
		r2 = 2 * r1;
		cout << a << endl << r1 << endl << r2;
		break;
	}
}
void mission_15(int n, int m) {
	setlocale(LC_ALL, "");
	switch (n) {
	case 6:
		cout << "�������" << endl;
		break;
	case 7:
		cout << "������" << endl;
		break;
	case 8:
		cout << "��������" << endl;
		break;
	case 9:
		cout << "�������" << endl;
		break;
	case 10:
		cout << "�������" << endl;
		break;
	case 11:
		cout << "�����" << endl;
		break;
	case 12:
		cout << "����" << endl;
		break;
	case 13:
		cout << "������" << endl;
		break;
	case 14:
		cout << "���" << endl;
		break;
	}
	switch (m) {
	case 1:
		cout << "���" << endl;
		break;
	case 2:
		cout << "����" << endl;
		break;
	case 3:
		cout << "�����" << endl;
		break;
	case 4:
		cout << "������" << endl;
		break;
	}
}
void mission_16(int y) {
	setlocale(LC_ALL, "");
	switch (y / 10) {
	case 1:
		cout << "������ ";
		break;
	case 2:
		cout << "�������� ";
		break;
	case 3:
		cout << "�������� ";
		break;
	case 4:
		cout << "����� ";
		break;
	case 5:
		cout << "�������� ";
		break;
	case 6:
		cout << "���������� ";
		break;
	}
	switch (y % 10) {
	case 1:
		cout << "���� ";
		break;
	case 2:
		cout << "��� ";
		break;
	case 3:
		cout << "��� ";
		break;
	case 4:
		cout << "������ ";
		break;
	case 5:
		cout << "���� ";
		break;
	case 6:
		cout << "����� ";
		break;
	case 7:
		cout << "���� ";
		break;
	case 8:
		cout << "������ ";
		break;
	case 9:
		cout << "������ ";
		break;
	}
}
void mission_17(int p) {
	setlocale(LC_ALL, "");
	switch (p)
	{
	case 10:
		cout << "������ ������� �������" << endl;
		break;
	case 11:
		cout << "����������� ������� �������" << endl;
		break;
	case 12:
		cout << "���������� ������� �������" << endl;
		break;
	case 13:
		cout << "���������� ������� �������" << endl;
		break;
	case 14:
		cout << "������������ ������� �������" << endl;
		break;
	case 15:
		cout << "���������� ������� �������" << endl;
		break;
	case 16:
		cout << "����������� ������� �������" << endl;
		break;
	case 17:
		cout << "���������� ������� �������" << endl;
		break;
	case 18:
		cout << "������������ ������� �������" << endl;
		break;
	case 19:
		cout << "������������ ������� �������" << endl;
		break;
	case 20:
		cout << "�������� ������� �������" << endl;
		break;
	case 21:
		cout << "�������� ���� ������� �������" << endl;
		break;
	case 22:
		cout << "�������� ��� ������� �������" << endl;
		break;
	case 23:
		cout << "�������� ��� ������� �������" << endl;
		break;
	case 24:
		cout << "�������� ������ ������� �������" << endl;
		break;
	case 25:
		cout << "�������� ���� ������� �������" << endl;
		break;
	case 26:
		cout << "�������� ����� ������� �������" << endl;
		break;
	case 27:
		cout << "�������� ���� ������� �������" << endl;
		break;
	case 28:
		cout << "�������� ������ ������� �������" << endl;
		break;
	case 29:
		cout << "�������� ������ ������� �������" << endl;
		break;
	case 30:
		cout << "�������� ������� �������" << endl;
		break;
	default:
		switch (p % 10)
		{
		case 1:
			cout << "���� ������� �������" << endl;
			break;
		case 2:
			cout << "��� ������� �������" << endl;
			break;
		case 3:
			cout << "��� ������� �������" << endl;
			break;
		case 4:
			cout << "������ ������� �������" << endl;
			break;
		case 5:
			cout << "���� ������� �������" << endl;
			break;
		case 6:
			cout << "����� ������� �������" << endl;
			break;
		case 7:
			cout << "���� ������� �������" << endl;
			break;
		case 8:
			cout << "������ ������� �������" << endl;
			break;
		case 9:
			cout << "������ ������� �������" << endl;
			break;
		case 0:
			cout << "���� ������� �������" << endl;
			break;
		}
	}
}
void mission_18(int p) {
	setlocale(LC_ALL, "");
	switch (p / 100) {
	case 1:
		cout << "��� ";
		break;
	case 2:
		cout << "������ ";
		break;
	case 3:
		cout << "������ ";
		break;
	case 4:
		cout << "��������� ";
		break;
	case 5:
		cout << "������� ";
		break;
	case 6:
		cout << "�������� ";
		break;
	case 7:
		cout << "������� ";
		break;
	case 8:
		cout << "���������  ";
		break;
	case 9:
		cout << "���������  ";
		break;
	}
	if ((p % 100) / 10 == 1)
		switch (p % 100) {
		case 10:
			cout << "������";
			break;
		case 11:
			cout << "����������";
			break;
		case 12:
			cout << "����������";
			break;
		case 13:
			cout << "����������";
			break;
		case 14:
			cout << "������������";
			break;
		case 15:
			cout << "����������";
			break;
		case 16:
			cout << "�����������";
			break;
		case 17:
			cout << "����������";
			break;
		case 18:
			cout << "������������";
			break;
		case 19:
			cout << "������������";
			break;
		}
	else {
		switch ((p % 100) / 10) {
		case 2:
			cout << "�������� ";
			break;
		case 3:
			cout << "�������� ";
			break;
		case 4:
			cout << "����� ";
			break;
		case 5:
			cout << "��������� ";
			break;
		case 6:
			cout << "���������� ";
			break;
		case 7:
			cout << "��������� ";
			break;
		case 8:
			cout << "����������� ";
			break;
		case 9:
			cout << "��������� ";
			break;
		}
		switch (p % 10) {
		case 1:
			cout << "����";
			break;
		case 2:
			cout << "���";
			break;
		case 3:
			cout << "���";
			break;
		case 4:
			cout << "������";
			break;
		case 5:
			cout << "����";
			break;
		case 6:
			cout << "�����";
			break;
		case 7:
			cout << "����";
			break;
		case 8:
			cout << "������";
			break;
		case 9:
			cout << "������";
			break;
		}
	}
}
void mission_19(int p) {
	setlocale(LC_ALL, "");
	switch ((p) % 10) {
	case 1:
		cout << "���";
		break;
	case 3:
		cout << "����";
		break;
	case 5:
		cout << "����";
		break;
	case 7:
		cout << "�����";
		break;
	case 9:
		cout << "���";
		break;
	}
	switch ((p + 1) % 5) {
	case 11:
		cout << "�� ";
		break;
	case 8:
		cout << "��� ";
		break;
	}
	switch ((p + 8) % 12) {
	case 0:
		cout << "�����";
		break;
	case 1:
		cout << "������";
		break;
	case 2:
		cout << "�����";
		break;
	case 3:
		cout << "�����";
		break;
	case 4:
		cout << "�������";
		break;
	case 5:
		cout << "����";
		break;
	case 6:
		cout << "������";
		break;
	case 7:
		cout << "����";
		break;
	case 8:
		cout << "��������";
		break;
	case 9:
		cout << "������";
		break;
	case 10:
		cout << "������";
		break;
	case 11:
		cout << "������";
		break;
	}
}
void mission_20(int m, int d) {
	setlocale(LC_ALL, "");
	switch (m) {
	case 1:
		if (d > 19) {
			cout << "�������";
		}
		else {
			cout << "�������";
		}
		break;
	case 2:
		if (d > 18) {
			cout << "����";
		}
		else {
			cout << "�������";
		}
		break;
	case 3:
		if (d > 20) {
			cout << "����";
		}
		else {
			cout << "����";
		}
		break;
	case 4:
		if (d > 19) {
			cout << "�����";
		}
		else {
			cout << "����";
		}
		break;
	case 5:
		if (d > 20) {
			cout << "��������";
		}
		else {
			cout << "�����";
		}
		break;
	case 6:
		if (d > 21) {
			cout << "���";
		}
		else {
			cout << "��������";
		}
		break;
	case 7:
		if (d > 22) {
			cout << "���";
		}
		else {
			cout << "���";
		}
		break;
	case 8:
		if (d > 22) {
			cout << "����";
		}
		else {
			cout << "���";
		}
		break;
	case 9:
		if (d > 22) {
			cout << "����";
		}
		else {
			cout << "����";
		}
		break;
	case 10:
		if (d > 22) {
			cout << "��������";
		}
		else {
			cout << "����";
		}
		break;
	case 11:
		if (d > 22) {
			cout << "�������";
		}
		else {
			cout << "��������";
		}
		break;
	case 12:
		if (d > 21){
			cout << "�������";
		}
		else {
			cout << "�������";
		}
		break;
	}
}