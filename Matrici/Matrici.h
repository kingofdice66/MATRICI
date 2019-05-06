#ifndef MATRICI_H_
#define MATRICI_H_

#include <iostream>
#include <vector>

using vec_2D = std::vector<std::vector<double>>;
using vec_1D = std::vector<double>;



void arata(const vec_2D& v, const vec_1D& X, int n);

void comuta(vec_2D& v, int n);

void rezolvare(vec_2D& v, vec_1D& X, int n);

void zero_sub_pivoti(vec_2D& v, int n);

#endif // ~MATRICI_H_
