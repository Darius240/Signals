all: signal1 signal2 timer

signal1: signal1.c
	gcc -Wall -Wextra -std=c11 -o signal1 signal1.c

signal2: signal2.c
	gcc -Wall -Wextra -std=c11 -o signal2 signal2.c

timer: timer.c
	gcc -Wall -Wextra -std=c11 -o timer timer.c

clean:
	rm -f signal1 signal2 timer
