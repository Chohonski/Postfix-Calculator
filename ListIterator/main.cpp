#include <cstdlib>
#include <iostream>
#include <list>
#include <vector>
#include "List.h"

using namespace std;

int main() {

	list<int> v;
	v = {1, 2, 3};
	cout << sum(v);

	//Termination Sequence
	char c;
	cout << "Enter c to continue: ";
	cin >> c;

	return EXIT_SUCCESS;
}