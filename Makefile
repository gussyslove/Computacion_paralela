COMPILER = gcc
FLAGS = -pedantic -Wall -fopenmp
OBJ = -c

Classic = MclassicOMP
Transpose = MTrasnposeOMP

PROGS = $(Classic) $(Transpose)

all: modules $(Classic) $(Transpose)

modules:
		$(COMPILER) $(FLAGS) $(OBJ) modulo.c

$(Classic):
		$(COMPILER) $(FLAGS) $(OBJ) $(Classic).c
		$(COMPILER) $(FLAGS) -o $(Classic) $(Classic).o modulo.o 
		
$(Transpose):
		$(COMPILER) $(FLAGS) $(OBJ) $(Transpose).c
		$(COMPILER) $(FLAGS) -o $(Transpose) $(Transpose).o modulo.o 

clean:
		$(RM) $(PROGS) *.o