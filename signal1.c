// signal1.c
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

volatile sig_atomic_t flag = 0; // global flag for signal

void handler(int sig) {
    if (sig == SIGALRM) {
        printf("Hello World!\n");
        flag = 1;  // set flag to indicate handler was called
    }
}

int main() {
    signal(SIGALRM, handler);  // register handler
    alarm(5);                   // set alarm for 5 seconds

    while (!flag) {             // busy wait
        ; // do nothing
    }

    printf("Turing was right!\n");  // main executes after handler
    return 0;
}
