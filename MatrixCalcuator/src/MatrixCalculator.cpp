#include "MatrixCalculator.h"
template<class T>
MatrixCalculator<T>::MatrixCalculator()
{

}
template<class T>
MatrixCalculator<T>::Menu(){
   cout<<"Please, enter your name :"<<endl;
   string name;
   cin>>name;
   cout<<"Welcome to "<<name<<" Matrix Calculator"<<endl;
   cout<<"----------------------------------------"<<endl;
   cout<<endl;
while (true){
   cout<<"  1- Perform Matrix Addition \n  2- Perform Matrix Subtraction \n  3- Perform Matrix Multiplication \n  4- Matrix Transpose \n   press 5 to exit"<<endl;
   int choice;
   cin>>choice;
   if (choice==1){
    cout<<"Please, enter 2 matrices you would like to add "<<endl;
    Matrix<T>mat1;
    Matrix<T>mat2;
    cin>>mat1;
    cin>>mat2;
    if (mat1.getcol()==mat2.getcol() && mat1.getrow()==mat2.getrow()){
        cout<<"sum "<<endl;
        cout<<mat1+mat2<<endl;
      }
    else {
        cout<<"INVALID"<<endl;
    }
   }
   else if (choice==2){
    cout<<"Please, enter 2 matrices you would like to subtract "<<endl;
    Matrix<T>mat1;
    Matrix<T>mat2;
    cin>>mat1;
    cin>>mat2;
    if (mat1.getcol()==mat2.getcol() && mat1.getrow() ==mat2.getrow() ){
        cout<<"Difference "<<endl;
        cout<<mat1-mat2<<endl;
      }
    else {
       cout<<"INVALID"<<endl;
       break;
    }

   }
   else if (choice==3){
    cout<<"Please, enter 2 matrices you would like to multiply "<<endl;
    Matrix<T>mat1;
    Matrix<T>mat2;
    cin>>mat1;
    cin>>mat2;
    if (mat1.getcol()==mat2.getrow()){
        cout<<"Product "<<endl;
        Matrix<T>mat3;
        mat3 = mat1*mat2;
        cout<<mat3<<endl;
      }
    else {
       cout<<"INVALID"<<endl;
       break;
    }

   }
   else if (choice==4){
    cout<<"Please, enter matrix you would like to transpose "<<endl;
    Matrix<T>mat1;
    cin>>mat1;
    cout<<"Transpose "<<endl;
    cout<<mat1.Transpose()<<endl;
    break;

   }
   else if (choice==5){
    cout<<"thanks for using MATRIX CALCULATOR!"<<endl;
    break;
   }
   else {
    cout << "invalid choice"<<endl;
    continue;
   }}}

template<class T>
MatrixCalculator<T>::~MatrixCalculator()
{

}
