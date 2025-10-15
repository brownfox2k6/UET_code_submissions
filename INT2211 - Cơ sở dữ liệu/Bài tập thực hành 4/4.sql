/*
Truy vấn 10 sản phẩm có số lượng trong kho là lớn nhất.
*/

SELECT * FROM classicmodels.products
ORDER BY quantityInStock DESC
LIMIT 10;