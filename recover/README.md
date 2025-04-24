# 📸 Recover

## Overview
a C program that recovers JPEG images from a forensic image of a memory card. It works by scanning for JPEG signatures in 512-byte blocks, then writing each image it finds to a separate file named ###.jpg.

## 🧠 Understanding

Digital cameras often “delete” images by marking them as free space rather than wiping them. This program scans a raw memory card image (card.raw), detects the beginning of JPEGs using their unique byte signatures, and reconstructs them.

JPEGs are stored contiguously in blocks of 512 bytes. Each JPEG starts with the byte pattern: **0xff 0xd8 0xff 0xe0 to 0xef**

## 💻 How It Works

- Accepts exactly one command-line argument – the name of the forensic image.
- Opens the file for reading and reads it 512 bytes at a time.
- Looks for JPEG signatures in the first 4 bytes of each block.
- When a new JPEG is found:
  - Closes the previous JPEG file (if any).
  - Creates a new file named ###.jpg (starting from 000.jpg).
  - Writes blocks to the file until a new JPEG is found or the end is reached.
