# 🎂 Birthdays

## Overview
A Flask web application that lets users keep track of friends' birthdays. Users can add birthdays via a form, and view all entries in a table. Data is stored in a SQLite database.

## How It Works

- On page load (`GET /`):  
  - Fetches all entries from the `birthdays` table in `birthdays.db`  
  - Renders them as rows in a table on the page

- On form submit (`POST /`):  
  - Gets user input: name, month, and day  
  - Validates the input  
  - Adds the new birthday to the database  
  - Redirects to show the updated list

## Features

- Add a birthday (name, month, day)
- View all birthdays in a table
- Basic server-side validation

## Technologies

- Python  
- Flask  
- SQLite  
- HTML (Jinja templating)  
- CSS

## 📸 Screenshot of the app ![Image](https://github.com/user-attachments/assets/26474e21-1aa2-4ec3-897e-bd3dec66a5f4)
