all: hello

hellolib.o: hellolib.c
	gcc -c hellolib.c -o hellolib.o

hello.o: hello.c hellolib.h
	gcc -c hello.c -o hello.o

test.o: test.c hellolib.h
	gcc -c test.c -o test.o

hello: hello.o hellolib.o test
	gcc hello.o hellolib.o -o hello

test: test.o hellolib.o
	gcc test.o hellolib.o -o test
	./test

clean:
	rm -rf hello test *.o