#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void displayMenu() {
    cout << "Rock-Paper-Scissors Game" << endl;
    cout << "1. Rock" << endl;
    cout << "2. Paper" << endl;
    cout << "3. Scissors" << endl;
    cout << "4. Quit" << endl;
}

int getUserChoice() {
    int choice;
    cout << "Enter your choice (1 for Rock, 2 for Paper, 3 for Scissors, 4 to Quit): ";
    cin >> choice;
    while (choice < 1 || choice > 4) {
        cout << "Invalid choice. Please enter a valid choice (1-4): ";
        cin >> choice;
    }
    return choice;
}

int getComputerChoice() {
    // Generate a random number between 1 and 3 for computer's choice
    return rand() % 3 + 1;
}

void determineWinner(int userChoice, int computerChoice, int &userScore, int &computerScore) {
    cout << "Computer chose: ";
    switch (computerChoice) {
        case 1:
            cout << "Rock";
            break;
        case 2:
            cout << "Paper";
            break;
        case 3:
            cout << "Scissors";
            break;
    }

    cout << endl;

    cout << "You chose: ";
    switch (userChoice) {
        case 1:
            cout << "Rock";
            break;
        case 2:
            cout << "Paper";
            break;
        case 3:
            cout << "Scissors";
            break;
    }

    cout << endl;

    // Determine the winner
    if (userChoice == computerChoice) {
        cout << "It's a tie!" << endl;
    } else if ((userChoice == 1 && computerChoice == 3) ||
               (userChoice == 2 && computerChoice == 1) ||
               (userChoice == 3 && computerChoice == 2)) {
        cout << "You win!" << endl;
        userScore++;
    } else {
        cout << "Computer wins!" << endl;
        computerScore++;
    }
}

int main() {
    srand(time(0));

    int userScore = 0;
    int computerScore = 0;

    do {
        displayMenu();
        int userChoice = getUserChoice();

        if (userChoice == 4) {
            break; // Quit the game if the user chooses option 4
        }

        int computerChoice = getComputerChoice();
        determineWinner(userChoice, computerChoice, userScore, computerScore);

        cout << "Scores - You: " << userScore << ", Computer: " << computerScore << endl;

        // Ask the user if they want to play again
        cout << "Do you want to play again? (1 for Yes, 0 for No): ";
        int playAgain;
        cin >> playAgain;

        if (playAgain != 1) {
            break; // Exit the loop if the user doesn't want to play again
        }

    } while (true);

    cout << "Thanks for playing!" << endl;

    return 0;
}
