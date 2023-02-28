-- Q1) -->  What do you understand By Database  :
                --  A database is an organized collection of structured information,or data,typically stored electronically in a computer system.A database is usually controlled by a database management system (DBMS).

--                     ***

-- Q2) -->  What is Normalization? :
                --  Data normalization is generally considered the development of clean data.Diving deeper,however,the meaning or goal of data normalization is twofold:
                -- 1)  Data normalization is the organization of data to appear similar across all records and fields.
                -- 2)  It increases the cohesion of entry types leading to cleansing,lead generation,segmentation,and higher quality data.
                --  Simply put,this process includes eliminating unstructured data and redundancy (duplicates) in order to ensure logical data storage.When data normalization is done correctly, you will end up with standardized information entry.For example,this process applies to how URLs,contact names,street ddresses,phone numbers, and even codes are recorded.These standardized information fields can then be grouped and read swiftly.

--                     **

-- Q3) -->  What is Difference between DBMS and RDBMS? :
                -- DBMS --> "Database Management System ";
                -- RDBMS --> "Relational Database Management system "

                --  DBMS stands for Database Management System,and RDBMS is the acronym for the Relational Database Management system.In DBMS,the data is stored as a file,whereas in RDBMS,data is stored in the form of tables.

--                     **

-- Q4) -->  What is MF Cod Rule of RDBMS Systems? :
                --   "https: / / www.google.com / search ? q = What + is + MF + Cod + Rule + of + RDBMS + Systems % 3 F & sxsrf = AJOqlzVj1obGlPhvvCdx506aEcTfBgNHng % 3 A1677505778130 & ei = 8 rT8Y4nGB - ej3LUPztmnqA8 & ved = 0 ahUKEwiJh46A7LX9AhXnEbcAHc7sCfUQ4dUDCA8 & uact = 5 & oq = What + is + MF + Cod + Rule + of + RDBMS + Systems % 3 F & gs_lcp = Cgxnd3Mtd2l6LXNlcnAQAzIGCAAQHhANMgUIABCGAzIFCAAQhgM6CggAEEcQ1gQQsANKBAhBGABQ3gpY3gpgxhRoA3ABeACAAZkFiAGZBZIBAzUtMZgBAKABAqABAcgBCMABAQ & sclient = gws - wiz - serp"

--                      **

-- Q5) -->  What do you understand By Data Redundancy?  :
                --  Data redundancy occurs when the same piece of data exists in multiple places,whereas data inconsistency is when the same data exists in different formats in multiple tables.Unfortunately,data redundancy can cause data inconsistency,which can provide a company with unreliable and / or meaningless information.

--                        **

-- Q6) -->  What is DDL Interpreter? :
                --  DDL Interpreter: It processes the DDL statements into a set of table containing meta data (data about data).Embedded DML Pre - compiler: It processes DML statements embedded in an application program into procedural calls

--                   **
-- Q7) -->  What is DML Compiler in SQL? :
                --  DML Compiler: It processes the DML statements into low level instruction (machine language),so that they can be executed.DDL Interpreter: It processes the DDL statements into a set of table containing meta data (data about data)

--                 **

-- Q8) -->  What is SQL Key Constraints writing an Example of SQL Key Constraints :
                --  SQL constraints are used to specify rules for the data in a table.Constraints are used to limit the type of data that can go into a table.This ensures the accuracy and reliability of the data in the table.If there is any violation between the constraint and the data action,    the action is aborted.

--                    **

-- Q9) -->  What is save Point? How to create a save Point write a Query? :
                --  A SAVEPOINT is a point in a transaction in which you can roll the transaction back to a certain point without rolling back the entire transaction.Syntax for Savepoint command:SAVEPOINT SAVEPOINT_NAME; This command is used only in the creation of SAVEPOINT among all the transactions :

--                      **

-- Q10) -->  What is trigger and how to create a Trigger in SQL? :
                --  A trigger is a special type of stored procedure that automatically runs when an event occurs in the database server.DML triggers run when a user tries to modify data through a data manipulation language (DML) event.DML events are INSERT,UPDATE, or DELETE statements on a table or view ;
    
--                     **