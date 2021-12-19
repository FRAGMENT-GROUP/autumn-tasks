#pragma once


double perim_squ(double side_sqr)                                                  
{
	return 4 * side_sqr;
}

double squ_squ(double side_sqr)                                                 
{
	return pow(side_sqr, 2);
}

double perim_rect(double side1, double side2)                                    
{
	return 2 * ( side1 + side2 );
}

double circuit(double dmt)                                                         
{
	return 3.14 * dmt;
}

double vol_cub(double size_cub)                                                     
{
	return pow(size_cub, 3);
}

double surfase_cub(double size_cub)                                               
{
	return 6 * pow(size_cub, 2);
}

double vol_prll(double leng1, double leng2, double leng3)                           
{
	return leng1 * leng2 * leng3;
}

double surfase_prll(double leng1, double leng2, double leng3)                       
{
	return 2 * (leng1 * leng2 + leng2 * leng3 + leng1 * leng3);
}

double square(double rds)                                                           
{
	return 3.14 * pow(rds, 2);
}

double average(double oneNumb, double twoNumb)                                      
{
	return (oneNumb + twoNumb) / 2;
}

double geometric(double numbOne, double numbTwo)                                    
{
	return sqrt(numbOne * numbTwo);
}

double sum(double a, double b)                                           
{
	return a + b;
}

double difference(double a, double b)                                            
{
	return a - b;
}

double multiplay(double a, double b)                                             
{
	return a * b;
}

double quotient(double a, double b)                                              
{
	return a / b;
}

int sum(int perv, int vtor, int tret)    
{
	return (perv + vtor + tret);
}

int multiplay(int perv, int vtor, int tret)                                    
{
	return (perv * vtor * tret);
}

double multiplay(double perv, double vtor, double tret)                           
{
	return (perv * vtor * tret);
}

double hypotenuse(double cathet1, double cathet2)                                  
{
	return sqrt(pow(cathet1, 2) + pow(cathet2, 2));
}

double sum(double cathet1, double cathet2, double hypot)                          
{
	return (cathet1 + cathet2 + hypot);
}

double radius (double lengh)                                                     
{
	return lengh - (2 * 3.14);
}

double diameter(double SQU)                                                        
{
	return 2 * sqrt(SQU / 3.14);
}

double distance(double x1, double x2)                                              
{
	return fabs(x2 - x1) - 1;
}

double spacing(double Xp1, double Xp2, double Yp1, double Yp2)                     
{
	return sqrt((pow(Xp2 - Xp1, 2)) + (pow(Yp2 - Yp1, 2)));
}

double semi_perimeter(double a, double b, double c)                               
{
	return (a + b + c) / 2;
}

double squ_trian(double a, double b, double c, double p)                           
{
	return sqrt(p * (p - a) * (p - b) * (p - c));
}

double funct(double x)                                                             
{
	return 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
}

double Funct(double x)                                                             
{
	return 4 * (pow(x - 3, 6)) - 7 * (pow(x - 3, 2)) + 2;
}

double multiplay(double number)
{
	return number * number;
}

double discriminant(double A, double B, double C)                                  
{
	return pow(B, 2) - 4 * A * C;
}

double root_x1(double A, double B, double D)                                       
{
	return (-B + sqrt(D)) / (2 * A);
}

double root_x2(double A, double B, double D)                                       
{
	return (-B - sqrt(D)) / (2 * A);
}

double lineEquation(double pA, double pB)                                          
{
	return -pB / pA;
}

double radian(double corner)                                                       
{
	return corner * 3.14 / 180;
}

double degree(double corner)                                                       
{
	return corner * 180 / 3.14;
}

double celsius(double degreeF)                                                     
{
	return (degreeF - 32) * 5 / 9;
}

double fahrenheit(double degreeC)                                                  
{
	return (degreeC * 9 / 5) + 32;
}