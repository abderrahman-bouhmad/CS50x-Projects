# 🎬 Movies

A project that involves querying an SQLite database containing information about movies, ratings, actors, and directors. The goal is to answer various SQL questions based on data inspired by IMDb.

## 🧠 What It Does

   **The following queries are implemented in separate .sql files**
   - List all movies released in 2008.
   - Find the birth year of Emma Stone.
   - List movies released in or after 2018, alphabetically.
   - Count how many movies have a rating of 10.0.
   - List all Harry Potter movies with title and release year, chronologically.
   - Find the average rating of movies released in 2012.
   - List all 2010 movies with their ratings, ordered by rating then title.
   - List names of people who starred in *Toy Story*.
   - List names of people who starred in a 2004 movie, ordered by birth year.
   - List directors of movies with ratings ≥ 9.0.
   - List the 5 highest-rated movies Chadwick Boseman starred in.
   - List movies starring both Bradley Cooper and Jennifer Lawrence.
   - List actors who starred in a movie with Kevin Bacon (born 1958), excluding Kevin himself.


## 🌐 Technologies Used

- SQLite

## 📜 Database Schema
Here’s the schema of the `movies.db` database:

```sql
CREATE TABLE directors (
    movie_id INTEGER NOT NULL,
    person_id INTEGER NOT NULL,
    FOREIGN KEY(movie_id) REFERENCES movies(id),
    FOREIGN KEY(person_id) REFERENCES people(id)
);
CREATE TABLE movies (
    id INTEGER,
    title TEXT NOT NULL,
    year NUMERIC,
    PRIMARY KEY(id)
);
CREATE TABLE people (
    id INTEGER,
    name TEXT NOT NULL,
    birth NUMERIC,
    PRIMARY KEY(id)
);
CREATE TABLE ratings (
    movie_id INTEGER NOT NULL,
    rating REAL NOT NULL,
    votes INTEGER NOT NULL,
    FOREIGN KEY(movie_id) REFERENCES movies(id)
);
CREATE TABLE stars (
    movie_id INTEGER NOT NULL,
    person_id INTEGER NOT NULL,
    FOREIGN KEY(movie_id) REFERENCES movies(id),
    FOREIGN KEY(person_id) REFERENCES people(id)
);
