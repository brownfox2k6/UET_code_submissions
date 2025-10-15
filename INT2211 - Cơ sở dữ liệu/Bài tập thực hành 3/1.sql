/*
Đưa ra danh sách các nhân viên có trường reportsTo chưa xác định.
*/

SELECT * FROM classicmodels.employees
WHERE reportsTo IS NULL;