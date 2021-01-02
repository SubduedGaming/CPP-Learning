#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::cin;

//Variables
int lives;
int points;
int num1;
int num2;
int random;

int random_number()
{
    srand((unsigned) time(0));
    int num2 = (rand() % 10);
    cout << random;
}

 int new_number()
 {
     int random = (rand() % 10);
     num1 = num2;
     num2 = random + 1;
 }


int main()
{
     //random_number;
     //while (lives == 0){
          //srand((unsigned) time(0));
         // int random = (rand() % 10);
          srand((unsigned) time(0));
          new_number;
          cout << (num2);
          //new_number;
          //cout << num2 << "\n";
    // }
}