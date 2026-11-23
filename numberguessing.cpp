
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));

    int number, guess;
    int attempts = 0;
    char choice;

    cout << "       NUMBER GUESSING GAME       " << endl;
    

    do
    {
        number = rand() % 100 + 1;
        attempts = 0;

        
        cout << "Guess the number betwen 1 to 100" << endl;

        do
        {
            cout << "\nEnter your guess: ";
            cin >> guess;

            attempts++;

            if (guess > number)
            {
                cout << "Too High! Try a smaller number." << endl;
            }
            else if (guess < number)
            {
                cout << "Too Low! Try a bigger number." << endl;
            }
            else
            {
                cout << "\nCongratulations! You guessed it right!" << endl;
                cout << "The correct number was: " << number << endl;
                cout << "Total attempts: " << attempts << endl;
            }

        } while (guess != number);

        cout << "\nDo you want to play again? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "\nThanks for playing!" << endl;
    return 0;
}
