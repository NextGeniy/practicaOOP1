#include "matrix.h"
#include <iostream>
#include <number.h>

using namespace std;





Matrix::Matrix(int size) {
    Arr = new number*[size];
    for(int i = 0; i < 1; i++)
    {
        Arr[i] = new number[size];
    }
    for(int i = 0; i < size; i++)
    {
        Arr[i] = new number[size];
    }
    for (int i=0;i<size;i++)
    {
        for (int j=0;j<size;j++)
        {
            Arr[i][j]=(number) rand() / RAND_MAX * (33);

        }
    }
}


void Matrix::ShowMatrix(int size,number **Arr)
{
    for (int i=0;i<size;i++)
    {
        for (int j=0;j<size;j++)
        {
            cout<<Arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
void Matrix::EnterMatrix(int size,number **Arr)
{
    for (int i=0;i<size;i++)
    {
        for (int j=0;j<size;j++)
        {
            cin>>Arr[i][j];
        }
    }
}
number Matrix::DetMatrix(number **Arr){
    number det=0.0;
    det=Arr[0][0]*Arr[1][1]*Arr[2][2]+Arr[0][2]*Arr[1][0]*Arr[2][1]+Arr[0][1]*Arr[1][2]*Arr[2][0]-Arr[0][2]*Arr[1][1]*Arr[2][0]-Arr[0][0]*Arr[1][2]*Arr[2][1]-Arr[0][1]*Arr[1][0]*Arr[2][2];
    return det;
}

/*ostream& operator<< (ostream& os,Matrix& p){
                                            os<<p.DetMatrix()
}*/
Matrix::~Matrix(){
    for(int i=0;i<size;i++)
    {
        delete[] Arr[i];
    }
    delete[] Arr;
}
