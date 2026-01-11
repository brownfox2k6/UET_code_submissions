/*
Tìm 5 đơn hàng được vận chuyển sớm nhất so với ngày hẹn.
*/

SELECT * FROM classicmodels.orders
WHERE status = 'Shipped'
ORDER BY DATEDIFF(requiredDate, shippedDate) DESC
LIMIT 5;