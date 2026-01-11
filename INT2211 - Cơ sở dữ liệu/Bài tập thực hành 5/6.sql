/*
Sử dụng hàm IF hoặc để phân loại khách hàng VIP, Regular theo hạn mức tín dụng
(creditLimit), ví dụ nếu hạn mức trên 100000 là khách hàng VIP.
*/

SELECT
  customerNumber,
  IF(creditLimit > 100000, 'VIP', 'Regular') customerType
FROM classicmodels.customers;