#include <iostream>
#include <cmath>
#include <vector>

using namespace std;


static double calculator(){
	int a,b;
	int result;
	cout << "First number: ";
	cin >> a;
	cout << "Second number: ";
	cin >> b;

	return result;
}

void *malloc(size_t size){
	void *block;
	block = sbrk(size);
	if (block == (void*) -1)
		return NULL;
	return block;
}

int main() {
	int x = 5;
	string first;
	cout << "First action: ";
	getline(cin, first);
	cout << "Your string: "<< first << '\n';

	cout << "Hello world " << x << endl;
	calculator();


	return 0;

}


