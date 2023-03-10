main.h
-Create .c files using vi, vim or emacs
gcc -c *.c
-this builds .o files for each .c files
ar rcs libmy.a
-this create libmy.a file
ar rcs libmy.a *.o
-this copies all .o files to libmy.a
ar -t libmy.a
-run with the code above, it lists files in libmy.a
nm libmy.a
- run this code

1 Create file create_static_lib.sh
2 write the code below
	#!/bin/bash
	gcc -Wall -pedantic -Werror -Wextra -c *.c
	ar -rc liball.a *.o
	ranlib liball.a
3 convert to executable file using chmod u+x create_static_lib.sh
4 Run
	./create_static_lib.sh
