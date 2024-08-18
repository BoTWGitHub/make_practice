# TARGETS
# target: prerequisites
# 	commands

explain:
	@echo "This is make practice"
	@echo "make build to build target"
	@echo "make exec to run"
	@echo "make clean to clean"

build: main.o my_lib.o
	gcc main.o my_lib.o -o main

main.o:
	gcc main.c -c

my_lib.o:
	gcc my_lib.c -c

exec:
	./main

clean:
	rm *.o
	rm main