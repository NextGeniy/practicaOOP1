#ifndef MATRIX_H
#define MATRIX_H
#include "number.h"
#include <iostream>
using namespace std;
class Matrix
{
public:

    number **Arr;
    int size;
    Matrix(int size);
    void ShowMatrix(int size,number **Arr);
    void EnterMatrix(int size,number **Arr);
    number DetMatrix(number **Arr);
    //friend ostream& operator<<(ostream&,Matrix&);
    ~Matrix();
};
#endif // MATRIX_H
