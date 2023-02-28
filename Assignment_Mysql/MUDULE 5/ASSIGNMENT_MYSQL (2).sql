--  <-------------- CREATE DATABASE :-  --------------->
create database assignment;
-- <----------------  USE DATABASE :  ----------------->
use assignment;
--  <--  1) Create Table Name : Student and Exam :-  -->
-- <----------  1) CREATE TABLE STDUENT :-  ----------->
create table
    stduent(
        roll_NO int auto_increment,
        NAME VARCHAR(10),
        BRANCH VARCHAR(25),
        PRIMARY KEY (roll_no)
    );

--  <----------  2) CREATE TABLE EXAM :-  ------------->

create table
    exam(
        roll_no int,
        s_code varchar(7),
        mark int,
        P_code varchar(8),
        FOREIGN KEY (roll_no) references stduent(roll_No)
    );
--  <-------- INSERT DATA INTO STDUENT TABLE :-  ----->
insert INTO stduent (NAME,BRANCH) VALUES("JAY","COMPUTER SCIENCE");
INSERT INTO
    STDUENT (NAME, BRANCH)
VALUES (
        "SUHANI",
        "ELECTRONIC AND COM"
    );
INSERT INTO
    STDUENT (NAME, BRANCH)
VALUES ("KRITI", "ELECTONIC AND COM");

--  <------------ INSERT DATA INTO EXAM TABLE :-  ------------------->
INSERT INTO
    EXAM (ROLL_NO, S_CODE, MARK, P_CODE)
VALUES(1, "CS11", 50, "C8");
INSERT INTO
    EXAM (ROLL_NO, S_CODE, MARK, P_CODE)
VALUES (1, "CS12", 60, "C8");
INSERT INTO
    EXAM (ROLL_NO, S_CODE, MARK, P_CODE)
VALUES (2, "EC101", 66, "EC");
INSERT INTO
    EXAM (ROLL_NO, S_CODE, MARK, P_CODE)
values(2, "EC102", 70, "EC");
INSERT INTO
    EXAM (ROLL_NO, S_CODE, MARK, P_CODE)
values(3, "EC101", 45, "EC");
INSERT INTO
    EXAM (ROLL_NO, S_CODE, MARK, P_CODE)
values(3, "EC102", 50, "EC");
INSERT INTO
    EXAM (ROLL_NO, S_CODE, MARK, P_CODE)
VALUES(1, "CS11", 50, "CS");
INSERT INTO
    EXAM (ROLL_NO, S_CODE, MARK, P_CODE)
VALUES(1, "CS12", 60, "CS");
INSERT INTO
    EXAM (ROLL_NO, S_CODE, MARK, P_CODE)
VALUES(2, "EC101", 66, "EC");
INSERT INTO
    EXAM (ROLL_NO, S_CODE, MARK, P_CODE)
VALUES(2, "EC102", 70, "EC");
INSERT INTO
    EXAM (ROLL_NO, S_CODE, MARK, P_CODE)
VALUES (3, "EC101", 45, "EC");
INSERT INTO
    EXAM (ROLL_NO, S_CODE, MARK, P_CODE)
VALUES(3, "EC102", 50, "EC");

--  <------------- 2. Create table given below  :-  ----------------->

-- <-------------   create table 2. info :-  ------------------------>

create table
    employee_info (
        first_Name varchar(10),
        last_Name varchar(10),
        address varchar(35),
        city varchar(10),
        age int
    );

--  <------------- insert data into employee table :-  -------------->

insert into
    employee_info (
        first_name,
        Last_name,
        address,
        city,
        age
    )
values (
        "jay",
        "dabhi",
        "sanosara-364230",
        "sanosara",
        21
    );

insert into
    employee_info(
        first_name,
        last_name,
        address,
        city,
        age
    )
values (
        "chirag",
        "katrodiya",
        "surat-394101",
        "surat",
        23
    );

insert into
    employee_info(
        first_name,
        last_name,
        address,
        city,
        age
    )
values (
        "ashish",
        "bokhani",
        "123-truth way",
        "vapi",
        24
    );

insert into
    employee_info(
        first_name,
        last_name,
        address,
        city,
        age
    )
values (
        "vivek",
        "katodiya",
        "400-acadamic way",
        "rajkot",
        20
    );

insert into
    employee_info(
        first_name,
        last_name,
        address,
        city,
        age
    )
values (
        "raj",
        "chaudhary",
        "343-vastu shilp",
        "vadodara",
        26
    );

insert into
    employee_info(
        first_name,
        last_name,
        address,
        city,
        age
    )
values (
        "tilak",
        "mehata",
        "shastrinagar",
        "bhavnagar",
        35
    );

insert into
    employee_info(
        first_name,
        last_name,
        address,
        city,
        age
    )
values (
        "mahadev",
        "shashtri",
        "sugam sahakar",
        " morbi",
        37
    );

insert into
    employee_info(
        first_name,
        last_name,
        address,
        city,
        age
    )
values (
        "vimal",
        "mehata",
        "200-west side street",
        "jamnagar",
        40
    );

--  3. Create table given below: Employee and Incentive :-

--  <---------------   1) create table Employee :  ------------------>
CREATE TABLE
    employee(
        emp_id int AUTO_INCREMENT,
        first_name VARCHAR(10),
        last_name VARCHAR(10),
        salary int,
        joining_date DATETIME,
        department VARCHAR(10),
        PRIMARY KEY(emp_id)
    );

-- <-----------  2) create incentive TABLE :-  ---------------------->

CREATE Table
    incentive(
        emp_ref_id INT,
        incentive_date DATE,
        incentive_amount INT,
        FOREIGN KEY(emp_ref_id) REFERENCES employee(emp_id)
    );

--  <------------  INSERT DATA INTO EMPLOYEE TABLE : ---------------->

insert into
    employee (
        first_name,
        last_name,
        salary,
        joining_date,
        department
    )
VALUES (
        "john",
        "abraham",
        100000,
        "2023-02-01 12:00:00 ",
        "banking"
    );

insert into
    employee (
        first_name,
        last_name,
        salary,
        joining_date,
        department
    )
VALUES (
        "roy",
        "thomas",
        700000,
        "2013-02-01 12:00:00",
        "banking"
    );

insert into
    employee (
        first_name,
        last_name,
        salary,
        joining_date,
        department
    )
VALUES (
        "tom",
        "jose",
        600000,
        "2013-02-01 12:00:00 ",
        "insurance"
    );

insert into
    employee(
        first_name,
        last_name,
        salary,
        joining_date,
        department
    )
VALUES (
        "jerry",
        "pinto",
        650000,
        "2013-02-01 12:00:00",
        "insurance"
    );

INSERT INTO
    employee(
        first_name,
        last_name,
        salary,
        joining_date,
        department
    )
VALUES (
        "philip",
        "mathew",
        750000,
        "2013-01-01 12:00:00",
        "services"
    ), (
        "akshay",
        "surani",
        1000000,
        "2020-05-01 12:00:00",
        "finance"
    ), (
        "amit",
        "mangukiya",
        1050000,
        "2021-02-01 12:00:00",
        "developer"
    );

--  <------------ insert data into table incentive :  --------------->

INSERT INTO
    incentive
VALUES (1, "2013-02-01", 5000),
 (2, "2013-02-01", 3000),
 (3, "2013-02-01", 4000),
 (1, "2013-01-01", 4500),
 (2, "2013-01-01", 3500),
 (5, "2012-01-01", 2000),
 (5, "2015-05-01", 1500),
 (4, "2014-02-01", 2500),
 (6, "2013-01-01", 1000);

-- <-----------------------------  ANS  :  -------------------------->

--  <--  a) Get First_Name from employee table using Tom name “Employee Name”.  -->
SELECT * FROM employee WHERE first_name="tom";

--  <--   b) Get FIRST_NAME, Joining Date, and Salary from employee table. : -->
select first_name,joining_date,salary FROM employee ;

--   <--  c) Get all employee details from the employee table order by First_Name Ascending and Salary descending ? -->
select * from employee ORDER BY first_name,salary DESC;

--  <--  d) Get employee details from employee table whose first name contains ‘J’.  -->
select * FROM employee WHERE first_name LIKE "j%";

-- <--  e) Get department wise maximum salary from employee table order by salary ascending ?  -->
SELECT *, MAX(salary) FROM employee GROUP BY department ORDER BY salary;

-- <--  f) Select first_name, incentive amount from employee and incentives table for those employees who have incentives and incentive amount  greater than 3000;  -->
SELECT employee.*, incentive.*,SUM(incentive.incentive_amount) AS incentive FROM employee LEFT JOIN incentive ON employee.emp_id = incentive.emp_ref_id WHERE incentive.incentive_amount > 3000 GROUP BY employee.emp_id;

--  <--  g) Create After Insert trigger on Employee table which insert records in view table;  -->
 CREATE TABLE BACKUP_EMPLOYEE(EMP_ID INT,FIRST_NAME VARCHAR(10),LAST_NAME VARCHAR(10),SALARY INT,JOINING_DATE DATETIME,DEPARTMENT VARCHAR(10));


--   <--   4. Create table given below: Salesperson and Customer :-  -->

--   <-------------------  1) selesperson :-  ----------------------->

CREATE table
    salesperson(
        S_NO INT,
        S_NAME VARCHAR(25),
        CITY VARCHAR(15),
        COMMISSION FLOAT,
        PRIMARY KEY(S_NO)
    );

--   <------------  INSERT DATA INTO SALESPERSON TABLE :-  ---------->

INSERT INTO SALESPERSON
VALUES
(1001, "KEYUR", "SURAT", 0.35), (
        1002,
        "AKSHAY",
        "BHAVNAGAR",
        0.33
    ), (
        1003,
        "DHARMIK",
        "VADODARA",
        0.25
    ), (1004, "VIVEK", "RAJKOT", 0.34), (1005, "JAY", "MAHUVA", 0.35), (1006, "MAYUR", "TALAJA", 0.30);

INSERT INTO SALESPERSON
VALUES
(1007, "MIHIR", "SURAT", 0.1), (1008, "KETAN", "BHUJ", 0.09), (1009, "VAIDIK", "NADIYAD", 0.05), (
        1010,
        "GAURANG",
        "BHAVNAGAR",
        0.07
    );

--   <-------------   2) CREATE TABLE CUSTOMER :-  --------------->

CREATE Table
    CUSTOMER (
        CNM INT,
        CNAME VARCHAR(25),
        CITY VARCHAR(20),
        RATING INT,
        S_NO INT,
        PRIMARY KEY(CNM),
        FOREIGN KEY(S_NO) REFERENCES SALESPERSON(S_NO)
    );

--   <----------  2) INSERT DATA INTO CUSTOMER TABLE :-  ------------>

INSERT INTO CUSTOMER
VALUES
(
        201,
        "RITESH",
        "SURAT",
        100,
        1001
    ), (
        202,
        "JIGNESH",
        "BHAVNAGAR",
        200,
        1002
    ), (
        203,
        "KRUNAL",
        "TALAJA",
        200,
        1006
    ), (
        204,
        "PRAKASH",
        "MAHUVA",
        300,
        1005
    ), (
        205,
        "DHRUV",
        "BHAVNAGAR",
        300,
        1002
    ), (
        206,
        "MILAN",
        "VADODARA",
        400,
        1003
    ), (207, "RAVI", "RAJKOT", 300, 1004), (
        208,
        "SAMIR",
        "MAHUVA",
        300,
        1005
    ), (209, "RAJ", "SURAT", 300, 1001);

INSERT INTO CUSTOMER
VALUES
(210, "RAM", "SURAT", 200, 1007), (
        211,
        "VIRAMDEV",
        "BHUJ",
        300,
        1008
    ), (
        212,
        "JATIN",
        "NADIYAD",
        300,
        1009
    ), (
        213,
        "BHAVESH",
        "BHAVNAGAR",
        200,
        1010
    );

--  <------  Retrieve the below data from above table :-  ----------->

--   <-------   a) All orders for more than $1000. :-   ------------->
--  <--------------  SHOW SALESPERSON TABLE  ------------------->
SELECT * FROM SALESPERSON;
--   <------------  SHOW CUSTOMER TABLE    ------------------->
SELECT * FROM CUSTOMER;
--  <------------  SHOW SALESPERSON & CUSTOMER TABLE  ---------->
SELECT    CUSTOMER.*, SALESPERSON.* FROM CUSTOMER INNER JOIN SALESPERSON ON CUSTOMER.S_NO = SALESPERSON.S_NO;

--  <--  b) Names and cities of all alespeople in SURAT with commission above 0.12 :-  -->
SELECT SALESPERSON.S_NAME AS SALESMAN, SALESPERSON.COMMISSION,CUSTOMER.CNAME AS CUSTOMER,CUSTOMER.CITY,CUSTOMER.RATING FROM SALESPERSON LEFT JOIN CUSTOMER ON SALESPERSON.S_NO = CUSTOMER.S_NO WHERE SALESPERSON.COMMISSION > 0.12;

--  <--  c) All salespeople either in SURAT  or in BHAVNAGAR  :-  -->
SELECT * FROM SALESPERSON WHERE CITY="SURAT" OR CITY="BHAVNAGAR";

-- <--  d) All salespeople with commission between 0.05 and 0.3 (Boundary values should be excluded). :-  -->
SELECT * FROM SALESPERSON WHERE COMMISSION < 0.3 AND COMMISSION > 0.05 ORDER BY COMMISSION;

-- <--  e) All customers excluding those with rating <= 100 unless they are located in Rome : -->
SELECT * FROM CUSTOMER WHERE RATING >=100 AND CITY="SURAT";

--   <<----------------   THANKING  ----  YOU  --------------------->>
