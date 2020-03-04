## Instructions
Download the Visual Studio solution below. Complete the tasks below by modifying the downloaded solution.

Before beginning, study the provided program and run it in both unit test mode and interactive sandbox mode. Use the sandbox mode to get a feel for how it works. Try to understand every part of the program before continuing.

Once ready, complete all tasks below. When the tasks are complete, the program should still function the same way as before.

## Typedef and Using
    1. In Deck.cpp, add a using statement making CardPile an alias for Card**.

    2. In Tests.h and in the DeckSandbox class, add using statements making PlayingCard an alias for Deck::Card.

## size_t
    3. Identify any and all variables whose type should be size_t. Remember that size_t is the expected type for calling new to create an array, or for indexing an array. Change all identified variables' data type to size_t.

## Enumerations
    4. Identify at least one good use case for an enumeration (there are actually three). Add that enumeration and replace all variables and/or functions to use that enumeration properly. Please use scoped enumeration(s) for this.

## Const-Correctness
    5. Identify all member variables that should be const and make them const.

    6. Identify all member functions that should be const and make them const.

    7. Identify all function parameters that should be const and make them const.

    8. Identify all local variables that should be const and make them const.

    9. Identify any pointers or references that can be changed to const pointers, pointers to const, or const references. Update them accordingly.

## Static Variables and Functions
    10. Identify variables that should be static. Make them static.

## To Improve Your Grade
If you complete the requirements above to a high level of quality, you can improve the program or add additional features as long as they meet the following:

- Don't prevent the program from compiling or working correctly.
- Are related to the existing program.
- Are done to a high level of quality.
- Are commented and follow the coding standards.

Here are some suggestions for additional tasks for this assignment:

- Add a static function to any class of your choice. Try to pick a good use case for a static function. Call this function somewhere in the program to demonstrate it.

## Purpose
Integral types, enums, constants, and the static keyword add nuance to any C++ program. They appear frequently so practice working with them so that you can become familiar with them.