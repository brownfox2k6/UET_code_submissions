/*
Đưa ra mô tả về các nhân viên theo định dạng ‘Fullname, jobTitle.’
*/

SELECT CONCAT(firstname, ' ', lastname, ', ', jobTitle) description
FROM classicmodels.employees;