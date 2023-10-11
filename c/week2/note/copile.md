Under the hood, compiling works with `clang`:

```
clang agree.c -o agree -lcs50
```

command line arguments:

- `-o` means `output`
- `-l` plus the library name (with no space between) tells clang where to look for the implementation of the library; on the other hand, the header files are just telling clang that some functions may be used in the following code.

---

Four steps behind running `make`:

1. preprocessing
2. compiling
3. assembling
4. linking
