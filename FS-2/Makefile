CXX = g++
CXXFLAGS = -Wall -Wextra


SRC = simple-copy.cpp
OBJ = simple-copy.o
EXE = simple-copy


all: $(EXE)


$(EXE): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(EXE)


$(OBJ): $(SRC)
	$(CXX) $(CXXFLAGS) -c $(SRC) -o $(OBJ)


clean:
	rm -f $(OBJ) $(EXE)

.PHONY: all clean
