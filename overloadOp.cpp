#include <iostream>

namespace std{
class Complex {
private:
	float real, imag;

public:
	Complex(float r=0, float i = 0) : real(r), imag(i) {}

	Complex operator+(const Complex& other) {
		return Complex(real + other.real, imag + other.imag);
	}

	void display() const {
		cout << real << "+" << imag << "i" << endl;
	}
};
static void callOverload(){

	Complex c1(3.7,4.4);
	Complex c2(2.5,8.0);
	
	Complex result = c1 + c2;

	cout << "Sum is: ";
	result.display();

}

}
