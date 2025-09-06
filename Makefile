CXX = g++
CXXFLAGS = -Wall -std=c++11
LDFLAGS = -lncurses

SRCDIR = src
SOURCES = $(SRCDIR)/main.cpp $(SRCDIR)/game.cpp
OBJECTS = $(SOURCES:.cpp=.o)
TARGET = snake_game

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $(TARGET) $(LDFLAGS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(TARGET)

.PHONY: all clean