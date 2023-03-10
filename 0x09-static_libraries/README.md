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
