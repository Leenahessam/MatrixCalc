#ifndef MATRIX_H
#define MATRIX_H
#include <iomanip>
#include <iostream>
using namespace std;

template <class T>
class Matrix
{
private:
    T** Data;  // Pointer to 2-D array that will simulate matrix
    int row, col;
public:
    Matrix();
    virtual ~Matrix();
    Matrix (int row, int col);
    Matrix operator+  (Matrix mat1); // Add if same dimensions
    Matrix operator-  (Matrix mat1); // Sub if same dimensions
    Matrix operator*  (Matrix mat1); // Multi if col1 == row2
    Matrix Transpose  ();
    int getcol();
    int getrow();
    Matrix operator=  (Matrix mat1);
    friend istream& operator>> (istream& in, Matrix<T>& mat)
    {
        cout<< "Enter no. of rows :" ;
        in>>mat.row ;
        cout<<"Enter no. of cols :" ;
        in >>mat.col ;
        mat.Data = new T*[mat.row];
        for(int i =0; i < mat.row ; i++)
            mat.Data[i]= new T [mat.col];
        for(int i =0; i < mat.row ; i++)
        {
            for(int j = 0; j < mat.col; j++)
            {
                in >> mat.Data[i][j];
            }

        }

        return in;
    }
    friend ostream& operator<< (ostream& out, Matrix<T> mat){
     for (int i = 0; i < mat.row; i++){
        for (int j = 0; j <mat.col; j++){

            out << mat.Data[i][j] <<" ";
        }
        out << endl ;
        }
        return out;
    }

};

template class Matrix<int>;
template class Matrix<float>;
template class Matrix<double>;
template class Matrix<long>;
#endif // MATRIX_H
