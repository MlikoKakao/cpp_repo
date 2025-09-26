#include <iostream>
#include <cmath>
#include <vector>

using namespace std;


template<typename T>
void print(const T& value) {
	cout << "Printing value:" << value << '\n';
}

void func_overload(int y){
	y -= 5;
	cout << "Overload on int: " << y << '\n';
}

void func_overload(string ex){
	cout << "Overload on string: " << ex << "\nLength: "<< ex.length() <<'\n';
}

int main(){
	func_overload(100);
	func_overload("Shi gua");
	int a = 5;
	int b = 10;
	auto glambda = [=]()->bool {return a < b; };
	cout << "Lambda result: " << glambda() << '\n';
	print(42);
	print(true);
	print("Printting non-defined value");

	int x = 5;
	string first;
	cout << "First action: ";
	getline(cin, first);
	cout << "Your string: "<< first << '\n';

	cout << "Hello world " << x << endl;


	return 0;

}


