# Morse-Code-translator

A simple C++ program that translates between text and Morse code.
I built this project to practice working with functions, strings, maps, user input, loops, and conditionals.

## Features 
- Convert text to Morse code.
- Convert Morse code to text.
- Supports all English letters (A-Z).
- Uses / to represent spaces between words.
- Detects invalid input and displays an error message.
- Simple menu-based interface.

## How It Works
The program uses two map containers:
- `map<char, string>` stores letters and their Morse code equivalents.
- `map<string, char>` stores Morse code and their corresponding letters.

The program has two main conversion functions:
- ToMorse() - Converts regular text to Morse code.
- ToText() - Converts Morse code to regular text.

## Technologies 
- C++
- Standard library
- iostream
- string
- map
- cctype

## What I Learned 
- Using std::map
- Working with strings and characters
- Creating functions
- Using loops and conditionals
- Basic input validation
- Structuring a small C++ application.
