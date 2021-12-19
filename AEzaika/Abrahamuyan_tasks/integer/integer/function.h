#pragma once

int meter(int numbercm)
{
	return numbercm / 100;
}

int ton(int numberkg)
{
	return numberkg / 1000;
}

int kilobyte(int numberb)
{
	return numberb / 1024;
}

int remain(int num_one, int num_two)
{
	return num_one % num_two;
}

/*ĞÀÇÁÈÒÈÅ ×ÈÑËÀ ÍÀ ÖÈÔĞÛ*/
int thousand(int number)
{
	return number / 1000 % 100;
}

int hundreds(int number)
{
	return number / 100 % 10;
}

int tens(int number)
{
	return number / 10 % 10;
}

int units(int number)
{
	return number % 10;
}

/*ÑÓÌÌÀ*/
int sum(int number_one)
{
	return number_one + number_one;
}

int sum(int number_one, int number_two)
{
	return number_one + number_two;
}

int sum(int number_one, int number_two, int number_three)
{
	return number_one + number_two + number_three;
}

/*ÂÛ×ÈÒÀÍÈÅ*/
int dif(int number_one, int number_two)
{
	return number_one - number_two;
}

/*ÓÌÍÎÆÅÍÈÅ*/
int multi(int number_one)
{
	return number_one * number_one;
}

int multi(int number_one, int number_two)
{
	return number_one * number_two;
}

int multi(int number_one, int number_two, int number_three)
{
	return number_one * number_two * number_three;
}

/*ÄÅËÅÍÈÅ*/
int divide(int number_one, int number_two)
{
	return number_one / number_two;
}

int persent(int number1, int number2)
{
	return number1 % number2;
}