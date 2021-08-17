#include<iostream>
#include<cmath>

using namespace std;

float area(float r) {
	float Area = 3.14*r*r;
	return Area;
}

float area(float l, float b) {
	float Area = l*b;
	return Area;
}

float area(float a, float b, float c) {
	float s = (a+b+c)/2;
	float Area = sqrt(s*(s-a)*(s-b)*(s-c));
	return Area;
}

int main() {
	int n;
	cout<<"Select shape:\n\t1. Circle\n\t2. Rectangle\n\t3. Triangle\nYour input: ";
	cin>>n;
	if(n==1) {
		float r;
		cout<<"Enter radius of circle: ";
		cin>>r;
		cout<<"Area of circle: "<<area(r);
	}
	else if(n==2) {
		float l,b;
		cout<<"Enter length of rectangle: ";
		cin>>l;
		cout<<"Enter breadth of rectangle: ";
		cin>>b;
		cout<<"Area of rectangle: "<<area(l,b);
	}
	else if(n==3) {
		float a,b,c;
		cout<<"Enter first side of triangle: ";
		cin>>a;
		cout<<"Enter second side of triangle: ";
		cin>>b;
		cout<<"Enter third side of triangle: ";
		cin>>c;
		cout<<"Area of rectangle: "<<area(a,b,c);
	}
	return 0;
}