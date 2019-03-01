#include <cstdlib>
#include <iostream>
#include "_pause.h"

using namespace std;

int divider(int x, int y) {return x/y;}

int main () {

    int num[6],x=0;

    cout << "Enter 6 non-zero integers to be divided (two integers per division)" << endl;
    cout << endl;
        while(x<6)
        {cout << "Input number [" << x+1 << "]: ";
        cin >> num[x];
        x++; }

    x=0;

    cout << endl;
        while(x<6)
        {cout << "Quotient: " << num[x] << "/" << num [x+1] <<
                    " = " <<divider(num[x],num[x+1]) << endl; x=x+2;}    



system("pause");
return EXIT_SUCCESS;
}
