# Write your MySQL query statement below
SELECT 
    p.firstName, 
    p.lastname,
    a.city,
    a.state
FROM person as p
LEFT JOIN address as a on p.personId = a.personId    