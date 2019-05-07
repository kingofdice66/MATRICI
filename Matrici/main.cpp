#include "Matrici.h"


int main()
{
	std::cout << "n = ";
	int n;
	std::cin >> n;

	//***************************************
	std::vector<long double> m(n + 1);
	std::vector<std::vector<long double>> v(n, m);
	//***************************************

	std::vector<long double> X(n);
	


	
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n + 1; ++j)
		{
			std::cout << "v[" << i << "][" << j << "] = ";
			std::cin >> v[i][j];
		}
    
	
	std::cout << "################################\n";
	
    comuta(v, n);
	zero_sub_pivoti(v, n); // efectuam calcul algebric pentru a avea zero sub pivoti
	//rezolvare(v, X, n);
	arata(v, X, n);

	return 0;
}