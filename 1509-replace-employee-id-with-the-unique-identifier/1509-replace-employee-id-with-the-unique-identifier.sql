# Write your MySQL query statement below
SELECT empUni.unique_id, emp.name FROM Employees emp LEFT JOIN EmployeeUNI empUni ON emp.id = empUni.id