#include "Matrix.h"
template <class T>
Matrix<T>::Matrix()
{

}
template <class T>
Matrix<T>::Matrix(int rows,int cols)
{
   row=rows;
   col=cols;
   Data = new T*[row];
   for (int i=0;i<row;i++){
    Data[i]= new T [col];
   }
}
template <class T>
int Matrix<T>::getcol(){
return col;
}
template <class T>
int Matrix<T>::getrow(){
return row;
}

template <class T>
 Matrix<T> Matrix<T>:: operator+ (Matrix mat1){
 Matrix result(row,col);
        for (int i = 0; i <mat1.row; i++)
            for (int j = 0; j <mat1.col; j++)
                result.Data[i][j]= Data[i][j] + mat1.Data[i][j];

        return result;
}

template <class T>
Matrix<T> Matrix<T> :: operator-(Matrix mat1){
 Matrix result(row,col);
        for (int i = 0; i <mat1.row; i++)
            for (int j = 0; j <mat1.col; j++)
                result.Data[i][j]= Data[i][j] - mat1.Data[i][j];

        return result;
}


template <class T>
Matrix <T> Matrix<T>:: operator* (Matrix mat1){
Matrix product (row,mat1.col);
        for (int i = 0; i <row; i++)
            for (int j = 0; j <mat1.col; j++)
            {
                int sum=0;
                for (int k=0; k<col; k++)
                    sum += Data[i][k] * mat1.Data[k][j];
                product.Data[i][j] = sum;
            }

        return product;
}

template <class T>
Matrix<T> Matrix<T>:: Transpose(){
    Matrix mat2 (col,row);

    for(int i=0 ; i < mat2.row; i++)
    {
        for(int j=0 ; j < mat2.col ; j++ )
        {
            mat2.Data[i][j] = Data[j][i];
        }
    }

    return mat2 ;}


template <class T>
Matrix<T> Matrix <T>::operator=  (Matrix mat1){
    row = mat1.row;
    col = mat1.col;
    Data = new T* [row];
    for(int i=0; i<row; i++)
        Data[i] = new T [col];
    for (int i=0; i<row; i++)
        for (int j=0; j<col; j++)
            Data[i][j] = mat1.Data[i][j];
    return *this;
}

template <class T>
Matrix<T>::~Matrix()
{
     for(int i=0; i<row; i++)
        delete [] Data[i];
     delete [] Data;
}
