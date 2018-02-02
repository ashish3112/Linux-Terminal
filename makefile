Shell:main.c in_built.o relhome.o
	gcc -o Shell main.c -I./ in_built.o relhome.o
in_built.o:in_built.c
	gcc -c in_built.c -I./
relhome.o:relhome.c
	gcc -c relhome.c -I./
clean:
	rm in_built.o  relhome.o Shell
