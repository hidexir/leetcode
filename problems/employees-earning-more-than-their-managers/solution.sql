select e1.name as Employee  from Employee as e1 left join Employee as e2 on e1.managerId = e2.id where e1.salary > e2.salary; 
