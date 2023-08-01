# Number Guessing Game

Welcome to the Number Guessing Game! This game tests your luck and analytical abilities. In this game, a secret number is selected between 1 to 100 (both inclusive). Your objective is to guess the number correctly.

## Game Rules

1. There are three levels in this game, each with a different number of attempts:
   - Level Easy: 10 Attempts.
   - Level Medium: 7 Attempts.
   - Level Hard: 5 Attempts.

2. Feeling a bit tough? Don't worry, you have a limit of 3 hints that can be used between any of the attempts.

3. Play wisely and good luck!

## How to Play

1. Clone or download this repository to your local machine.

2. Compile and run the game using a C++ compiler (ensure C++11 or later is supported).

3. The game will prompt you to select a level:
   - Enter '1' for Easy
   - Enter '2' for Medium
   - Enter '3' for Hard

4. The game will generate a random secret number within the specified range for the selected level.

5. You have the given number of attempts to guess the secret number. Enter your guess when prompted.

6. If your guess is correct, congratulations! You've guessed the number, and the game ends.

7. If your guess is incorrect, the game will provide you with hints (if available) to help you guess the number.

8. Continue guessing until you find the secret number or run out of attempts.

9. If you run out of attempts, the game will reveal the secret number, and you can try again or exit.

## How to Use Hints

1. During your attempts, the game may offer you the option to use a hint.

2. If you choose to use a hint, enter 'yes' or 'YES' or 'Yes' when prompted.

3. You have a total of three hints that can be used in any combination during your attempts.

## Compiling and Running the Game

To compile and run the game, you need a C++ compiler that supports C++11 or later. For example, using g++:

```bash
g++ -std=c++11 -o number_guessing_game number_guessing_game.cpp
./number_guessing_game
