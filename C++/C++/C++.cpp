#include "pch.h"
#include <iostream>

#include <iostream> 
using namespace std;
class Box {
public: double length; // ���� 
		double height; // �߶� 
		// ��Ա�������� 
		
		void setLength(double len);
		void setBreadth(double bre);
		void setHeight(double hei);
protected: double breadth; // ��� 
		   double getVolume(void);
};
// ��Ա�������� 
class BoxVolume:Box{
	public: double volume();
};
double Box::getVolume(void) {
	return length * breadth * height;
}

double BoxVolume::volume() {
	return getVolume();
}
void Box::setLength(double len) {
	length = len;
}
void Box::setBreadth(double bre) {
	breadth = bre;
}
void Box::setHeight(double hei) {
	height = hei;
}
// ����������� 
int main() {
	Box Box1; // ���� Box1������Ϊ Box 
	Box Box2; // ���� Box2������Ϊ Box 
	BoxVolume volum;
	double volume = 0.0; // ���ڴ洢��� // box 1 ���� 
	Box1.setLength(6.0);
	Box1.setBreadth(7.0);
	Box1.setHeight(5.0);
	// box 2 ���� 
	Box2.setLength(12.0); Box2.setBreadth(13.0); Box2.setHeight(10.0);
	//box 1 ����� 
	volume = volum.volume(); cout << "Box1 �������" << volume <<endl; 
	//box 2 ����� 
	volume = volum.volume(); cout << "Box2 �������" << volume <<endl; return 0; 
}
