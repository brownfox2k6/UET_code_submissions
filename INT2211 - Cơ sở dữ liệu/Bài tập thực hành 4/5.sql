/*
Sắp xếp danh sách các nhân viên theo lastname,
nếu cùng lastname sẽ sắp theo firstname.
*/

SELECT * FROM classicmodels.employees
ORDER BY lastName ASC, firstName ASC;