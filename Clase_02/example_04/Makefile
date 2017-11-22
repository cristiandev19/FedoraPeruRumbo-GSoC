#compilacion
CC =  gcc

SRCCC = hello_structs_01.c

OBJCC = hello_structs_01.o


#enlazado
LINKER = gcc


#llama al ld 
SRCL = hello_structs_01.o
BINL = hello_structs_01

#Utilidades
ifeq ($(OS),Windows_NT)
	RM = rm -rf
else  
	RM = rm -rf
endif

#ejecucion 
.PHONY: all all-before all-after clean run

all: all-before $(OBJCC) $(BINL) clean all-after

clean:
	$(RM) $(OBJCC) $(BINL)

$(OBJCC): $(GLOBALDEPS)
	$(CC) -c $(SRCCC) -o $(OBJCC)

$(BINL): $(OBJCC)
	$(LINKER) $(SRCL) -o $(BINL)

run: $(BINL)
	./$(BINL)