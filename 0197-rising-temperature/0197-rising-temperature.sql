# Write your MySQL query statement below
SELECT   today.id 
FROM Weather AS today
JOIN Weather AS yesterday
ON DATEDIFF(today. recordDate , yesterday. recordDate) = 1
AND 
today. temperature > yesterday. temperature;