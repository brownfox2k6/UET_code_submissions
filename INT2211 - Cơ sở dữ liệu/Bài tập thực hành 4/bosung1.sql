/*
Tính tổng giá trị các khoản thanh toán (cột amount trong bảng payments)
cho mỗi khách hàng.
  a. Chỉ hiển thị những khách hàng có tổng thanh toán lớn hơn 100000.
  b. Sắp xếp giảm dần theo tổng thanh toán.
*/

SELECT customerNumber, SUM(amount) total
FROM classicmodels.payments
GROUP BY customerNumber
HAVING total > 100000
ORDER BY total DESC;