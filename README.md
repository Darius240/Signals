# Signals Project

## Overview
This project demonstrates **signal handling in C**. It includes three programs that showcase how to register signal handlers, handle periodic alarms, and respond to `CTRL-C` (`SIGINT`).

---

## Files

- **signal1.c**:  
  Sets up a signal handler for `SIGALRM`. After the handler prints `"Hello World!"`, the main function prints `"Turing was right!"`.

- **signal2.c**:  
  Periodically prints `"Hello World!"` and `"Turing was right!"` every 5 seconds indefinitely using `SIGALRM`.

- **timer.c**:  
  Uses `SIGALRM` to print `"Hello World!"` every second. When `CTRL-C` (`SIGINT`) is pressed, prints the total runtime in seconds.

- **Makefile**:  
  Builds all programs:
  ```bash
  make        # build all executables
  make clean  # remove
