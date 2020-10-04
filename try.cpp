//a number guessing game from 1 - 100
#include <cstdlib>
#include <time.h>
#include <iostream>

using namespace std;

int main() {
      srand(time(0));
      int num;
      num = rand() % 100 + 1;
      int guess;
      do {
            cout << "Enter a number of your choice between 1-100: ";
            cin >> guess;
            // with this line ↓ you could see what happens
            cout << "Your number is " << guess << " and the hidden number is " << num << endl;
            if (guess < num)
                  cout << "Sorry, try again, it's smaller than the hidden number!" << endl;
            else if (guess > num)
                  cout << "Sorry, try again, it's bigger than the hidden number!" << endl;
            else
                  cout << "The number is correct! Congratulations!" << endl;
      } while (guess != num);
      system("PAUSE");
      return 0;
}
