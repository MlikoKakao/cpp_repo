#include <iostream>
#include <cmath>
#include <vector>

using namespace std;



int main(){
	void* void_ptr;
	int x = 5;
	void_ptr = &x;
	cout << "Void pointer var: " << *(static_cast<int*>(void_ptr)) << '\n';
	int *ptr = &x;
	int p = *ptr;
	cout << p << '\n';
	thread_local string first;
	int* heap= new int;
	*heap = 10;
	cout << "Int in heap: " << *heap << '\n';
	delete heap;
	cout << "First action: ";
	getline(cin, first);
	cout << "Your string: "<< first << '\n';

	cout << "Hello world " << x << endl;


	return 0;

}


