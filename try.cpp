//Checking whether the number is palindrome
//ONLY FOR NUMBERS
#include <iostream>
using namespace std;

int main()
{
     int k, num, digitOf, rev = 0;

     cout << "Enter a positive number: ";
     cin >> num;

     k = num;

     do
     {
         digitOf = num % 10;
         rev = (rev * 10) + digitOf;
         num = num / 10;
     } while (num != 0);

     cout << " The reverse of the number is: " << rev << endl;

     if (k == rev)
         cout << " The number is a palindrome.";
     else
         cout << " The number is not a palindrome.";

    return 0;
}
