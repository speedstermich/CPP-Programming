#include "pch.h"
#include <iostream>

#include <iostream> 
using namespace std;
class Box {
public: double length; // 长度 
		double height; // 高度 
		// 成员函数声明 
		
		void setLength(double len);
		void setBreadth(double bre);
		void setHeight(double hei);
protected: double breadth; // 宽度 
		   double getVolume(void);
};
// 成员函数定义 
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
// 程序的主函数 
int main() {
	Box Box1; // 声明 Box1，类型为 Box 
	Box Box2; // 声明 Box2，类型为 Box 
	BoxVolume volum;
	double volume = 0.0; // 用于存储体积 // box 1 详述 
	Box1.setLength(6.0);
	Box1.setBreadth(7.0);
	Box1.setHeight(5.0);
	// box 2 详述 
	Box2.setLength(12.0); Box2.setBreadth(13.0); Box2.setHeight(10.0);
	//box 1 的体积 
	volume = volum.volume(); cout << "Box1 的体积：" << volume <<endl; 
	//box 2 的体积 
	volume = volum.volume(); cout << "Box2 的体积：" << volume <<endl; return 0; 
}
