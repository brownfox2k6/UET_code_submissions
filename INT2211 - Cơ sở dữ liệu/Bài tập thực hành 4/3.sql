/*
Sử dụng LIKE để đưa ra thông tin về các nhóm hàng hoá có chứa từ 'CARS'.
*/

SELECT * FROM classicmodels.productlines
WHERE productLine LIKE '%cars%';