// timer.c
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <time.h>

volatile sig_atomic_t seconds = 0;

void alarm_handler(int sig) {
    seconds++;
    printf("Hello World!\n");
    alarm(1); // repeat every second
}

void sigint_handler(int sig) {
    printf("\nProgram ran for %d seconds\n", seconds);
    exit(0);
}

int main() {
    signal(SIGALRM, alarm_handler); // periodic alarm
    signal(SIGINT, sigint_handler); // CTRL-C handler

    alarm(1); // start alarm

    while (1) {
        pause(); // wait for signals
    }

    return 0;
}
