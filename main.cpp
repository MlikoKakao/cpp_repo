#include <iostream>
#include <cmath>
#include <vector>
#include <memory>

using namespace std;



int main(){
	void* void_ptr;
	int x = 5;
	void_ptr = &x;
	cout << "Void pointer var: " << *(static_cast<int*>(void_ptr)) << '\n'; //void ptrs used for undefined types at void cast
	int *ptrp = &x;
	int p = *ptrp; //"go to location of *ptrp and take the value"
	cout << p << '\n';
	thread_local string first; //can allocate data to specific thread - each thread has its own stack
	
	unique_ptr <int> p_k(new int (15));
	cout << *p_k << '\n';
















	cout << "First action: ";
	getline(cin, first);
	cout << "Your string: "<< first << '\n';
	return 0;

}


