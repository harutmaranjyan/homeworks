CXX = g++
CXXFLAGS = -Wall -Wextra


SRC = hacker-rm.cpp
OBJ = hacker-rm.o
EXE = hacker-rm


all: $(EXE)


$(EXE): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(EXE)


$(OBJ): $(SRC)
	$(CXX) $(CXXFLAGS) -c $(SRC) -o $(OBJ)


clean:
	rm -f $(OBJ) $(EXE)

.PHONY: all clean
