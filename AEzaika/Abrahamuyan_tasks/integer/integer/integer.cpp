#include <iostream>
#include <math.h>
#include "function.h"

using std::cout;
using std::cin;
using std::endl;

int main()
{
	//task 1
	int cantimetr = 15000; cout << "task 1:\ncantimetrs: " << cantimetr << "\ndistance in meters: " << meter(cantimetr) << endl << endl;

	//task 2
	int kilogram = 15000; cout << "task 2:\nkilograms: " << kilogram << "\nweight in tons: " << ton(kilogram) << endl << endl;

	//task 3
	int byte = 15360; cout << "task 3:\nbyte: " << byte << "\nkilobyte: " << kilobyte(byte) << endl << endl;

	//task 4
	int A = 12, B = 3; cout << "task 4:\n1 number: " << A << "\n2 number " << B << "\nnumder of segments: " << divide(A, B) << endl << endl;

	//task 5
	int a = 23, b = 3; cout << "task 5:\n1 number: " << a << "\n2 number: " << b << "\nlenght of unoccupied part: " << remain(a, b) << endl << endl;

	//task 6
	int two_digit = 53; cout << "task 6:\nnumber: " << two_digit << "\ndozens: " << tens(two_digit) << "\nunits: " << units(two_digit) << endl << endl;

	//task 7
	int two_digit1 = 94; cout << "task 7:\nnumber: " << two_digit1 << "\nsum of numbers: " << sum(tens(two_digit1), units(two_digit1)) << "\ndifference of numbers: " << dif(tens(two_digit1), units(two_digit1)) << endl << endl;

	//task 8
	int two_digit2 = 62; cout << "task 8:\nnumber: " << two_digit2 << "\nrearrangement of numbers: " << units(two_digit2) << tens(two_digit2) << endl << endl;

	//task 9
	int three_digit = 395; cout << "task 9:\nnumber: " << three_digit << "\nhundreds: " << hundreds(three_digit) << endl << endl;

	//task 10
	int three_digit1 = 786; cout << "task 10:\nnumber: " << three_digit1 << "\nunits: " << units(three_digit1) << "\nhundreds: " << hundreds(three_digit1) << endl << endl;

	//task 11
	int three_digit2 = 852; cout << "task 11:\nnumber: " << three_digit2 << "\nsum of nunbers: " << sum(hundreds(three_digit2), tens(three_digit2), units(three_digit2)) << "\nproduct of numbers: " << multi(hundreds(three_digit2), tens(three_digit2), units(three_digit2)) << endl << endl;

	//task 12
	int three_digit3 = 723; cout << "task 12:\nnumber: " << three_digit3 << "\nrearrangement of numbers: " << units(three_digit3) << tens(three_digit3) << hundreds(three_digit3) << endl << endl;

	//task 13
	int three_digit4 = 794; cout << "task 13\nnumber: " << three_digit4 << "\nnew number: " << tens(three_digit4) << units(three_digit4) << hundreds(three_digit4) << endl << endl;

	//task 14
	int three_digit5 = 875; cout << "task 14\nnumber: " << three_digit5 << "\nnew number: " << tens(three_digit5) << units(three_digit5) << hundreds(three_digit5) << endl << endl;

	//task 15
	int three_digit6 = 520; cout << "task 15\nnumber: " << three_digit6 << "\nnew number: " << tens(three_digit6) << hundreds(three_digit6) << units(three_digit6) << endl << endl;

	//task 16
	int three_digit7 = 643; cout << "task 16\nnumber: " << three_digit7 << "\nnew number: " << hundreds(three_digit7) << units(three_digit7) << tens(three_digit7) << endl << endl;

	//task 17
	int number = 8652; cout << "task 17\nnumber: " << number << "\nhundreds: " << hundreds(number) << endl << endl;

	//task 18
	int number1 = 3865; cout << "task 18\nnumber: " << number1 << "\nthousand: " << thousand(number1) << endl << endl;

	//task 19
	int sec = 420; cout << "task 19\nnumber of seconds: " << sec << "\nnumber of minutes: " << divide(sec, 60) << endl << endl;

	//task 20
	int seco = 3600; cout << "task 20\nnumber of seconds: " << seco << "\nnumber of hours: " << divide(divide(seco, 60), 60) << endl << endl;
	
	//task 21
	int secon = 9365; cout << "task 21\nnumber of seconds: " << secon << "\nnumber of minutes: " << divide(secon, 60) << "\nnumber of seconds: " << persent(divide(secon, 60), 60) << endl << endl;

	//task 22
	int second = 72360; cout << "task 22\nnumber of seconds: " << second << "\nnumber of hours: " << divide(second, multi(60)) << "\nnumber of seconds: " << divide(persent(second, multi(60)), 60) << endl << endl;

	//task 23
	int seconds = 72000; cout << "task 23\nnumber of seconds: " << seconds << "\number of hours: " << divide(divide(seconds, 60), 60) << "\nnumber of minutes: " << persent(seconds, multi(60)) << endl << endl;
	
	//task 24
	int num_day = 76; cout << "task 24\nday number: " << num_day << "\nday of week: " << persent(num_day, 7) << endl << endl;

	//task 25
	int number_day = 1; cout << "task 25\nday number: " << number_day << "\nday of week: " << persent(sum(number_day, 3), 7) << endl << endl;
	
	//task 26
	int day_num = 1; cout << "task 26\nday number: " << day_num << "\nday of week: " << persent(sum(day_num, 1), 7) << endl << endl;

	//task 27
	int day_number = 1; cout << "task 27\nday number: " << day_number << "\nday of week: " << persent(sum(day_number, 5), 7) << endl << endl;

	//task 28
	int day = 15, week = 1; cout << "task 28\nday number: " << day << "\nday of week: " << persent(sum(day, week), 7) << endl << endl;

	//task 29
	int side_a = 2, side_b = 5, side_c = 2; cout << "task 29\nrectangle size: " << multi(side_a, side_b) << "\nnumber of squares: " << divide(multi(side_a, side_b), multi(side_c)) << endl << endl;

	//task 30 ???

	return 0;
}