# 📚 Readability

## Overview
A C program that determines the **readability grade level** of a given text using the **Coleman-Liau index**. It analyzes the number of letters, words, and sentences to estimate the U.S. 

## How It Works

- Prompts the user to input a block of text
- Counts:
  - **Letters** (alphabetical characters)
  - **Words** (separated by spaces)
  - **Sentences** (ending in ., !, or ?)
- Calculates the **Coleman-Liau index**:
  - index = 0.0588 * L - 0.296 * S - 15.8
  - L = average number of letters per 100 words
  - S = average number of sentences per 100 words
- Prints:
  - "Grade X" if index is between 1 and 16
  - "Before Grade 1" if index < 1
  - "Grade 16+" if index ≥ 16

## 📸 Example Output <img width="1079" alt="screenshot5" src="https://github.com/user-attachments/assets/e7a6b7d2-669a-480e-ae03-ffdcee6a2e63" />
