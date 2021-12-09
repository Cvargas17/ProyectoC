uno:
	gcc `pkg-config --cflags gtk+-3.0` ProyectoC.c -o exe `pkg-config --libs gtk+-3.0`

run:
	./exe
