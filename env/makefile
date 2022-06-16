#-*- Makefile -*-

EXEC = a.out 
OBJS = env.o 


$(EXEC): $(OBJS)
	gcc $(OBJS) -o $(EXEC)

%.o: %.c
	gcc -g -c $< -o $@

clean:
	rm -f *.o *.out $(EXEC)
	ls -l

run:
	./$(EXEC)
