/*
Đưa ra danh sách các đơn hàng có ngày yêu cầu vận chuyển là '18/1/2003'.
Lưu ý: MySQL lưu dữ liệu ngày tháng theo định dạng năm/tháng/ngày.
*/

SELECT * FROM classicmodels.orders
WHERE requiredDate = '2003-01-18';