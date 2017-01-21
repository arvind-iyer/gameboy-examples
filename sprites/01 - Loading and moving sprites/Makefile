all: ship.o
	lcc -Wa-l -Wl-m -o space.gb main.c ship.o

%.o: %.c
	lcc -c $<

clean:
	rm *.gb 
	rm *.map
	rm *.o
