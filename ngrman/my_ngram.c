#include <stdio.h>
#include <unistd.h>

void printCounts(int *adder) {
    for (int i = 0; i < 128; i++) {
        if (adder[i] > 0) {
            printf("%c:%d\n", i, adder[i]);
        }
    }
}

void Counter(char *arr) {
    int adder[128] = {0}; 
    for (int i = 0; arr[i] != '\0'; i++) {
        adder[arr[i]]++;
    }
    printCounts(adder);
}

int main(int argc, char *argv[]) {
    for (int i = 1; i < argc; i++) {
        Counter(argv[i]);
    }    
    return 0;
}