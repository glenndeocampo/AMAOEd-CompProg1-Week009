#include <cstdlib>
#include <iostream>
#include "_pause.h"

using namespace std;

void dgt(short num)
    {string dgt=to_string(num);
    cout << endl<< "Result: ";
  for (int x=0; x <dgt.length();x++)  
  {cout << dgt[x] << " ";}}

int main() {

    short num=0;

  do
    {cout << "Please enter number from 10 to 99: ";
    cin >> num;}
  while (num<10 and num>99);

  dgt(num);    


system("pause");
return EXIT_SUCCESS;
}
