-- Aim: 9. SQL Program for manipulating databases. --
CREATE DATABASE my_web_db;
USE my_web_db;

CREATE TABLE Users (
    id INT PRIMARY KEY,
    name VARCHAR(50),
    email VARCHAR(50)
);

INSERT INTO Users VALUES (1, 'Naveen', 'nav@gmail.com');
UPDATE Users SET name = 'Madhu' WHERE id = 1;
SELECT * FROM Users;
