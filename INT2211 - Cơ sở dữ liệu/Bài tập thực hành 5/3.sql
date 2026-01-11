/*
Thay thế toàn bộ tên nhóm hàng ‘Cars’ thành ‘Automobiles’.
*/

SET FOREIGN_KEY_CHECKS = 0;
UPDATE classicmodels.products
SET productLine = REPLACE(productLine, 'Cars', 'Automobiles');
UPDATE classicmodels.productlines
SET productLine = REPLACE(productLine, 'Cars', 'Automobiles');
SET FOREIGN_KEY_CHECKS = 1;

/* GIẢI THÍCH CÁCH LÀM
Nếu không có 2 dòng SET đầu và cuối thì sẽ bị lỗi Error Code: 1451.
Cannot delete or update a parent row: a foreign key constraint fails
(`classicmodels`.`products`, CONSTRAINT `products_ibfk_1`
FOREIGN KEY (`productLine`) REFERENCES `productlines` (`productLine`)).
Ngoài ra cần update bảng con trước rồi mới update bảng cha.
*/