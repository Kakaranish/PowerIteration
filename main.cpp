#include "Libs.h"
#include "Matrix.h"
#include "Utility.h"

int main(int argc, char * argv[]) {
	
	srand(static_cast<int>(time(NULL)));

	int n;
	std::cout << "**************************************************" << std::endl;
	std::cout << "***       PROGRAM WYKONAL STANISLAW GRUZ       ***" << std::endl;
	std::cout << "*** POWER ITERATION DLA MACIERZY HERMITOWSKIEJ ***" << std::endl;
	std::cout << "**************************************************" << std::endl;
	std::cout << "UWAGA! Podajemy np. 1 2 3 4 i na koncu po podaniu wiersza wciskamy ENTER!" << std::endl;
	std::cout << "Podaj wymiar macierzy: ";
	std::cin >> n;

	if (std::cin.fail() || n <= 0)
		exit(-1);

	std::cout << std::endl;

	Matrix A(n,n);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			std::cin >> A(i, j);

	A.mulitiplyByScalar(1/12.f);
	computeEigenpairs(&A,300);

	return 0;
}