# About Me: LAB05

## Objective
Students are to copy provided code that includes the parent class,
Pokemon, and the child class, Charmander, and analyze the code.
Comprehension questions are provided in the actual Canvas assignment,
so they are not provided here (i do not feel like adding it here).


Time spent: **4** hours spent in total
(probably could've been less than 1.5... had i
not distracted myself with getting makefile to work)



## Features

The following **required** features are completed:

- [x] Copy Pokemon.h, Pokemon.cpp, Charmander.h, Charmander.cpp, and main.cpp
- [x] Answer the Comprehension questions



## Screenshot and/or Video Walkthrough

### (Q2) main.cpp's output on terminal, no edits from Comprehension questions
![picture of terminal after running main.exe](<images05\Screenshot 2025-10-23 021334.png>)

- Pokemon constructor was used first, then Charmander
- All speak functions used the Charmander version of the function

### (Q4) main.cpp output, virtual removed from `virtual void speak()`
![Q4 terminal output)](<images05/Screenshot 2025-10-23 021350.png>)

- Dynamic binding to a static binding
- p1 is a pointer to Pokemon, meaning it'll use the Pokemon's version of speak()
- Since Charmander is a child of Pokemon, it'll run

### (Q6) main.cpp's output, `Pokemon::` removed from Charmander `printStats()`
![Q6 terminal output](<images05/Screenshot 2025-10-23 021435.png>)

- Nothing was output under printStats()
- Creates a recursive loop that is infinite without the right scope

### second main.cpp output test
![Q7 terminal output... Compile time error. hi](<images05/Screenshot 2025-10-23 021452.png>)

- Error was in compile-time
- Charmander could not access the variables within Pokemon due to them being private



## Notes:
- 