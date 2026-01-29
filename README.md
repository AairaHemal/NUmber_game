# NUmber_game
#🎯 Number Guessing Game (C++)
A lightweight, terminal-based game where the player attempts to guess a randomly generated number within a custom range. You only get three tries—make them count!

🚀 Features
Custom Range: The player defines the difficulty by setting the minimum and maximum possible numbers.
Smart Hints: The program tells you if your guess is too high or too low.
Limit System: Integrated guess counter to track attempts and enforce a lose condition.

🛠️ How to Run
Clone the project or copy the source code into a file named main.cpp.
Compile using a C++ compiler (like G++) or gcc.
g++ main.cpp -o GuessingGame

Execute the program:
./GuessingGame

🎮 How to Play
Enter a minimum and maximum value (e.g., 1 50).
The computer will secretly pick a number in that range.
You have 3 attempts to guess the number.
Follow the hints ("Smaller" or "Larger") to narrow down your search!

🧠 Logic Breakdown
The game utilizes the <cstdlib> and <ctime> libraries to seed the random number generator based on the system clock. This ensures that every time you play, the secret number is different.
