/*
Đưa ra 5 sản phẩm có giá bán lẻ (MSRP) cao nhất
*/

SELECT * FROM classicmodels.products
ORDER BY MSRP DESC
LIMIT 5;