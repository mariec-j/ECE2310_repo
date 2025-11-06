# About Me: Lab04

## Objective
A continuation of Lab03. Students will create methods with parameters that take in 
pointers. They will learn the difference between pass by value and pass by reference 
calls and implement them in the object from the previous lab. The data structure,
set, is also explored a little since it will be used as well as vector
for the Game class.


Time spent: **4-5** hours spent in total



## Features

The following **required** features are completed:

- [x] Create and finish the RPG.h and RPG.cpp files
- [x] Create and finish the Game.h and Game.cpp files
- [x] Create main.cpp and use it to test if the class files operate


## Screenshot and/or Video Walkthrough

### main.cpp's output on terminal
![](<images04/mainImage.png>)

- The first line including `live players: ...` was leftover from debugging oopsies
- Is there like, conventions about taking out debugging stuff?

## Assignment Notes:

- I remember wanting to write something down here but then i got sidetracked and forgot


## Debug Notes:

### 10/29/25 - 1pm - ~1Hr spent

Random Number Generator not working
- Utilized a good amount of ChatGPT for assistance
- The problem was not putting static at line 37 (`random_device rd;`) and 38 (`random_device rd;`) in Game.cpp
- Not having it there accidently generates the same random thing, which will make the function constantly output the same number
    - Used to constantly output 5 without it
    - Would cause an infinitely recursive loop in `battleRound()`
- Hopefully no issue in putting static there
- Otherwise the code is functional and probably ready to demo

### 11/06/25 - 3:30pm - <10 spent

Utilizing `<chrono>` to make random generator
- Chrono makes it so that a clock is used for seed generation
- makes it more random
- Everytime program runs it will actually be randomized
- Thank you cplusplus.com