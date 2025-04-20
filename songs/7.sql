-- The average energy of songs that are by Drake
SELECT AVG(energy)
FROM songs JOIN artists ON artists.id = songs.artist_id
WHERE artists.name = 'Drake';
