// signal2.c
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

volatile sig_atomic_t flag = 0;

void handler(int sig) {
    if (sig == SIGALRM) {
        printf("Hello World!\n");
        flag = 1;
        alarm(5); // reset alarm
    }
}

int main() {
    signal(SIGALRM, handler); // register handler
    alarm(5);                  // initial alarm

    while (1) {
        if (flag) {
            printf("Turing was right!\n");
            flag = 0;
        }
    }
    return 0;
}
