Under the hood, compiling works with `clang`:

```
clang agree.c -o agree -lcs50
```

command line arguments:

- `-o` means `output`
- `-l` plus the library name (with no space between) tells clang where to look for the implementation of the library and `link` them with your code; on the other hand, the header files are just telling clang that some functions may be used in the following code.

---

Four steps behind `compiling` (running `make`):

1. preprocessing: look for any lines that start with `#`, if any, clang will go into that file (somewhere in the hardware) to copy and paste the contents into your code for the next stage
2. compiling: turn your code into code written in assembly language
3. assembling: turn assembly code into 0s and 1s (machine code) (your code)
4. linking: link your code and other machine code from the included libraries together
