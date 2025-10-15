/*
Đếm số khách hàng của mỗi quốc gia, liệt kê theo thứ tự giảm dần số lượng 
khách hàng.
*/

SELECT country, COUNT(*) total
FROM classicmodels.customers
GROUP BY country
ORDER BY total DESC;