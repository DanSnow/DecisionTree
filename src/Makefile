CXX = g++
CXXFLAGS = -g -Wall -Wno-deprecated -Werror -std=gnu++14
INCLUDES = -I../include
LIBS =

all: tree test

tree: tree_main.o csv.o tree_node.o decision_tree.o
	$(CXX) -o $@ $^ $(LIBS)

test: test_main.o csv.o decision.o
	$(CXX) -o $@ $^ $(LIBS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c -o $@ $<

clean:
	-rm *.o
.PHONY: all clean
