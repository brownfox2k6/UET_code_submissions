/*
Đưa ra danh sách các sản phẩm và thêm thuộc tính là tiền hàng tồn của sản phẩm.
*/

SELECT productName, (quantityInStock * buyPrice) totalPrice
FROM classicmodels.products;