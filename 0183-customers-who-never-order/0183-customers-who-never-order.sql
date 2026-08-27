# Write your MySQL query statement below
select c.name as Customers
from Customers c
left join Orders o
on c.id=o.customerId
group by c.id,c.name
having count(o.customerId)<1