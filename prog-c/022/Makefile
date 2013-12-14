CFLAGS = -g -c

BIN = hello

all: $(BIN)

hello: hello.o
	gcc -o $@ $^

.PHONY: clean
clean:
	rm -f $(TARGETS)
