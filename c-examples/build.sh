target=$1

if [[ "$target" == "clean" ]]; then
    rm -rf hello test *.o
fi
if [[ "$target" == "compile" ]]; then
    gcc -c hello.c -o hello.o
    gcc -c test.c -o test.o
    gcc -c hellolib.c -o hellolib.o
fi
if [[ "$target" == "assemble" ]]; then
    ./build.sh compile
    ./build.sh test
	gcc hello.o hellolib.o -o hello
fi
if [[ "$target" == "test" ]]; then
    ./build.sh compile
	gcc test.o hellolib.o -o test
    ./test
fi