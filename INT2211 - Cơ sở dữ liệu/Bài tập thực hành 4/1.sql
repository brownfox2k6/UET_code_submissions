/*
Dùng toán tử IN để đưa ra thông tin của các khách hàng sống tại các
thành phố Nantes và Lyon. Viết cách khác sử dụng toán tử OR
*/

-- Solution 1
SELECT * FROM classicmodels.customers
WHERE city IN ('Nantes', 'Lyon');

-- Solution 2
SELECT * FROM classicmodels.customers
WHERE city = 'Nantes' OR city = 'Lyon';