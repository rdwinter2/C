all: one two three four

make1: one.c
	gcc -o one one.c -I.

make2: two.c
	gcc -o two two.c -I.

make3: three.c
	gcc -o three three.c -I.

make4: four.c
	gcc -o four four.c -I.