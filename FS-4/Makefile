CXX = g++
CXXFLAGS = -Wall -Wextra


SRC = redirect-cin.cpp
OBJ = redirect-cin.o
EXE = redirect-cin


all: $(EXE)


$(EXE): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(EXE)


$(OBJ): $(SRC)
	$(CXX) $(CXXFLAGS) -c $(SRC) -o $(OBJ)


clean:
	rm -f $(OBJ) $(EXE)

.PHONY: all clean
