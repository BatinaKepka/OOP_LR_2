#include "Triangle.h"
#include <iostream>
using namespace std;

Triangle::Triangle()
{

}

Triangle::Triangle(Point first, Point second, Point third)
{
	this->first = first;
	this->second = second;
	this->third = third;
}

void Triangle::Input()
{
	first.Input();
	second.Input();
	third.Input();
}

float Triangle::Perimeter()
{
	return first.Distance_to_Point(second) + first.Distance_to_Point(third) + second.Distance_to_Point(third);
}
void Triangle::Perimeter(float* perimeter)
{
	*perimeter = first.Distance_to_Point(second) + first.Distance_to_Point(third) + second.Distance_to_Point(third);
	cout << "\n������ ����� ���������� ���������, ������� �������� ����� ���������!";
	return;
}
void Triangle::Perimeter(float  &perimeter)
{
	perimeter = first.Distance_to_Point(second) + first.Distance_to_Point(third) + second.Distance_to_Point(third);
	cout << "\n������ ����� ���������� ���������, ������� �������� ����� ������!";
	return;
}

float Triangle::Area()
{
	float a = first.Distance_to_Point(second);
	float b = first.Distance_to_Point(third);
	float c = second.Distance_to_Point(third);
	float p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}

Point Triangle::Get_first_point()
{
	return first;
}
Point Triangle::Get_second_point()
{
	return second;
}
Point Triangle::Get_third_point()
{
	return third;
}




