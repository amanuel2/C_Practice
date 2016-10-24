all: lib.a
	gcc main.c -o main.o lib.a
	
lib.a:
	gcc -c lib1/lib.c -o lib1.o
	gcc -c average/average.c -o average.o 
	ar -cvq lib.a lib1.o average.o
	
clean:
	rm -f lib.a
	rm -f lib1.o
	rm -f average.o	
	rm -f main.o