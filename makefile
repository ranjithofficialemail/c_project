devops.exe : main.o add2no.o fibb.o check_ch.o
	gcc -o devops.exe main.o add2no.o fibb.o check_ch.o
main.o : main.c
	gcc -c main.c
add2no.o : add2no.c
	gcc -c add2no.c
fibb.o : fibb.c
	gcc -c fibb.c
check_ch.o : check_ch.c
	gcc -c check_ch.c
