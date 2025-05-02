# 📝 Speller

## Overview
a program that checks the spelling of words by comparing them against a dictionary. This is accomplished by loading the dictionary into memory, then checking if each word in a given text is correctly spelled.

## File Structure

- speller.c: Contains the main logic for running the spell checker.
- dictionary.c: Contains the implementation for loading the dictionary into memory, checking for words, and managing the hash table.
- dictionary.h: Contains declarations for functions like load(), hash(), check(), size(), and unload().
- Makefile: Automates compilation, specifying how to build the program.
- dictionaries/: A directory containing dictionary files that are used by the program. These dictionaries are provided as word lists for spell checker to load into memory.
- texts/: A directory containing text files that can be spell-checked
  
## How It Works

- Loading the Dictionary:
  - The program will load a dictionary from a file into memory (using a hash table).
  - Each word in the dictionary will be processed and stored in the hash table.
  - The load() function is responsible for opening the dictionary, reading words, and inserting them into the hash table.
- Checking the Spelling:
  - For each word in the input text, the program checks if it exists in the dictionary.
  - The check() function will hash each word and look it up in the hash table to determine whether it is spelled correctly. and it's case-insensitive.
- Unloading the Dictionary:
  - Once the spelling check is complete, the program frees the memory used by the dictionary to avoid memory leaks.
