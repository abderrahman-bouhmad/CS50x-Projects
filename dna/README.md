# 🧬 DNA

## Overview
A Python program that performs DNA profiling by analyzing Short Tandem Repeats (STRs) in a DNA sequence and matching them against a CSV-based DNA database.

## 🔬 What It Does
This program compares a given DNA sequence with a database of known STR counts for individuals to determine whose DNA it most likely is.

## How It Works
- Takes two command-line arguments:
  - A CSV file containing individuals and their STR counts.
  - A TXT file containing the DNA sequence to be analyzed.

- Reads the CSV into memory using csv.DictReader.
- Reads the DNA sequence from the TXT file.
- For each STR in the database:
  - Uses a helper function longest_match to compute the longest run of that STR in the DNA sequence.
- Compares the STR counts in the sequence with each individual's profile in the CSV.
- Prints:
  - The matching person's name if there's a match.
  - "No match" if no profiles match the STR counts.

## 📸 demo <img width="1078" alt="demo" src="https://github.com/user-attachments/assets/eac91ed3-4357-4af2-bca9-2716df5e95b1" />
