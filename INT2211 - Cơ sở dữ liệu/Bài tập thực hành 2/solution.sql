-- Đề bài xem tại statement.md

DROP DATABASE my_classicmodels;
CREATE TABLE IF NOT EXISTS my_classicmodels;
USE my_classicmodels;

CREATE TABLE IF NOT EXISTS productlines (
  productline VARCHAR(50) PRIMARY KEY, 
  textdescription VARCHAR(1000), 
  htmldescription MEDIUMTEXT, 
  image MEDIUMBLOB
);

CREATE TABLE IF NOT EXISTS products (
  productcode VARCHAR(15) PRIMARY KEY, 
  productname VARCHAR(70), 
  productline VARCHAR(50), 
  productscale VARCHAR(10), 
  productvendor VARCHAR(50), 
  productdescription TEXT, 
  quantityinstock SMALLINT(6), 
  buyprice DOUBLE, 
  CONSTRAINT fk_productline
    FOREIGN KEY (productline)
    REFERENCES productlines (productline)
    ON DELETE RESTRICT
    ON UPDATE CASCADE
);

CREATE TABLE IF NOT EXISTS orders (
  ordernumber INT(11) PRIMARY KEY, 
  orderdate DATETIME, 
  requireddate DATETIME, 
  shippeddate DATETIME, 
  status VARCHAR(15), 
  comments TEXT, 
  customernumber INT(11)
);

CREATE TABLE IF NOT EXISTS orderdetails (
  ordernumber INT(11), 
  productcode VARCHAR(15), 
  quantityordered INT(11), 
  priceeach DOUBLE, 
  orderlinenumber SMALLINT(6), 
  PRIMARY KEY (ordernumber, productcode), 
  CONSTRAINT fk_productcode
    FOREIGN KEY (productcode)
    REFERENCES products (productcode)
    ON DELETE RESTRICT
    ON UPDATE CASCADE, 
  CONSTRAINT fk_ordernumber
    FOREIGN KEY (ordernumber)
    REFERENCES orders (ordernumber)
    ON DELETE RESTRICT
    ON UPDATE CASCADE
);
