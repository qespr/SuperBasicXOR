# Super-basic super-simple XOR encryption

Example of super simple XOR encryption in C.

### Usage

XOR is symetric - Same key for encrypting and decrypting.

```bash
$ # Encryption and Decryption
$ ./xor SomeSecretKeyThatShouldBeAsLongAsInputData < /some/input/file > /some/output/file
```

### Notes

- Do not use for anything other than fun.
- This is a **very** weak encryption suspectible to *many* attacks
- But it will prevent your mum from reading your files, if you were to need it (but then you should probably just learn how to use
  pgp or something)
- Works for binaries as well
  - ~~but then it can sometimes leak almost your entire secret key~~

### Building

``$ gcc main.c -o xor``

### License

WTFPL or any other license you want, I mean, it's 25 lines, why would you even want to use this
