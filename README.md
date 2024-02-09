# Rock-Paper-Scissors Game

This C++ program implements a simple console-based Rock-Paper-Scissors game where the user can play against the computer. The game provides a menu for the user to choose Rock, Paper, or Scissors and displays the result of each round. The user can quit the game at any time.

## How to Play

1. Run the program.
2. Choose an option from the menu:
    - Enter `1` for Rock
    - Enter `2` for Paper
    - Enter `3` for Scissors
    - Enter `4` to Quit

3. The computer will randomly choose Rock, Paper, or Scissors.
4. The winner of the round will be displayed.
5. Scores will be updated, showing the user's and computer's current scores.
6. The user can choose to play again or quit the game.

## Implementation Details

- The program uses the `rand()` function to generate a random number for the computer's choice.
- The winner is determined based on the rules of Rock-Paper-Scissors.
- The game continues until the user chooses to quit.

## Build and Run

To compile and run the program, you can use any C++ compiler. For example, using g++:

```bash
g++ rock_paper_scissors.cpp -o rock_paper_scissors
./rock_paper_scissors
```

## License

This project is licensed under the [MIT License](LICENSE). Feel free to use and modify the code as needed.

## Author

- Abdul Mehad

Feel free to contribute, provide feedback, or report issues. Enjoy the game!
