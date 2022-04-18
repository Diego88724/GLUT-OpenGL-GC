# Project: Proyecto1
# Makefile created by Embarcadero Dev-C++ 6.3

CPP      = g++.exe
CC       = gcc.exe
WINDRES  = windres.exe
OBJ      = "../../../../Universidad/3º\ Curso\ -\ Computacion/Graficos\ por\ Computador/GC\ -\ I.\ Hidalgo/Discretizacion/src/main.o"
LINKOBJ  = "../../../../Universidad/3º Curso - Computacion/Graficos por Computador/GC - I. Hidalgo/Discretizacion/src/main.o"
LIBS     = -L"C:/Program Files (x86)/Embarcadero/Dev-Cpp/TDM-GCC-64/lib" -L"C:/Program Files (x86)/Embarcadero/Dev-Cpp/TDM-GCC-64/x86_64-w64-mingw32/lib" -static-libgcc -mwindows -lopengl32
INCS     = -I"C:/Program Files (x86)/Embarcadero/Dev-Cpp/TDM-GCC-64/include" -I"C:/Program Files (x86)/Embarcadero/Dev-Cpp/TDM-GCC-64/x86_64-w64-mingw32/include" -I"C:/Program Files (x86)/Embarcadero/Dev-Cpp/TDM-GCC-64/lib/gcc/x86_64-w64-mingw32/9.2.0/include"
CXXINCS  = -I"C:/Program Files (x86)/Embarcadero/Dev-Cpp/TDM-GCC-64/include" -I"C:/Program Files (x86)/Embarcadero/Dev-Cpp/TDM-GCC-64/x86_64-w64-mingw32/include" -I"C:/Program Files (x86)/Embarcadero/Dev-Cpp/TDM-GCC-64/lib/gcc/x86_64-w64-mingw32/9.2.0/include" -I"C:/Program Files (x86)/Embarcadero/Dev-Cpp/TDM-GCC-64/lib/gcc/x86_64-w64-mingw32/9.2.0/include/c++"
BIN      = hw.exe
CXXFLAGS = $(CXXINCS) 
CFLAGS   = $(INCS) 
DEL      = C:\Program Files (x86)\Embarcadero\Dev-Cpp\devcpp.exe INTERNAL_DEL

.PHONY: all all-before all-after clean clean-custom

all: all-before $(BIN) all-after

clean: clean-custom
	${DEL} $(OBJ) $(BIN)

$(BIN): $(OBJ)
	$(CC) $(LINKOBJ) -o $(BIN) $(LIBS)

"../../../../Universidad/3º\ Curso\ -\ Computacion/Graficos\ por\ Computador/GC\ -\ I.\ Hidalgo/Discretizacion/src/main.o": ../../../../Universidad/3º\ Curso\ -\ Computacion/Graficos\ por\ Computador/GC\ -\ I.\ Hidalgo/Discretizacion/src/main.c
	$(CC) -c "../../../../Universidad/3º Curso - Computacion/Graficos por Computador/GC - I. Hidalgo/Discretizacion/src/main.c" -o "../../../../Universidad/3º Curso - Computacion/Graficos por Computador/GC - I. Hidalgo/Discretizacion/src/main.o" $(CFLAGS)
