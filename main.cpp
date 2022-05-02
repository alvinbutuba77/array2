//an array to display in reverse order.

#include <iostream>
using namespace std;

int main()
{

   int a [5] = { 10, 20, 30, 40, 50}; // initializer list.
   int i; //counter variable
   int j;
   int sum = 0, avg = 0;


   cout << "display in normal order:\n ";

   for(i = 0; i < 5; ++i)  //loop to display
   {
       cout << "\n" << a [i];
   }

   cout <<"\n display in reverse order:\n ";
   for (j = 5; j>= 0; --j)
   {
       cout << "\n" << a [j];
   }

   for (i = 0; i < 6; ++i)
    {
    sum = sum + a[i];
    avg = sum / 6;
    }

    cout <<"\n sum is: "<< sum;
    cout <<"\n avg is: "<< avg;



}//end main
