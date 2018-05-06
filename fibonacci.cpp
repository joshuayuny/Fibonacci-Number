// Example program
#include <iostream>
using namespace std;
int fib(int);

int main()
{
  int n = 6;
  cout << fib(n);
  cout << endl;
  return 0;
}
//  Calling the function
int fib(int num)
{
// First Base case
 if(num == 1)
 {
     return 1;
 }
 // Second Base Case
 else if(num == 2)
 {
    return 1;
 }
 /* Recursion Case; AKA Repeating
   fib = repeats and adds them until reaches base Case then stops and goes back
    to the first n = 6
*/
 return fib(num - 1) + fib(num - 2);
}
