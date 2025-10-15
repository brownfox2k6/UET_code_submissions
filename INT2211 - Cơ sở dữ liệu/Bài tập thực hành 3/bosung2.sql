/*
Đưa ra tổng số lượng sản phẩm còn tồn kho của từng nhóm sản phẩm.
*/

SELECT productLine, SUM(quantityInStock)
FROM classicmodels.products
GROUP BY productLine;