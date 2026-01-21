CXX := g++
CXXFLAGS := -std=c++17 -Wall -Wextra -pedantic

TARGET := candy.exe

SRCS := main.cpp SugarSupplier.cpp ChocolateSupplier.cpp CandyMaker.cpp
OBJS := $(SRCS:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(TARGET)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	del /Q $(OBJS) $(TARGET) 2>nul

run: $(TARGET)
	$(TARGET)
