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
	arata_date_introduse(v, n);

	std::cout << "################################\n";

	if (zero_sub_pivoti(v, n) == true) // efectuam calcul algebric pentru a avea zero sub pivoti
	{                                  //rezolvare(v, X, n);
		std::cout << "Sistemul de " << n << " ecuatii cu " << n << " necunoscute"
			<< " are o infinitate de solutii sau nici o solutie!\n";
		return 0;
	}
	arata(v, X, n);

	return 0;
}