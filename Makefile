CC=gcc
CFLAGS=-Wall -Wextra -g
LFLAGS=-shared -fPIC
OFLAGS=-Ofast

all: libynotif.so

libynotif.so: ynotif.c
	$(CC) $(CFLAGS) $(LFLAGS) $(OFLAGS) $< -o $@

test: test.c
	$(CC) $(CFLAGS) $(OFLAGS) $< ynotif.c -o $@

runtest: test
	@./test hello

clean:
	rm -Rf *.so test
