Solution for Question 2:
=======================

select
  c.id,
  c.name
from
  customer c
order by
  c.name desc, 
  c.id asc;

Solution for Question 3:
=======================

select
  id,
  name,
  marks,
  case
    WHEN marks > 90 
     THEN 'A+'
    WHEN marks > 70
     THEN 'A'
    WHEN marks > 50
     THEN 'B'
    WHEN marks >= 40
     THEN 'C' ELSE 'Fail'
  END AS grade
FROM
  students;
