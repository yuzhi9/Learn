# cmake

## gcc/g++

```
$ gcc -E <source> -o <file.i> #Pre-Processing
$ gcc -S <file.i> -o <file.s> #Compiling
$ gcc -c <file.s> -o <file.o> #Assembling
$ gcc <file.o> -o <file.out> #Linking

$ gcc -g <source> -o <file.out> #Debug
$ gcc -O<0/1/2/3/s> <source> -o <file.out> #Optimize

$ gcc -L[my lib directory] -l<lib> <source>
$ gcc -I<include directory> <source>
$ gcc -std=<standard> <source>
$ gcc -D<Macro> <source>
```

