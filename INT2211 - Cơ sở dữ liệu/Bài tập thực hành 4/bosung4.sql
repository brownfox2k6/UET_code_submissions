/*
Tạo cột tính toán expectedPrice = buyPrice * 1.3 (Chỉ hiển thị các sản phẩm
có expectedPrice > 100 và sắp xếp giảm dần theo expectedPrice.
*/

SELECT productName, (1.3 * buyPrice) expectedPrice
FROM classicmodels.products
HAVING expectedPrice > 100
ORDER BY expectedPrice DESC;