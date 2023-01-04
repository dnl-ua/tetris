TARGET = tetris

SOURCES = $(wildcard ./src/*.cpp)
INCLUDES = ./include

CXX := g++
CXXFLAGS := -std=c++14 -lncurses -pthread

$(TARGET):
	$(CXX) $(CXXFLAGS) -I$(INCLUDES) $(SOURCES) main.cpp -o $(TARGET)
