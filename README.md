
**tic-tac-toe-cpp-console**

## README.md

```markdown
# Tic Tac Toe C++ Console

A simple **two-player Tic Tac Toe game** implemented in C++ for the console. This project was developed as a Programming Fundamentals semester project at UMT Lahore.

## Features

- **Two-player mode:** Both players enter nicknames and choose their symbols.
- **Interactive console UI:** Board updates after each move.
- **Win detection:** Automatically checks for row, column, and diagonal wins.
- **Score tracking:** Keeps track of total wins for each player.
- **Replay option:** Players can choose to play multiple rounds.
- **Input validation:** Ensures moves are legal and positions are not reused.

## Getting Started

### Prerequisites

- C++ compiler (e.g., g++, clang++)
- Console/terminal access

### Compilation

To compile the code, run:

```
g++ -o tictactoe old.cpp
```

### Running the Game

After compiling, run:

```
./tictactoe
```

## How to Play

1. **Start the game:** Both players will be prompted to enter their nicknames and choose their symbols (e.g., X or O).
2. **Take turns:** Players enter the number (1-9) corresponding to the board position where they want to place their symbol.
3. **Winning:** The game checks for a win after each move. If a player aligns three of their symbols in a row, column, or diagonal, they win the round.
4. **Draw:** If all positions are filled without a winner, the round is declared a draw.
5. **Replay:** After each round, you can choose to play again or exit.

## Example Board Layout

```
 1 | 2 | 3
---|---|---
 4 | 5 | 6
---|---|---
 7 | 8 | 9
```

## Project Information

- **Author:** Muhammad Shakaib Arsalan
- **Course:** Programming Fundamentals (Semester 01)
- **Instructor:** Muhammad Awais Ali
- **Institution:** School of System & Technology, UMT Lahore

## License

This project is for educational purposes.

```
