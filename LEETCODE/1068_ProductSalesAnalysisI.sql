# Write your MySQL query statement below
SELECT P.product_name, S.year, S.price FROM SALES AS S
    INNER JOIN PRODUCT AS P ON S.product_id = P.product_id;