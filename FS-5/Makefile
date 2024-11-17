CXX = g++
CXXFLAGS = -Wall -Wextra


SRC = manual-append.cpp
OBJ = manual-append.o
EXE = manual-append


all: $(EXE)


$(EXE): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(EXE)


$(OBJ): $(SRC)
	$(CXX) $(CXXFLAGS) -c $(SRC) -o $(OBJ)


clean:
	rm -f $(OBJ) $(EXE)

.PHONY: all clean
