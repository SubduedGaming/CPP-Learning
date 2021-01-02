#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::cin;
using std::string;

//Variables
string game;
int lives;
int points;
int num1;
int num2;
int random;
int r1;

void playing()
{
    cout << "Hello, would you like to play a game? ";
    cin >> game;
    if (game == string("yes")){
        cout << "awesome \n";
    }
    else{
        cout << "Fair well";
    }
}



int new_game()
{
    r1 = 3;
    int random = (rand() % 10);
    num1 = random;
    string h_l;
    cout << "Game Starting \n";
    cout << num1 << "\n" << "Higher or Lower\n";
    cin >> h_l;
    while (lives > 0)
    {
        h_l = "";
        while (r1 > 0){
            int random = (rand() % 10);
            num1 = num2;
            num2 = random;
            cout << num1 << "\nHigher or Lower\n";
            if (h_l == "higher"){
                if (num2 >= num1){
                points = points + 1;
                cout << "Nice Job" << "\nYou have " << points << " points\n";
            }   else if (num2 >= num1){
                    lives = lives - 1;
                    cout << "WRONG, Try again";
            }
        }

        if (h_l == "lower"){
            if (num2 <= num1){
                points = points + 1;
                cout << "Nice Job" << "\nYou have " << points << " points\n";            
        } else if (num2 >= num1){
            lives = lives - 1;
            cout << "WRONG, Try again";
        }
    }
            }
        }
        int random = (rand() % 10);
        num1 = num2;
        num2 = random;
        if (h_l == "higher"){
            int r1 = r1 + 1;
            if (num2 >= num1){
                points = points + 1;
                cout << "Nice Job" << "\nYou have " << points << " points\n";
            } else if (num2 >= num1){
                lives = lives - 1;
                cout << "WRONG, Try again";
            }
        }

        if (h_l == "lower"){
            if (num2 <= num1){
                points = points + 1;
                cout << "Nice Job" << "\nYou have " << points << " points\n";            
        } else if (num2 >= num1){
            lives = lives - 1;
            cout << "WRONG, Try again";
        }
    }
}
}



int main()
{
    srand((unsigned) time(0));
    playing();
    if (game == string("yes")){
        cout << "Glad to see you want to play. \n The Game will begin shortly. \n";
        lives = 3;
        new_game();
    }


}

