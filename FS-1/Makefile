CXX = g++
CXXFLAGS = -Wall -Wextra


SRC = read-file.cpp
OBJ = read-file.o
EXE = read-file


all: $(EXE)


$(EXE): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(EXE)


$(OBJ): $(SRC)
	$(CXX) $(CXXFLAGS) -c $(SRC) -o $(OBJ)


clean:
	rm -f $(OBJ) $(EXE)

.PHONY: all clean
