#-*- Makefile -*-

EXEC = a.out
OBJS = env-vars.o 


$(EXEC): $(OBJS)
	gcc $(OBJS) -o $(EXEC)

%.o: %.c
	gcc -g -c $< -o $@

clean:
	rm -f *.o *.out $(EXEC)
	ls -l

run:
	./$(EXEC)
