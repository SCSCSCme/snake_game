CXX = g++
CXXFLAGS = -Wall -std=c++17

SRCDIR = src
SOURCES = $(SRCDIR)/main.cpp $(SRCDIR)/game.cpp
INCLUDES = -I$(PWD)/thirdparty/TC.hpp/include
OBJECTS = $(SOURCES:.cpp=.o)
TARGET = snake_game

CXXFLAGS += $(INCLUDES)

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $(TARGET)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(TARGET)

.PHONY: all clean