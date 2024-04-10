# My ngram
This C program counts the occurrences of each character in the input strings provided as command line arguments. It counts all characters, including letters, digits, and symbols.

## Usage
To use this program, you can compile it using the provided Makefile. Simply run:

```
make
```
This will compile the program and generate an executable file named `my_ngram`.

Then, you can run the program by providing input strings as command line arguments:

```
./my_ngram string1 string2 ...
```

Replace `string1`, `string2`, etc., with the strings you want to analyze. The program will then output the counts of each character encountered in the input strings.

## Example
Suppose you have compiled the program and you want to count the characters in the strings "hello" and "world". You would run:

```
./my_ngram hello world
```
And the output would be:

```
h: 1
e: 1
l: 3
o: 2
w: 1
r: 1
d: 1
```
This indicates that in the provided strings, the characters 'h', 'e', 'l', 'o', 'w', 'r', and 'd' each appeared the specified number of times.

## Notes
- This program counts all characters, including letters, digits, and symbols.
- Command line arguments are treated as separate input strings.
- Only ASCII characters are supported.

## The core team
- [MotherFucker](MotherFucker@gmail.com)
- Qwasar Silicon Waley
