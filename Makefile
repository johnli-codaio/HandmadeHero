CFLAGS=`sdl2-config --cflags`
LIBFLAGS=`sdl2-config --libs`

compile:
	clang++ -o gen/handmadehero -g src/*.cpp $(CFLAGS) $(LIBFLAGS)
run:
	gen/handmadehero
