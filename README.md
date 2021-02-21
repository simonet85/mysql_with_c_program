
**C progrmming and Mysql**

## Set up mysql.h headers into gcc compiler
===========================================
__Install the MySQL C development libraries.__
$ sudo apt-get update -y
$ sudo apt-get install -y default-libmysqlclient-dev

## wsl connect to mysql
=======================
__Update system packet :__
$ sudo apt update -y

## Install mysql server
=======================
$ sudo apt install mysql-server

1. Check root plugin
====================
$ sudo mysql -u root

mysql>use mysql;
mysql> select User, Host, plugin FROM mysql.user;

2. Change root plugin to mysql_native_password
==============================================

mysql> UPDATE user set plugin='mysql_native_password' WHERE user = 'root';
mysql>flush privileges;
mysql>exit;

$sudo service mysql start/restart/stop

Executing C program
===================

1. Compiling the c program: cc filename.c -o filename 
2. Compiling with mysql cmd : 
 gcc retrieve_data.c -o retrieve_data -I/usr/local/include/mysql -L/usr/local/lib/mysql -lmysqlclient
3. Running : ./filename

