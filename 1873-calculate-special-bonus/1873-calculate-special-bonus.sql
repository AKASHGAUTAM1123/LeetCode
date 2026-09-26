# Write your MySQL query statement below
SELECT employee_id,IF(employee_id % 2 = 1 AND name not LIKE 'M%',salary,0) AS bonus from Employees order by employee_id;