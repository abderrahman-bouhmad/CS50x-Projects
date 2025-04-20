# 🎶 Songs

A project that involves querying an SQLite database containing information about songs from Spotify using SQL. The goal is to answer various queries related to songs and artists.

## 🧠 What It Does

This project uses an SQLite database to retrieve and analyze data from the top 100 streamed songs on Spotify in 2018. SQL queries to answer a series of questions related to the songs, their artists, and their attributes.

   **The following queries are implemented in separate .sql files**
   - List all songs in the database.
   - List songs in increasing order of tempo.
   - List the top 5 longest songs, in descending order of length.
   - List songs with danceability, energy, and valence greater than 0.75.
   - Find the average energy of all the songs.
   - List songs by Post Malone.
   - Find the average energy of songs by Drake.
   - List songs featuring other artists (indicated by "feat." in the title).

## 🌐 Technologies Used

- SQLite

## 📜 Database Schema
Here’s the schema of the songs.db database:

```sql
CREATE TABLE songs (
    id INTEGER,
    name TEXT,
    artist_id INTEGER,
    danceability REAL,
    energy REAL,
    key INTEGER,
    loudness REAL,
    speechiness REAL,
    valence REAL,
    tempo REAL,
    duration_ms INTEGER
);

CREATE TABLE artists (
    id INTEGER,
    name TEXT
);
