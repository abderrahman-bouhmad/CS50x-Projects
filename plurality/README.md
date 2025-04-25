# 🗳️ Plurality

## Overview
A C program that simulates a **plurality election**. The program accepts candidate names as **command-line arguments**, collects votes from users, and prints the name(s) of the candidate(s) with the most votes

## How It Works

- On program start:
  - Takes candidate names as command-line arguments
  - Initializes each candidate with 0 votes
- During voting:
  - Prompts each voter to input a candidate’s name
  - Checks if the name matches a valid candidate
    - If so, increments that candidate’s vote count
    - If not, prints "Invalid vote."
- After voting:
  - Finds the candidate(s) with the most votes
  - Prints their name(s)

## 📸 Example Output <img width="1075" alt="Screenshot" src="https://github.com/user-attachments/assets/ea0b0b47-fb49-4cb0-9678-660a06f888de" />
