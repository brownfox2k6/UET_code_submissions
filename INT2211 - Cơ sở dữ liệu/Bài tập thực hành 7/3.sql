/*
Đưa ra danh sách các mặt hàng chưa có ai đặt mua.
*/

SELECT
  p.productCode,
  p.productName
FROM classicmodels.products p
LEFT JOIN classicmodels.orderdetails od ON od.productCode = p.productCode
WHERE od.productCode is NULL;