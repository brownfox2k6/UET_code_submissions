/*
Trong bảng `orders`, hiển thị `orderNumber`, `status` và cột `OrderState`:
  + 'Đã giao' nếu status = 'Shipped'
  + 'Đã hủy' nếu status = 'Cancelled'
  + 'Đang xử lý' cho các trạng thái khác.
*/

SELECT
  orderNumber,
  status,
  IF(status = 'Shipped', 'Đã giao', IF(status = 'Cancelled', 'Đã hủy', 'Đang xử lý')) orderState
FROM classicmodels.orders;