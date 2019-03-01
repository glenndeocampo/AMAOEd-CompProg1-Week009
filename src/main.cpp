#include <cstdlib>
#include <iostream>
#include "_pause.h"

using namespace std;

int fib (int num)
    {int a=0,b=1,c=0;
  if (num==0)
    {return num;}
  else {for(int i=2;i<=num;i++)
    {c=a+b; a=b; b=c;}
  return b;}}

int main() {

    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << endl;
    cout << "The nth Fibonacci number is: ";
    cout << fib(num);

system("pause");
return EXIT_SUCCESS;
}