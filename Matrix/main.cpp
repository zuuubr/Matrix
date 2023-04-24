#define __CRTDBG_MAP_ALLOC
#include <crtdbg.h>
#define DEBUG_NEW new(_NORMAL_BLOCK, __FILE__, __LINE__)
#define new DEBUG_NEW

#include <iostream>
#include "matrix.h"

int main() {
	Matrix a(3, 5), d(3, 5), b(5, 3), c, result;

	for (int i = 0; i < a.rowSize(); i++) {
		for (int j = 0; j < a.colSize(); j++) {
			a.toApplyElement(i, j, i + j);
		}
	}
	a.show();
	std::cout << std::endl;

	for (int i = 0; i < b.rowSize(); i++) {
		for (int j = 0; j < b.colSize(); j++) {
			b.toApplyElement(i, j, i + j);
		}
	}
	b.show();
	std::cout << std::endl;

	for (int i = 0; i < d.rowSize(); i++) {
		for (int j = 0; j < d.colSize(); j++) {
			d.toApplyElement(i, j, i + j);
		}
	}
	d.show();
	std::cout << std::endl;

	result = a - d;
	result.show();
	std::cout << std::endl;

	result += (d + a);
	result.show();
	std::cout << std::endl;

	result -= a;
	result.show();
	std::cout << std::endl;

	result += a;
	result.show();
	std::cout << std::endl;

	result = a / 2;
	result.show();
	std::cout << std::endl;

	result = a/2;
	result.show();
	std::cout << std::endl;

	result = result/2;
	result.show();
	std::cout << std::endl;

	result = result * 2;
	result.show();
	std::cout << std::endl;

	result = 2 * a;
	result.show();
	std::cout << std::endl;

	result = multiplication(a, d);
	result.show();
	std::cout << std::endl;

	result = result.transponse();
	result.show();
	std::cout << std::endl;

	_CrtDumpMemoryLeaks();
	return 0;
}
