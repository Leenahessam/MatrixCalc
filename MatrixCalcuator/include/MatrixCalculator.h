#ifndef MATRIXCALCULATOR_H
#define MATRIXCALCULATOR_H
#include "Matrix.h"
template <class T>
class MatrixCalculator
{
    public:
        MatrixCalculator();
        int Menu();
        virtual ~MatrixCalculator();

};
template class MatrixCalculator<int>;
template class MatrixCalculator<float>;
template class MatrixCalculator<double>;
template class MatrixCalculator<long>;
#endif // MATRIXCALCULATOR_H
