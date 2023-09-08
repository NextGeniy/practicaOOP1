#include "aplication.h"
#include "matrix.h"

#include <iostream>

using namespace std;

TApplication::TApplication()
{

}

int TApplication::exec()
{
    int ch;
    int size=3;
    Matrix matrix(size);
    while(true)
    {
        ch = menu();
        switch (ch) {
        case 1:
        {
            matrix.EnterMatrix(size,matrix.Arr);
        }
        break;
        case 2:
        {
            cout<<"det "<<matrix.DetMatrix(matrix.Arr)<<endl;
        }
            break;
      /*  case 3:



            break;
        case 4:



            break;*/
            case 5:
        {

            matrix.ShowMatrix(size,matrix.Arr);
        }
        break;

        case 0:

            return 0;
            default:cout<<"Wrong number, try again!"<<endl;
            break;
        }
    }

}
int TApplication::menu()
{
    int ch;
    cout<<"1 - enter values of matrix "<<endl<<"> ";
    cout<<"2 - count determinant and result"<<endl<<"> ";
    cout<<"3 - transponed matrix"<<endl<<"> ";
    cout<<"4 - show rang"<<endl<<"> ";
    cout<<"5 - show matrix"<<endl<<"> ";
    cout<<"0 - exit"<<endl<<"> ";
    cin>>ch;
    return ch;
}
