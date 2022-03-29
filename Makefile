CXX = g++
CFLAGS = -g -Wall -std=c++11
NOMAIN = shapes.o
MAINOBJ = lab10main.o
TESTOBJ = test.o
OBJS = $(MAINOBJ) $(NOMAIN)
TESTOBJS = $(TESTOBJ) $(NOMAIN)


a.out: $(OBJS)
	$(CXX) $(CFLAGS) $(OBJS) -o $@

$(MAINOBJ): lab10main.cc shapes.h
	$(CXX) $(CFLAGS) -c lab10main.cc -o $@

shapes.o: shapes.cc shapes.h
	$(CXX) $(CFLAGS) -c shapes.cc -o $@


test: $(TESTOBJS)
	$(CXX) $(CFLAGS) $(TESTOBJS) -o $@

$(TESTOBJ): test.cc
	$(CXX) $(CFLAGS) -c test.cc -o $@


.PHONY: clean
clean:
	rm -rf $(NOMAIN) $(MAINOBJ) $(TESTOBJ) a.out
