/*
Lấy ra 50 ký tự đầu tiên của phần mô tả sản phẩm, đặt tên là ‘Title of products’,
chuyển hết thành chữ in hoa.
*/

SELECT UPPER(SUBSTRING(productDescription, 1, 50)) "Title of products"
FROM classicmodels.products;