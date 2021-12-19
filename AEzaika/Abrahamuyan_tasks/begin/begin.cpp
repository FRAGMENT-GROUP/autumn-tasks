#include <iostream>
#include <math.h>
#include "function.h"

using std::cout;
using std::cin;
using std::endl;

int main()
{
	//task 1 and task 2
	cout << "\ttask 1 and 2\n";
	double side_sqr;
	cout << "enter the side of the square: ";
	cin >> side_sqr;
	cout << "perimeter of a square: " << perim_squ(side_sqr) << endl;
	cout << "square area: " << squ_squ(side_sqr) << endl << endl;

	//task 3
	cout << "\ttask 3\n";
	double side1, side2;
	cout << "enter the sides of the rectangle:\na = ";
	cin >> side1;
	cout << "b = ";
	cin >> side2;
	cout << "perimeter of a rectangle: " << perim_rect(side1, side2) << endl << endl;

	//task 4
	cout << "\ttask 4\n";
	double dmt;
	cout << "enter the diameter of the circle:\nd = ";
	cin >> dmt;
	cout << "circuit: " << circuit(dmt) << endl << endl;

	//task 5
	cout << "\ttask 5\n";
	double size_cub;
	cout << "enter the adge size of the cube:\na = ";
	cin >> size_cub;
	cout << "cube volume: " << vol_cub(size_cub) << endl
		 << "cube surfase: " << surfase_cub(size_cub) << endl
		 << endl;

	//task 6
	cout << "\ttask 6\n";
	double leng1, leng2, leng3;
	cout << "enter the length of the edges of the rectangular parallelepiped:\na = ";
	cin >> leng1;
	cout << "b = ";
	cin >> leng2;
	cout << "c = ";
	cin >> leng3;
	cout << "parallelepiped volume: " << vol_prll(leng1, leng2, leng3) << endl
		 << "parallelepiped surfase: " << surfase_prll(leng1, leng2, leng3) << endl
		 << endl;

	//task 7
	cout << "\ttask 7\n";
	double rds;
	cout << "enter the radius of the circle:\nR = ";
	cin >> rds;
	double sircuit = 2 * circuit(rds);
	cout << "circuit: " << sircuit << endl
		 << "area of the circle: " << square(rds) << endl << endl;

	//task 8
	cout << "\ttask 8\n";
	double oneNumb, twoNumb;
	cout << "enter two numbers:\na = ";
	cin >> oneNumb;
	cout << "b = ";
	cin >> twoNumb;
	cout << "average: " << average(oneNumb, twoNumb) << endl << endl;

	//task 9
	cout << "\ttask 9\n";
	double numbOne, numbTwo;
	cout << "enter two non-negative numbers:\ni = ";
	cin >> numbOne;
	cout << "j = ";
	cin >> numbTwo;
	if (numbOne < 0)
	{
		numbOne = -numbOne;
		cout << "i changed: " << numbOne << endl;
	}
	if (numbTwo < 0)
	{
		numbTwo = -numbTwo;
		cout << "j changet: " << numbTwo << endl;
	}

	cout << "geometric mean: " << geometric(numbOne, numbTwo) << endl << endl;

	//task 10
	cout << "\ttask 10\n";
	double a, b;
	cout << "enter a nonzero numders:\na = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	if (a != 0 && b != 0)
	{
		cout << endl;
		cout << "a + b = " << sum(a, b) << endl
			 << "a - b = " << difference(a, b) << endl
			 << "a * b = " << multiplay(a, b) << endl
			 << "a / b = " << quotient(a, b) << endl
			 << endl;
	}
	else
		cout << "the value must be nonzero!\n" << endl << endl;

	//task 11
	cout << "\ttask 11\n";
	int number;
	cout << "enter a thee-digit number: ";
	cin >> number;

	if (number < 999 && number > 100)
	{
		int perv = 0, vtor = 0, tret = 0;
		perv = number / 100 % 10;
		vtor = number / 10  % 10;
		tret = number % 10;
		cout << "sum of numbers: " << sum(perv, vtor, tret) << endl
			 << "product of numbers: " << multiplay(perv, vtor, tret) << endl
			 << endl;
	}
	else
		cout << "incorrect value entered" << endl << endl;

	//task 12
	cout << "\ttask 12\n";
	double cathet1, cathet2, hypot;
	cout << "insert the legs of the triangle:\nthe length of the first: ";
	cin >> cathet1;
	cout << "lenght of the second: ";
	cin >> cathet2;
	hypot = hypotenuse(cathet1, cathet2);
	cout << "hypotenuse: " << hypot << endl
		 << "perimeter: " << sum(cathet1, cathet2, hypot) << endl
		 << endl;

	//task 13
	cout << "\ttask 13\n";
	double rds1, rds2, rds3;
	cout << "enter the radius of the circle:\nradius 1: ";
	cin >> rds1;
	cout << "radius 2: ";
	cin >> rds2;

	if (rds2 > rds1)
	{
		double temp = rds2;
		rds2 = rds1;
		rds1 = temp;

		cout << "\nvalues changed:\n" << rds1 << endl << rds2 << endl << endl;
	}

	rds3 = square(rds1) - square(rds2);

	cout << "\narea of a circle 1: "<< square(rds1) << endl
		 << "area of a circle 2: " << square(rds2) << endl
		 << "ring area: " << rds3 << endl << endl;

	//task 14
	cout << "\ttask 14\n";
	double L, rads;
	cout << "enter the lengh of the circule:\nL = ";
	cin >> L;
	rads = radius(L);
	cout << "the radius: " << rads << endl
		 << "area of a circule: " << square(rads) << endl << endl;

	//task 15
	cout << "\ttask 15\n";
	double SQU, dim;
	cout << "enter the area of circle: ";
	cin >> SQU;
	dim = diameter(SQU);
	cout << "diameret: " << dim << endl << "circuir: " << circuit(dim) << endl << endl;

	//task 16
	cout << "\ttask 16\n";
	double x1, x2;
	cout << "enter coordinates x:\nx1 = ";
	cin >> x1;
	cout << "x2 = ";
	cin >> x2;
	cout << "distance between x1 and x2: " << distance(x1, x2) << endl << endl;

	//task 17
	cout << "\ttask 17\n";
	double pointA, pointB, pointC, segmentAB, segmentBC;
	cout << "enter:\nA = ";
	cin >> pointA;
	cout << "B = ";
	cin >> pointB;
	cout << "C = ";
	cin >> pointC;

	segmentAB = fabs(difference(pointB, pointA));
	segmentBC = fabs(difference(pointC, pointB));

	cout << "segment length AB: " << segmentAB << endl
		 << "segment length BC: " << segmentBC << endl
		 << "sum os segments: " << sum(segmentAB, segmentBC) << endl
		 << endl;

	//task 18
	cout << "\ttask 18\n";
	double point_a, point_b, point_c;
	cout << "enter:\nA = ";
	cin >> point_a;
	cout << "B = ";
	cin >> point_b;
	cout << "C = ";
	cin >> point_c;

	if (point_c > point_b)
	{
		double temp = point_c;
		point_c = point_b;
		point_b = temp;

		cout << "\nvalues changed:\nB = " << point_b << " C = " << point_c << endl << endl;
	}

	cout << "\nsegment AC = " << fabs(difference(point_c, point_a)) << endl
		 << "segment BC = " << fabs(difference(point_c, point_b)) << endl
		 << "sum of segments = " << sum(fabs(difference(point_c, point_a)), fabs(difference(point_c, point_b))) << endl
		 << endl;

	//task 19
	cout << "\ttask 19\n";
	double x_point1, x_point2, y_point1, y_point2;
	cout << "enter:\nx1 = ";
	cin >> x_point1;
	cout << "y1 = ";
	cin >> y_point1;
	cout << "x2 = ";
	cin >> x_point2;
	cout << "y2 = ";
	cin >> y_point2;

	cout << "perimeter: " << perim_rect(fabs(difference(x_point1, x_point2)), fabs(difference(y_point1, y_point2))) << endl
		 << "square: " << multiplay(fabs(difference(x_point1, x_point2)), fabs(difference(y_point1, y_point2))) << endl
		 << endl;

	//task 20
	cout << "\ttask 20\n";
	double Xp1, Xp2, Yp1, Yp2;
	cout << "enter:\nx1 = ";
	cin >> Xp1;
	cout << "y1 = ";
	cin >> Yp1;
	cout << "x2 = ";
	cin >> Xp2;
	cout << "y2 = ";
	cin >> Yp2;

	cout << "spacing: " << spacing(Xp1, Xp2, Yp1, Yp2) << endl << endl;

	//task 21
	cout << "\ttask 21\n";
	double poinX1, poinX2, poinX3, poinY1, poinY2, poinY3;
	cout << "enter:\nx1 = ";
	cin >> poinX1;
	cout << "y1 = ";
	cin >> poinY1;

	cout << "x2 = ";
	cin >> poinX2;
	cout << "y2 = ";
	cin >> poinY2;

	cout << "x3 = ";
	cin >> poinX3;
	cout << "y3 = ";
	cin >> poinY3;

	double poinA = spacing(poinX1, poinX2, poinY1, poinY2);
	double poinB = spacing(poinX2, poinX3, poinY2, poinY3);
	double poinC = spacing(poinX3, poinX1, poinY3, poinY1);
	double p = semi_perimeter(poinA, poinB, poinC);

	cout << "perimeter: " << sum(poinA, poinB, poinC) << endl
		 << "square: " << squ_trian(poinA, poinB, poinC, p) << endl
		 << endl;

	//task 22
	cout << "\ttask 22\n";
	double valA, valB, newval;
	cout << "enter:\nA = ";
	cin >> valA;
	cout << "B = ";
	cin >> valB;

	newval = valA;
	valA = valB;
	valB = newval;

	cout << "values changed:\nA = " << valA << endl
		 << "B = " << valB << endl << endl;

	//task 23
	cout << "\ttask 23\n";
	double num_a, num_b, num_c, newnum, numnew, nnum;

	cout << "A = ";
	cin >> num_a;
	cout << "B = ";
	cin >> num_b;
	cout << "C = ";
	cin >> num_c;

	newnum = num_a;
	num_a = num_b;
	num_b = newnum;

	numnew = num_b;
	num_b = num_c;
	num_c = numnew;

	nnum = num_c;
	num_c = num_a;
	num_a = nnum;

	cout << "value changed:\n"
		 << "A = " << num_a << endl
		 << "B = " << num_b << endl
		 << "C = " << num_c << endl
		 << endl;

	//task 24
	cout << "\ttask 24\n";
	double n_a, n_b, n_c, a_new, b_new, c_new;
	cout << "enter:\nA = ";
	cin >> n_a;
	cout << "B = ";
	cin >> n_b;
	cout << "C = ";
	cin >> n_c;

	a_new = n_a;
	n_a = n_c;
	n_c = a_new;

	c_new = n_c;
	n_c = n_b;
	n_b = c_new;

	b_new = n_b;
	n_b = n_a;
	n_a = b_new;

	cout << "vaiue changed:\n"
		 << "A = " << n_a << endl
		 << "B = " << n_b << endl
		 << "C = " << n_c << endl
		 << endl;

	//task 25 and task 26
	cout << "\ttask 25 and 26\n";
	double x;
	cout << "enter x:\nx = ";
	cin >> x;

	cout << "function value1: " << funct(x) << endl
		 << "function value2: " << Funct(x) << endl
		 << endl;

	//task 27
	cout << "\ttask 27\n";
	double Number;
	cout << "enter the number: ";
	cin >> Number;

	cout << "A^2 = " << multiplay(Number) << endl
		 << "A^4 = " << multiplay(multiplay(Number)) << endl
		 << "A^8 = " << multiplay(multiplay(multiplay(Number))) << endl
		 << endl;

	//task 28
	cout << "\ttask 28\n";
	double anum;
	cout << "enter the number: ";
	cin >> anum;

	cout << "A^2 = " << multiplay(anum) << endl
		 << "A^3 = " << multiplay(multiplay(anum), anum) << endl
		 << "A^5 = " << multiplay(multiplay(anum), multiplay(anum), anum) << endl
		 << "A^10 = " << multiplay(multiplay(multiplay(anum)), multiplay(multiplay(anum)), multiplay(anum)) << endl
		 << "A^15 = " << multiplay(multiplay(multiplay(multiplay(anum), multiplay(anum))), multiplay(multiplay(anum, multiplay(anum))), anum) << endl
		 << endl;

	//task 29
	cout << "\ttask 29\n";
	double corner;
	cout << "enter angle: ";
	cin >> corner;

	if (0 < corner && corner <= 360)
	{
		cout << "angle " << corner << " in radians: " << radian(corner) << endl << endl;
	}
	else
		cout << "incorrect value ented!" << endl << endl;

	//task 30
	cout << "\ttask 30\n";
	double corn;
	cout << "enter angle: ";
	cin >> corn;
	if (0 < corn && corn < 2 * 3.14)
	{
		cout << "angle " << corn << " in degrees: " << degree(corn) << endl << endl;
	}
	else
		cout << "incorrect value ented!" << endl << endl;

	//task 31
	cout << "\ttask 31\n";
	double degreeF;
	cout << "enter temperature in Fahrenheit: ";
	cin >> degreeF;
	cout << "temperature in Celsius: " << celsius(degreeF) << endl << endl;

	//task 32
	cout << "\ttask 32\n";
	double degreeC;
	cout << "enter temprtature in Celsius: ";
	cin >> degreeC;
	cout << "temperature in Fahrenheit: " <<fahrenheit(degreeC) << endl << endl;

	//task 33
	cout << "\ttask 33\n";
	double sweet, money, kg;
	cout << "enter the number of kilograms of sweetes: ";
	cin >> sweet;
	cout << "enter their cost: ";
	cin >> money;
	cout << "enter the number of kilograms of sweetes: ";
	cin >> kg;
	cout << "cost of 1 kg: " << quotient(money, sweet) << endl
		 << "cost of " << kg <<" kg: " << multiplay(kg, quotient(money, sweet)) << endl
		 << endl;

	//task 34
	cout << "\ttask 34\n";
	double choco_kg, cost_choco, toff_kg, cost_toff;
	cout << "enter amount of chocolate: ";
	cin >> choco_kg;
	cout << "enter their cost: ";
	cin >> cost_choco;

	cout << "enter amount of toffe: ";
	cin >> toff_kg;
	cout << "enter their cost: ";
	cin >> cost_toff;

	cout << "the cost of chocolate for 1 kg: " << quotient(cost_choco, choco_kg) << endl
		 << "the cost of toffe for 1 kg: " << quotient(cost_toff, toff_kg) << endl
		 << "chocoletes are " << quotient(quotient(cost_choco, choco_kg), quotient(cost_toff, toff_kg))
		 << " more expensive that toffe"<< endl << endl;

	//task 35
	cout << "\ttask 35\n";
	double speedBoat, speedRiver, timelake, timeriver;
	cout << "enter boat speed: ";
	cin >> speedBoat;
	cout << "enter time: ";
	cin >> timelake;

	cout << "enter river speed: ";
	cin >> speedRiver;
	cout << "enter time: ";
	cin >> timeriver;

	if (speedRiver > speedBoat)
		cout << "oops... the boat flew into space..." << endl << endl;
	else
	{
		cout << "traversed path on the lake: " << multiplay(speedBoat, timelake) << endl
			 << "traveled path along the river: " << multiplay(difference(speedBoat, speedRiver), timeriver) << endl
			 << "all tne way: " << sum(multiplay(speedBoat, timelake), multiplay(difference(speedBoat, speedRiver), timeriver)) << endl
			 << endl;;
	}
	
	//task 36
	cout << "\ttask 36\n";
	double car1_speed, car2_speed, time, distan;
	cout << "enter the speed of the first car: ";
	cin >> car1_speed;
	cout << "enter the speed of the second car: ";
	cin >> car2_speed;
	cout << "enter time: ";
	cin >> time;
	cout << "enter start distance: ";
	cin >> distan;

	cout << "distance between cars after " << time << " hours: "
		 << sum(distan, multiplay(time, sum(car1_speed, car2_speed))) << endl
		 << endl;

	//task 37
	cout << "\ttask 37\n";
	double speed_car1, speed_car2, cartime, distans;
	cout << "enter the speed of the first car: ";
	cin >> speed_car1;
	cout << "enter the speed of the second car: ";
	cin >> speed_car2;
	cout << "enter time: ";
	cin >> cartime;
	cout << "enter start distance: ";
	cin >> distans;

	cout << "distance between cars after " << cartime << " hours: "
		 << fabs(difference(distans, multiplay(cartime, sum(speed_car1, speed_car2)))) << endl
		 << endl;

	//task 38
	cout << "\ttask 38\n";
	double pA, pB;
	cout << "enter:\nA = ";
	cin >> pA;
	cout << "B = ";
	cin >> pB;
	if (pA == 0)
		cout << "the value must be nonzero!" << endl << endl;
	else
		cout << "solution: " << lineEquation(pA, pB) << endl << endl;

	//task 39
	cout << "\ttask 39\n";
	double coorA, coorB, coorC, D;
	cout << "enter:\nA = ";
	cin >> coorA;
	cout << "B = ";
	cin >> coorB;
	cout << "C = ";
	cin >> coorC;

	D = discriminant(coorA, coorB, coorC);

	if (D <= 0 || coorA == 0 )
		cout << "\nthe discriminant does not meet the conditions!" << endl <<endl;
	else
	{
		cout << "discrimenant: " << D << endl
			 << "x1 = " << root_x1(coorA, coorB, D) << endl
			 << "x2 = " << root_x2(coorA, coorB, D) << endl
			 << endl;

	}

	//task 40
	cout << "\ttask 40\n";
	double A1, A2, B1, B2, C1, C2, Dd;
	cout << "enter:\nA1 = ";
	cin >> A1;
	cout << "B1 = ";
	cin >> B1;
	cout << "C1 = ";
	cin >> C1;

	cout << "A2 = ";
	cin >> A2;
	cout << "B2 = ";
	cin >> B2;
	cout << "C2 = ";
	cin >> C2;

	Dd = difference(A1 * B2, A2 * B1);
	cout << "x = " << quotient(difference(multiplay(C1, B2), multiplay(C2, B1)), Dd) << endl
		 << "y = " << quotient(difference(multiplay(A1, C2), multiplay(A2, C1)), Dd) << endl
		 << endl;

	return 0;
}