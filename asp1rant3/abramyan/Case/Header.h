#include <iostream>
#include <cmath>
using namespace std;

void mission_1(int p) {
	setlocale(LC_ALL, "");
	switch (p) {
	case 1: {
		cout << "Понедельник" << endl;
		break;
	}
	case 2: {
		cout << "Вторник" << endl;
		break;
	}
	case 3: {
		cout << "Среда" << endl;
		break;
	}
	case 4: {
		cout << "Четверг" << endl;
		break;
	}
	case 5: {
		cout << "Пятница" << endl;
		break;
	}
	case 6: {
		cout << "Суббота" << endl;
		break;
	}
	case 7: {
		cout << "Воскресенье" << endl;
		break;
	}
	default: {
		cout << "Такого дня недели не существует." << endl;
	}
	}
}
void mission_2(int p) {
	setlocale(LC_ALL, "");
	switch (p)
	{
	case 1: {
		cout << "плохо" << endl;
		break;
	}
	case 2: {
		cout << "неудовлетворительно" << endl;
		break;
	}
	case 3: {
		cout << "удовлетворительно" << endl;
		break;
	}
	case 4: {
		cout << "хорошо" << endl;
		break;
	}
	case 5: {
		cout << "отлично" << endl;
		break;
	}
	default: {
		cout << "ошибка" << endl;
	}
	}
}
void mission_3(int p) {
	setlocale(LC_ALL, "");
	switch (p) {
	case 1: {
		cout << "Зима" << endl;
		break;
	}
	case 2: {
		cout << "Зима" << endl;
		break;
	}
	case 3: {
		cout << "Весна" << endl;
		break;
	}
	case 4: {
		cout << "Весна" << endl;
		break;
	}
	case 5: {
		cout << "Весна" << endl;
		break;
	}
	case 6: {
		cout << "Лето" << endl;
		break;
	}
	case 7: {
		cout << "Лето" << endl;
		break;
	}
	case 8: {
		cout << "Лето" << endl;
		break;
	}
	case 9: {
		cout << "Осень" << endl;
		break;
	}
	case 10: {
		cout << "Осень" << endl;
		break;
	}
	case 11: {
		cout << "Осень" << endl;
		break;
	}
	case 12: {
		cout << "Зима" << endl;
		break;
	}
	default: {
		cout << "ошибка" << endl;
	}
	}
}
void mission_4(int p) {
	setlocale(LC_ALL, "");
	switch (p) {
	case 1: {
		cout << "В месяце 31 дней" << endl;
		break;
	}
	case 2: {
		cout << "В месяце 28 (29) дней" << endl;
		break;
	}
	case 3: {
		cout << "В месяце 31 дней" << endl;
		break;
	}
	case 4: {
		cout << "В месяце 30 дней" << endl;
		break;
	}
	case 5: {
		cout << "В месяце 31 дней" << endl;
		break;
	}
	case 6: {
		cout << "В месяце 30 дней" << endl;
		break;
	}
	case 7: {
		cout << "В месяце 31 дней" << endl;
		break;
	}
	case 8: {
		cout << "В месяце 31 дней" << endl;
		break;
	}
	case 9: {
		cout << "В месяце 30 дней" << endl;
		break;
	}
	case 10: {
		cout << "В месяце 31 дней" << endl;
		break;
	}
	case 11: {
		cout << "В месяце 30 дней" << endl;
		break;
	}
	case 12: {
		cout << "В месяце 31 дней" << endl;
		break;
	}
	default: {
		cout << "ошибка" << endl;
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
		cout << "ошибка" << endl;
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
		cout << "ошибка" << endl;
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
		cout << "ошибка" << endl;
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
		cout << "ошибка" << endl;
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
		cout << "ошибка" << endl;
	}
}
void mission_10(char c, int n) {
	setlocale(LC_ALL, "");
	switch (c) {
	case 'С':
		switch (n) {
		case 1:
			c = 'З';
			break;
		case 0:
			c = 'С';
			break;
		case -1:
			c = 'В';
			break;
		}
		break;
	case 'В':
		switch (n) {
		case 1:
			c = 'С';
			break;
		case 0:
			c = 'В';
			break;
		case -1:
			c = 'Ю';
			break;
		}
	case 'Ю':
		switch (n) {
		case 1:
			c = 'В';
			break;
		case 0:
			c = 'Ю';
			break;
		case -1:
			c = 'З';
			break;
		}
		break;
	case 'З':
		switch (n) {
		case 1:
			c = 'Ю';
			break;
		case 0:
			c = 'З';
			break;
		case -1:
			c = 'С';
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
		cout << "Текущее направление: " << "Север" << "!!!" << endl;
		break;
	}
	case 2: {
		cout << "Текущее направление: " << "Запад" << "!!!" << endl;
		break;
	}
	case 3: {
		cout << "Текущее направление: " << "Юг" << "!!!" << endl;
		break;
	}
	case 4: {
		cout << "Текущее направление: " << "Восток" << "!!!" << endl;
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
	cout << "Твой элемент — " << el << endl;
	cout << "Введённое значение " << x << endl;

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
		cout << "шестёрка" << endl;
		break;
	case 7:
		cout << "семёрка" << endl;
		break;
	case 8:
		cout << "восьмёрка" << endl;
		break;
	case 9:
		cout << "девятка" << endl;
		break;
	case 10:
		cout << "десятка" << endl;
		break;
	case 11:
		cout << "валет" << endl;
		break;
	case 12:
		cout << "дама" << endl;
		break;
	case 13:
		cout << "король" << endl;
		break;
	case 14:
		cout << "туз" << endl;
		break;
	}
	switch (m) {
	case 1:
		cout << "пик" << endl;
		break;
	case 2:
		cout << "треф" << endl;
		break;
	case 3:
		cout << "бубен" << endl;
		break;
	case 4:
		cout << "червей" << endl;
		break;
	}
}
void mission_16(int y) {
	setlocale(LC_ALL, "");
	switch (y / 10) {
	case 1:
		cout << "десять ";
		break;
	case 2:
		cout << "двадцать ";
		break;
	case 3:
		cout << "тридцать ";
		break;
	case 4:
		cout << "сорок ";
		break;
	case 5:
		cout << "пятдесят ";
		break;
	case 6:
		cout << "шестьдесят ";
		break;
	}
	switch (y % 10) {
	case 1:
		cout << "один ";
		break;
	case 2:
		cout << "два ";
		break;
	case 3:
		cout << "три ";
		break;
	case 4:
		cout << "четыре ";
		break;
	case 5:
		cout << "пять ";
		break;
	case 6:
		cout << "шесть ";
		break;
	case 7:
		cout << "семь ";
		break;
	case 8:
		cout << "восемь ";
		break;
	case 9:
		cout << "девять ";
		break;
	}
}
void mission_17(int p) {
	setlocale(LC_ALL, "");
	switch (p)
	{
	case 10:
		cout << "Десять учебных заданий" << endl;
		break;
	case 11:
		cout << "одиннадцать учебных заданий" << endl;
		break;
	case 12:
		cout << "двенадцать учебных заданий" << endl;
		break;
	case 13:
		cout << "тринадцать учебных заданий" << endl;
		break;
	case 14:
		cout << "четырнадцать учебных заданий" << endl;
		break;
	case 15:
		cout << "пятнадцать учебных заданий" << endl;
		break;
	case 16:
		cout << "шестнадцать учебных заданий" << endl;
		break;
	case 17:
		cout << "семнадцать учебных заданий" << endl;
		break;
	case 18:
		cout << "восемнадцать учебных заданий" << endl;
		break;
	case 19:
		cout << "девятнадцать учебных заданий" << endl;
		break;
	case 20:
		cout << "двадцать учебных заданий" << endl;
		break;
	case 21:
		cout << "двадцать один учебных заданий" << endl;
		break;
	case 22:
		cout << "двадцать два учебных заданий" << endl;
		break;
	case 23:
		cout << "двадцать три учебных заданий" << endl;
		break;
	case 24:
		cout << "двадцать четыре учебных заданий" << endl;
		break;
	case 25:
		cout << "двадцать пять учебных заданий" << endl;
		break;
	case 26:
		cout << "двадцать шесть учебных заданий" << endl;
		break;
	case 27:
		cout << "двадцать семь учебных заданий" << endl;
		break;
	case 28:
		cout << "двадцать восемь учебных заданий" << endl;
		break;
	case 29:
		cout << "двадцать девять учебных заданий" << endl;
		break;
	case 30:
		cout << "тридцать учебных заданий" << endl;
		break;
	default:
		switch (p % 10)
		{
		case 1:
			cout << "одно учебное задание" << endl;
			break;
		case 2:
			cout << "два учебных задания" << endl;
			break;
		case 3:
			cout << "три учебных задания" << endl;
			break;
		case 4:
			cout << "четыре учебных задания" << endl;
			break;
		case 5:
			cout << "пять учебных заданий" << endl;
			break;
		case 6:
			cout << "шесть учебных заданий" << endl;
			break;
		case 7:
			cout << "семь учебных заданий" << endl;
			break;
		case 8:
			cout << "восемь учебных заданий" << endl;
			break;
		case 9:
			cout << "девять учебных заданий" << endl;
			break;
		case 0:
			cout << "ноль учебных заданий" << endl;
			break;
		}
	}
}
void mission_18(int p) {
	setlocale(LC_ALL, "");
	switch (p / 100) {
	case 1:
		cout << "сто ";
		break;
	case 2:
		cout << "двести ";
		break;
	case 3:
		cout << "триста ";
		break;
	case 4:
		cout << "четыреста ";
		break;
	case 5:
		cout << "пятьсот ";
		break;
	case 6:
		cout << "шестьсот ";
		break;
	case 7:
		cout << "семьсот ";
		break;
	case 8:
		cout << "восемьсот  ";
		break;
	case 9:
		cout << "девятьсот  ";
		break;
	}
	if ((p % 100) / 10 == 1)
		switch (p % 100) {
		case 10:
			cout << "десять";
			break;
		case 11:
			cout << "одинадцать";
			break;
		case 12:
			cout << "двенадцать";
			break;
		case 13:
			cout << "тринадцать";
			break;
		case 14:
			cout << "четырнадцать";
			break;
		case 15:
			cout << "пятнадцать";
			break;
		case 16:
			cout << "шестнадцать";
			break;
		case 17:
			cout << "семнадцать";
			break;
		case 18:
			cout << "восемнадцать";
			break;
		case 19:
			cout << "девятнадцать";
			break;
		}
	else {
		switch ((p % 100) / 10) {
		case 2:
			cout << "двадцать ";
			break;
		case 3:
			cout << "тридцать ";
			break;
		case 4:
			cout << "сорок ";
			break;
		case 5:
			cout << "пятьдесят ";
			break;
		case 6:
			cout << "шестьдесят ";
			break;
		case 7:
			cout << "семьдесят ";
			break;
		case 8:
			cout << "восемьдесят ";
			break;
		case 9:
			cout << "девяносто ";
			break;
		}
		switch (p % 10) {
		case 1:
			cout << "один";
			break;
		case 2:
			cout << "два";
			break;
		case 3:
			cout << "три";
			break;
		case 4:
			cout << "четыре";
			break;
		case 5:
			cout << "пять";
			break;
		case 6:
			cout << "шесть";
			break;
		case 7:
			cout << "семь";
			break;
		case 8:
			cout << "восемь";
			break;
		case 9:
			cout << "девять";
			break;
		}
	}
}
void mission_19(int p) {
	setlocale(LC_ALL, "");
	switch ((p) % 10) {
	case 1:
		cout << "бел";
		break;
	case 3:
		cout << "черн";
		break;
	case 5:
		cout << "зелён";
		break;
	case 7:
		cout << "красн";
		break;
	case 9:
		cout << "жёлт";
		break;
	}
	switch ((p + 1) % 5) {
	case 11:
		cout << "ой ";
		break;
	case 8:
		cout << "ого ";
		break;
	}
	switch ((p + 8) % 12) {
	case 0:
		cout << "крысы";
		break;
	case 1:
		cout << "коровы";
		break;
	case 2:
		cout << "тигра";
		break;
	case 3:
		cout << "зайца";
		break;
	case 4:
		cout << "дракона";
		break;
	case 5:
		cout << "змеи";
		break;
	case 6:
		cout << "лошади";
		break;
	case 7:
		cout << "овцы";
		break;
	case 8:
		cout << "обезьяны";
		break;
	case 9:
		cout << "курицы";
		break;
	case 10:
		cout << "собаки";
		break;
	case 11:
		cout << "свиньи";
		break;
	}
}
void mission_20(int m, int d) {
	setlocale(LC_ALL, "");
	switch (m) {
	case 1:
		if (d > 19) {
			cout << "Водолей";
		}
		else {
			cout << "Козерог";
		}
		break;
	case 2:
		if (d > 18) {
			cout << "Рыбы";
		}
		else {
			cout << "Водолей";
		}
		break;
	case 3:
		if (d > 20) {
			cout << "Овен";
		}
		else {
			cout << "Рыбы";
		}
		break;
	case 4:
		if (d > 19) {
			cout << "Телец";
		}
		else {
			cout << "Овен";
		}
		break;
	case 5:
		if (d > 20) {
			cout << "Близнецы";
		}
		else {
			cout << "Телец";
		}
		break;
	case 6:
		if (d > 21) {
			cout << "Рак";
		}
		else {
			cout << "Близнецы";
		}
		break;
	case 7:
		if (d > 22) {
			cout << "Лев";
		}
		else {
			cout << "Рак";
		}
		break;
	case 8:
		if (d > 22) {
			cout << "Дева";
		}
		else {
			cout << "Лев";
		}
		break;
	case 9:
		if (d > 22) {
			cout << "Весы";
		}
		else {
			cout << "Дева";
		}
		break;
	case 10:
		if (d > 22) {
			cout << "Скорпион";
		}
		else {
			cout << "Весы";
		}
		break;
	case 11:
		if (d > 22) {
			cout << "Стрелец";
		}
		else {
			cout << "Скорпион";
		}
		break;
	case 12:
		if (d > 21){
			cout << "Козерог";
		}
		else {
			cout << "Стрелец";
		}
		break;
	}
}