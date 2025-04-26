# 🗳️ Runoff

## Overview
A C program that simulates a **ranked-choice runoff election**. Voters rank candidates by preference, and the program calculates the winner through multiple rounds of voting until a candidate secures a majority or a tie occurs

## How It Works

- Prompts for the number of voters and candidates
- Each voter ranks the candidates in order of preference
- The election proceeds in rounds:
  - Count votes based on highest-ranked non-eliminated candidate
  - Check if any candidate has a majority
  - If no majority:
    - Eliminate candidate(s) with the fewest votes
    - Detect ties between remaining candidates
    - Dynamically update votes after each round
  - Repeat the process until a winner is found or a tie occurs

## 📸 Example Run
<img width="726" alt="Screenshot" src="https://github.com/user-attachments/assets/c81f78e7-ea25-4d41-8aba-6d9db3cb87d7" />
