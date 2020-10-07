#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "employer.h"
int main() {
	employer* employer1 = new employer("Matt", 32, 5);
	employer employer2;
	employer employer3(*employer1);

	employer1->print();
	employer2.print();
	employer3.print();

	delete(employer1);

	return 0;
}
