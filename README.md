# Number Guessing Game

Welcome to the Number Guessing Game! The objective of the game is to guess a randomly generated number within a given number of attempts. The game provides different difficulty levels with varying chances to guess the correct number. 

## Features
- Three difficulty levels:
  - **Easy**: 10 chances to guess
  - **Medium**: 5 chances to guess
  - **Hard**: 3 chances to guess
- You will receive feedback on whether your guess is higher or lower than the generated number.
- After guessing, you will be congratulated for correct guesses and given the option to play again.
- If you exhaust all your chances, the game will inform you of your loss and ask if you would like to try again.

## How to Play
1. **Select Difficulty Level**: Choose a difficulty level by entering a number between 1 and 3:
   - 1: Easy (10 chances)
   - 2: Medium (5 chances)
   - 3: Hard (3 chances)
   
2. **Guess the Number**: Once the level is selected, you will have a certain number of chances to guess the randomly generated number.
   - After each guess, you will receive feedback:
     - "The number is greater than your guess" or "The number is less than your guess."
   
3. **Correct Guess**: If you guess the correct number, you will be congratulated and offered the option to play again.
   
4. **Game Over**: If you use up all your chances without guessing the correct number, you will be informed that you lost and given the option to play again.

## Installation

To run the Number Guessing Game, follow these steps:

1. Clone this repository to your local machine:
   ```bash
   git clone https://github.com/sagili-manoj/Number_Guessing_Game_c-
   g++ -o Game Game.cpp
   ./Game

# Example Run
*************Welcome to the Number Guessing Game*************
You can have your chances according to your selection Level

Please Select the Difficult Level
1. Easy (10 chances)
2. Medium (5 chances)
3. Hard (3 chances)

Enter Your Choice : 1

Great You have selected Easy difficult level.
Let's start the Game
Enter Your Guess : 45
Incorrect! The number is greater than 45

Enter Your Guess : 67
Congratulations! You have Guessed the correct number in 2 attempts.
Do you want to play Again? Enter Y/y to play Again or any other to exit:
