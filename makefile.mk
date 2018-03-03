a.out:client.o mystack.o
	gcc client.o mystack.o
client.o:client.c
	gcc -c client.c 
mystack.o:mystack.c
	gcc -c mystack.c
