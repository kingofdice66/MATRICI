#include "Matrici.h"


void arata(const vec_2D& v, const vec_1D& X, int n)
{
	for (int i = 0; i < n; ++i)
	{
		std::cout << '\n';

		for (int j = 0; j < n + 1; ++j)
		{
			std::cout << v[i][j] << " | ";
		}
	}

	std::cout << '\n';
	/*
	for (int i = 0; i < n; ++i)
	{
		std::cout << "X[" << i << "] = " << X[i] << '\n';
	}
	*/
}

void comuta(vec_2D& v, int n)
{
	//*******************************************
	std::vector<double> m(n + 1);
	std::vector<std::vector<double>> temp(n, m);
	//*******************************************

	for (int i = 0; i < n - 1; ++i)
	{
		if (v[i][i] == 0)
		{
			for (int j = i + 1; j < n; ++j)
			{
				if (v[j][i] != 0)
				{
					for (int k = j; k < n; ++k)
					{
						for (int l = 0; l < n + 1; ++l)
						{
							temp[i][l] = v[i][l];
							v[i][l] = v[k][l];
							v[k][l] = temp[i][l];
						}
					}
				}
			}
		}
	}

}


void rezolvare(vec_2D& v, vec_1D& X, int n)
{
	double sum = 0;

	X[n - 1] = v[n - 1][n] / v[n - 1][n - 1];

	for (int i = n - 2; i >= 0; --i)
	{
		std::cout << "\n";
		for (int j = i; j < n - 1; ++j)
		{
			sum = sum + v[i][j + 1] * X[j + 1];
		}
	    X[i] = v[i][n] / v[i][i] - sum;
		sum = 0;
	}
}

void zero_sub_pivoti(vec_2D& v, int n)
{
	double z;

	for (int i = 1; i <= n - 1; ++i)
	{
		for (int j = i; j <= n - 1; ++j)
		{
			z = v[j][i - 1] / v[i - 1][i - 1];

			for (int k = i - 1; k <= n; ++k)
				v[j][k] = v[j][k] - k * v[j - 1][k];
		}
	}
}