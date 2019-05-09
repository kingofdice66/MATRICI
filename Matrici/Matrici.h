#ifndef MATRICI_H_
#define MATRICI_H_

#include <iostream>
#include <vector>

using vec_2D = std::vector<std::vector<long double>>;
using vec_1D = std::vector<long double>;



void arata_solutiile(const vec_1D& X, int n);

void arata_date_introduse(const vec_2D& v, int n);

void arata_din_nou(const vec_2D& v, int n);

void comuta(vec_2D& v, int n);

void rezolvare(vec_2D& v, vec_1D& X, int n);

bool zero_sub_pivoti(vec_2D& v, int n);

bool verificare_comutare(vec_2D& v, int n, int xi);

#endif // ~MATRICI_H_
