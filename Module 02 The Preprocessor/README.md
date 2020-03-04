## Instructions
Complete ALL of the following tasks.

## 1. VERBOSE LOGGING
In a header, write a macro called VERBOSE_LOG.

Parameter: message

Effects:

- Uses std::cout to print the file where it's used.
- Uses std::cout to print the name of the function where it's used.
- Uses std::cout to print the line where it's used.
- Uses std::cout to print the message and add a line break.
- Makes the output easy to read by adding spaces where necessary.
Also include a switch-type object macro for turning the verbose logging feature "on" or "off".

- When verbose logging is "on" the macro should perform logging as above.
- When it is "off," the macro should do nothing.

#### Important
Turning "off" verbose logging should not require the programmer to remove VERBOSE_LOG calls!

// should compile even if verbose logging is "turned off"
VERBOSE_LOG("Player entered lobby.");

## 2. CODE GENERATION
In a header, write a macro called PRIVATE_VARIABLE_WITH_PUBLIC_GETTER_AND_SETTER.

Parameters: type, id

Effects: does all of the following:

- Declares a private variable using type as data type. Its identifier should be m_id, for example, if foo is entered, it should get named m_foo.
- Declares an inline public setter function for the new variable. It should work like a typical setter.
- Declares an inline public getter function for the new variable. It should work like a typical getter.
Example usage:

class MyClass
{
PRIVATE_VARIABLE_WITH_PUBLIC_GETTER_AND_SETTER(int, foo)
};

- Declares private variable int m_foo.
- Defines public function void Setfoo(int value) { m_foo = value; }.
- Defines public function int Getfoo() { return m_foo; }.

If your program uses getters and setters, then use this macro in your program! If not, simply defining the macro is enough.

BONUS: The simple solution to this will slightly break the GAP coding standards. Write a version that does not break the coding standards.

## 3. DEBUG FEATURE
Pick a game you previously implemented in C++. Design one debug feature to add to this game. This can be any feature that could be helpful for testing, but that breaks the game experience, and you would not want every end user to have access to. For example, you might be able to press a button that lets you enter an x,y coordinate and move the player character instantly.

Implement the chosen debug feature. Then set up preprocessor directives to allow your program to compile in two modes: debug and release.

- Debug mode should include the debug feature(s).
- Release mode should not include any debug features.

BONUS: Write a debug panel with three or more features. This panel should appear in your game with the press of a button, and give someone the info they need to use the features.

## Purpose
To learn about the use cases where macro objects, macro functions, and conditional compilation really shine.