# Write your MySQL query statement below
SELECT V.CUSTOMER_ID, COUNT(V.VISIT_ID) AS count_no_trans FROM VISITS AS V
    LEFT JOIN TRANSACTIONS AS T ON V.visit_id = T.visit_id
    WHERE T.transaction_id IS NULL
    GROUP BY V.CUSTOMER_ID
    ;