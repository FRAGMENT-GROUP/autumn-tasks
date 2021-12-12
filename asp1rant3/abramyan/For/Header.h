#include <iostream>
#include <cmath>
using namespace std;

void mission_1(int k, int n) {
	setlocale(LC_ALL, "");
	for (int i = 0; i < n; i++){
		cout << k << endl;
	}
}
void mission_2(int a, int b) {
	setlocale(LC_ALL, "");
	for (int i = a; i <= b; i++) {
		cout << b - a + 1 << endl;
	}
}
void mission_3(int a, int b) {
	setlocale(LC_ALL, "");{
	for (int i = b - 1; i > a; i--)
		cout << b - a - 1;
	}
}
void mission_4(double c) {
	setlocale(LC_ALL, "");
	for (int i = 1; i <= 10; i++) {
		cout << i << c * i << endl;
	}
}
void mission_5(double c) {
	setlocale(LC_ALL, "");
	for (double m = 0.1; m < 1.1; m += 0.1) {
		cout << c * m << endl;
	}
}
void mission_6(double c) {
	setlocale(LC_ALL, "");
	for (double m = 1.2; m < 2.1; m += 0.1) {
		cout << c * m << endl;
	}
}
void mission_7(int a, int b) {
	setlocale(LC_ALL, "");
	int sum = 0;
	for (int i = a; i <= b; i++) {
		sum += i;
	}
	cout << sum << endl;
}
void mission_8(int a, int b) {
	setlocale(LC_ALL, "");
	double c = 1;
	for (int i = a; i <= b; i++) {
		c *= i;
	}
}
void mission_9(int a, int b) {
	setlocale(LC_ALL, "");
	double result = 0;
	for (int i = a; i <= b; ++i)
		result += i * i;
	cout << result << endl;
}
void mission_10(int n) {
	setlocale(LC_ALL, "");
	double sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += static_cast<double>(1) / i;
	}
	cout << sum << endl;
}
void mission_11(int n) {
	setlocale(LC_ALL, "");
	double result = 0;
	for (int i = 0; i <= n; i++)
		result += pow(n + i, 2);

	cout << result << endl;
}
void mission_12(int n) {
	setlocale(LC_ALL, "");
	double result = 1;
	for (int i = 1; i <= n; i++) {
		result *= (1 + 0.1 * i);
	}
	cout << result << endl;
}
void mission_13(int n) {
	setlocale(LC_ALL, "");
	double result = 1;
	for (int i = 1; i <= n; i++)
		result += pow(-1, i + 1) * (1.0 + i / static_cast<double>(10));
	cout << result << endl;
}
void mission_14(int n) {
	setlocale(LC_ALL, "");
	int result = 1;
	for (int i = 1; i <= (2 * n - 1); i += 2) {
		result += i;
		cout << result << endl;
	}
}
void mission_15(double a, int n) {
	setlocale(LC_ALL, "");
	double result = 1;
	for (int i = 1; i <= n; i++) {
		result *= a;
	}
	cout << result << endl;
}
void mission_16(double a, int n) {
	setlocale(LC_ALL, "");
	double result = 1;
	for (int i = 1; i <= n; i++) {
		result *= a;
		cout << result << endl;
	}
}
void mission_17(double a, int n) {
	setlocale(LC_ALL, "");
	double a2 = 1, result = 1;
	for (int i = 2; i <= n; i++)
	{
		a2 *= a;
		result += a2;
	}
	cout << result << endl;
}
void mission_18(double a, int n) {
	setlocale(LC_ALL, "");
	double a2 = 1, result = 1;
	for (int i = 2; i <= n; i++)
	{
		a2 *= -a;
		result += a2;
	}
	cout << result << endl;
}
void mission_19(int n) {
	setlocale(LC_ALL, "");
	float result = 1;
	for (int i = 1; i <= n; i++) {
		result *= i;
	}
	cout << result << endl;
}
void mission_20(int n) {
	setlocale(LC_ALL, "");
	double n1 = 1, result = 1;
	for (int i = 1; i <= n; i++) {
		n1 *= i;
		result += n1;
	}
	cout << result << endl;
}
void mission_21(int n) {
	setlocale(LC_ALL, "");
	double n1 = 1, result = 1;
	for (int i = 1; i <= n; i++) {
		n1 *= i;
		result += 1 / n1;
	}
	cout << result << endl;
}
void mission_22(double x, int n) {
	setlocale(LC_ALL, "");
	double x1 = 1, n1 = 1, result = 1;
	for (int i = 1; i <= n; i++) {
		n1 *= i;
		x1 *= x;
		result += x1 / n1;
	}
	cout << result << endl;
}
void mission_23(double x, int n) {
	setlocale(LC_ALL, "");
	double x1 = x, result = x;
	for (int i = 1; i < n; i++) {
		x1 *= -1 * x * x;
		result += x1;
	}
	cout << result << endl;
}
void mission_24(double x, int n) {
	setlocale(LC_ALL, "");
	double x1 = 1, n1 = 1, result = 1;
	for (int i = 2, int k = 0; i <= n; i++) {
		k++;
		n1 *= k;
		k++;
		n1 *= k;
		x1 *= -1 * x * x;
		result += x1 / n1;
	}
	cout << result << endl;
}
void mission_25(double x, int n) {
	setlocale(LC_ALL, "");
	double x1 = x, result = x;
	for (int i = 2; i <= n; i++) {
		x1 *= -1 * x;
		result += x1 / i;
	}
	cout << result << endl;
}
void mission_26(double x, int n) {
	setlocale(LC_ALL, "");
	double x1 = x, result = x;
	for (int i = 2, int k = 1; i <= n; i++) {
		k += 2;
		x1 *= -1 * x * x;
		result += x1 / k;
	}
	cout << result << endl;
}
void mission_27(double x, int n) {
	setlocale(LC_ALL, "");
	double z = 1, h = x, vopros = x, stepen = 1;
	for (int i = 1; i <= n; i++) {
		h = h * x * x;             
		stepen = stepen * (2 * i - 1); 
		z = z * (i * 2 + 1) * (i * 2);
		vopros += (stepen * h) / z;
		z = z / (i * 2 + 1);
	}
	cout << vopros << endl;
	double asinus = 1;
	asinus = asin(x);
	cout << asinus << endl;
}
void mission_28(double x, int n) {
	setlocale(LC_ALL, "");
	double pribl1 = 1, pribl2 = 1, result = 1, kv = 1;
	for (int i = 1; i < n; i++) {
		pribl1 *= 2 * i - 3;
		pribl2 *= 2 * i;
		kv *= (-1) * x;
		result += pribl1 * kv / pribl2;
	}
	cout << result << endl;
}
void mission_29(int n, double a, double b) {
	setlocale(LC_ALL, "");
	double h = (b - a) / n;
	cout << h << endl;
	for (int i = 0; i <= n; i++) {
		cout << a + i * h << endl;
	}
}
void mission_30(int n, double a, double b) {
	setlocale(LC_ALL, "");
	double h = (b - a) / n;
	cout << h << endl;
	for (int i = 0; i <= n; i++) {
		cout << 1 - sin(a + i * h) << endl;
	}
}
void mission_31(int n) {
	setlocale(LC_ALL, "");
	double A = 2;
	for (int i = 1; i <= n; i++) {
		A = 2 + 1 / A;
		cout << A << endl;
	}
}
void mission_32(int n) {
	setlocale(LC_ALL, "");
	double A = 1;
	for (int i = 1; i <= n; i++) {
		cout << i << "\t" << (A + 1) / i << endl;
		A = (A + 1) / i;
	}
}
void mission_33(int n) {
	setlocale(LC_ALL, "");
	int A = 0, A1 = 1, A2 = 1;
	for (int i = 3; i <= n; i++) {
		A = A1 + A2;
		A1 = A2;
		A2 = A;
		cout << A << endl;
	}
	cout << endl;
}
void mission_34(int n) {
	setlocale(LC_ALL, "");
	double A, A1 = 1, A2 = 2;
	for (int i = 3; i <= n; ++i) {
		A = (A1 + 2 * A2) / 3;
		cout << i << "\t" << A << endl;
		A1 = A2;
		A2 = A;
	}
}
void mission_35(int n) {
	setlocale(LC_ALL, "");
	double A = 0, A1 = 1, A2 = 2, A3 = 3;
	for (int i = 4; i <= n; ++i) {
		A = A3 + A2 - 2 * A1;
		cout << i << "\T" << A << endl;
		A1 = A2;
		A2 = A3;
		A3 = A;
	}
}
void mission_36(int n, int k) {
	setlocale(LC_ALL, "");
	double result = 0, NK = 0;
	for (int i = 1; i <= n; i++) {	
		NK = i;
		for (int j = 1; j <= k; j++) {
			NK *= i;
			result += NK;
		}
	}
	cout << result << endl;
}
void mission_37(int n) {
	setlocale(LC_ALL, "");
	double result = 0, NI = 0;
	for (int i = 1; i <= n; i++) {
		NI = i;
		for (int j = 1; j <= i; j++) {
			NI *= i;
			result += NI;
		}
	}
	cout << result << endl;
}
void mission_38(int n) {
	setlocale(LC_ALL, "");
	float result = 0, NI = 0;
	for (int i = 1; i <= n; i++) {
		NI = i;
		for (int j = 1; j <= n - i; j++) {
			NI *= i;
			result += NI;
		}
	}
	cout << result << endl;
}
void mission_39(int a, int b) {
	setlocale(LC_ALL, "");
	for (int i = a; i <= b; i++) {
		for (int j = 1; j <= i; j++) {
			cout << i << '\t';
		}
		cout << endl;
	}
}
void mission_40(int a, int b) {
	setlocale(LC_ALL, "");
	for (int i = 1; i <= b - a + 1; i++) {
		for (int j = 1; j <= i; j++) {
			cout << a + i - 1 << '\t';
		}
		cout << endl;
	}
}