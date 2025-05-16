-- List the titles of all movies in which both Bradley Cooper and Jennifer Lawrence starred
SELECT title FROM movies
JOIN stars ON movies.id = stars.movie_id
JOIN people ON people.id = stars.person_id
WHERE people.name = 'Bradley Cooper'
AND movies.id IN
(SELECT movies.id FROM movies
JOIN stars ON movies.id = stars.movie_id
JOIN people ON people.id = stars.person_id
WHERE people.name = 'Jennifer Lawrence');
