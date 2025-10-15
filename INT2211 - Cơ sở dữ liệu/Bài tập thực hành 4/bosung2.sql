/*
Liệt kê 10 sản phẩm đầu tiên có tên chứa từ "car" (không phân biệt
hoa thường), sắp xếp theo giá mua giảm dần.
*/

SELECT * FROM classicmodels.products
WHERE productName LIKE '%car%'
ORDER BY buyPrice DESC
LIMIT 10;