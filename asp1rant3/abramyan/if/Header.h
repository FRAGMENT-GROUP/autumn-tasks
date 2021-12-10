#include <iostream>	
#include <cmath>
using namespace std;

void mision_1(int a) {
	if (a > 0) {
		a++;
	}
	cout << a << endl;
}
void mission_2(int a) {
	if (a > 0) {
		a++;
	}
	else {
		a -= 2;
	}
	cout << a << endl;
}
void mission_3(int a) {
	if (a > 0) {
		a++;
	}
	else if (a == 0) {
		a = 10;
	}
	else {
		a -= 2;
	}
	cout << a << endl;
}
void mission_4(int a, int b, int c) {
	int count = 0;
	if (a > 0) {
		count++;
	}
	if (b > 0) {
		count++;
	}
	if (c > 0) {
		count++;
	}
	cout << count << endl;
}
void mission_5(int a, int b, int c) {
	int countP = 0;
	int countN = 0;
	if (a > 0) {
		countP++;
	}
	else if (a < 0) {
		countN++;
	}
	if (b > 0) {
		countP++;
	}
	else if (b < 0) {
		countN++;
	}
	if (c > 0) {
		countP++;
	}
	else if (c < 0) {
		countN++;
	}
	cout << countP << '\n' << countN << endl;
}
void mission_6(int a, int b) {
	if (a > b) {
		cout << a << endl;
	}
	else {
		cout << b << endl;
	}
}
void mission_7(int a, int b) {
	if (a > b) {
		cout << "1" << endl;
	}
	else if (a == b) {
		cout << "a = b" << endl;
	}
	else {
		cout << "2" << endl;
	}
}
void mission_8(int a, int b) {
	if (a > b) {
		cout << a << '\n' << b << endl;
	}
	else{
		cout << b << '\n' << a << endl;
	}
}
void mission_9(double a, double b) {
	int x = 0;
	if (a > b || b < a) {
		x = b;
		b = a;
		a = x;
	}
	cout << a << '\n' << b << endl;
}
void mission_10(int a, int b) {
	if (a != b) {
		a = a + b;
		b = a;
		cout << "a:" << a << ' ' << "b:" << b;
	}
	else {
		a = b = 0;
		cout << a << '\n' << b;
	}
}
void mission_11(int a, int b, int c) {
	if (a != b) {
		if (a > b) {
			c = a + b;
			a = c - b;
			b = c - b;
		}
		else {
			c = a + b;
			b = c - a;
			a = c - a;
		}
		cout << a << '\n' << b << endl;
	}
	else {
		a = b = 0;
		cout << a << '\n' << b << endl;
	}
}
void mission_12(int a, int b, int c) {
	if (a < b && a < c) {
		cout << a;
	}
	else if (b < a && b < c) {
		cout << b;
	}
	else if (c < b && c < a) {
		cout << c;
	}
}
void mission_13(int a, int b, int c) {
	if ((b <= a) && (a <= c) || (b >= a) && (a >= c)) {
		cout << a << endl;
	}
	else {
		if ((a <= b) && (b <= c) || (a >= b) && (b >= c)) {
			cout << b << endl;
		}
		else {
			cout << c << endl;
		}
	}
}
void mission_14(int a, int b, int c) {
	double Min = 0, Max = 0;
	if (a >= b && a >= c) {
		Max = a;
	}
	else if (b >= a && b >= c) {
		Max = b;
	}
	else {
		Max = c;
	}
	if (a <= b && a <= c) {
		Min = a;
	}
	else if (b <= a && b <= c) {
		Min = b;
	}
	else {
		Min = c;
	}
	cout << Max << '\n' << Min << endl;
}
void mission_15(int a, int b, int c) {
	int sum = 0;
	if (a < b && a < c) {
		sum = b + c;
		cout << sum << endl;
	}
	else if (b < a && b < c) {
		sum = c + a;
		cout << sum << endl;
	}
	else if (c < a && c < b) {
		sum = a + b;
		cout << sum << endl;
	}
}
void mission_16(double a, double b, double c) {
	if ((a <= b) && (b <= c)) {
		a = a * 2;
		b = b * 2;
		c = c * 2;
		cout << a << '\n' << b << '\n' << c;
	}
	else {
		a = a * (-1);
		b = b * (-1);
		c = c * (-1);
		cout << a << '\n' << b << '\n' << c;
	}
}
void mission_17(double a, double b, double c) {
	if ((a <= b) && (b <= c) || (a >= b) && (b >= c)) {
		a = a * 2;
		b = b * 2;
		c = c * 2;
		cout << a << '\n' << b << '\n' << c;
	}
	else {
		a = a * (-1);
		b = b * (-1);
		c = c * (-1);
		cout << a << '\n' << b << '\n' << c;
	}
}
void mission_18(int a, int b, int c, int d) {
	if (a == b) {
		cout << "3" << endl;
	}
	else if (a == c) {
		cout << "2" << endl;
	}
	else {
		cout << "1" << endl;
	}
}
void mission_19(int a, int b, int c, int d) {
	int number = 0;
	if (a == b && b == c) {
		number = 4;
	}
	else if (a == b && a == d) {
		number = 3;
	}
	else if (a == c && a == d) {
		number = 2;
	}
	else if (b == c && b == d) {
		number = 1;
	}
	cout << number << endl;
}
void mission_20(int a, int b,int c) {
	if ((c - a) < (b - a)) {
		cout << (abs(c - a));
	}
	else {
		cout << (abs(b - a));
	}
}
void mission_21(int a, int b, int c) {
	if (a == 0 && b == 0)
	{
		cout << "0" << endl;
	}
	else if (a == 0 && b != 0)
	{
		cout << "1" << endl;
	}
	else if (a != 0 && b == 0)
	{
		cout << "2" << endl;
	}
	else
	{
		cout << "3" << endl;
	}
}
void mission_22(int a, int b) {
	if (a > 0 && b > 0) {
		cout << "Первая";
	}
	else if (a < 0 && b > 0) {
		cout << "Вторая";
	}
	else if (a < 0 && b < 0) {
		cout << "Третья";
	}
	else
		cout << "Четвертая";
}
void mission_23(int a1, int b1, int a2,int b2, int a3,int b3) {
	if (a2 == a3) {
		cout << a1 << endl;
	}
	else {
		if (a3 == a1) {
			cout << a2 << endl;
		}
		else {
			cout << a3 << endl;
		}
	}

	if (b2 == b3) {
		cout << b1;
	}
	else{
		if (b3 == b1) {
			cout << b2;
		}
		else {
			cout << b3;
		}
	}
}
void mission_24(double x) {
	double f = 0;
	if (x > 0) {
		f = 2 * sin(x);
	}
	else if(x <= 0) {
		f = 6 - x;
	}
	cout << f << endl;
}
void mission_25(double x) {
	double f = 0;
	if ((x > 2) || (x < -2)) {
		f = 2 * x;
	}
	else {
		f = -3 * x;
	}
	cout << f << endl;
}
void mission_26(double x) {
	if (x <= 0) {
		cout << (-1) * x << endl;
	}
	else if (0 < x && x < 2) {
		cout << x * x << endl;
	}
	else if (x >= 2) {
		x = 4;
		cout << x << endl;
	}
}
void mission_27(int x) {
	double f = 0;
	if (x < 0) {
		f = 0;
	}
	else {
		if ((int(x) % 2) == 0) {
			f = 1;
		}
		else {
			f = -1;
		}
	}
	cout << f << endl;
}
void mission_28(int year) {
	if (year % 400 == 0) {
		if (year % 4 == 0) {
			if (year % 100 != 0) {
				cout << "366 дней" << endl;
			}
		}
		else { 
			cout << "365 дней" << endl;
		}
	}
}
void mission_29(int x) {
	if (x == 0) {
		cout << "нулевое число" << endl;
	}
	else {
		cout << "отрицательное" << endl;
	}
	if (x % 2 == 0) {
		cout << "чётное" << endl;
	}
	else {
		cout << "нечётное" << endl;
	}
}
void mission_30(int a) {
	if (a % 2 == 0) {
		cout << "чётное" << endl;
	}
	else if (a % 2 != 0) {
		cout << "не чётное" << endl;
	}
	else if (a / 100 > 0 && a / 100 < 10) {
		cout << "трехзначное " << endl;
	}
	else if (a / 10 > 0 && a / 10 < 10) {
		cout << "двухзначное " << endl;
	}
	else if (a / 10 == 0) {
		cout << "однозначное " << endl;
	}
}
