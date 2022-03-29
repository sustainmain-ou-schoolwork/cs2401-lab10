CXX = g++
CFLAGS = -g -Wall -std=c++11
NOMAIN = 
MAINOBJ = lab10main.o
TESTOBJ = test.o
OBJS = $(MAINOBJ) $(NOMAIN)
TESTOBJS = $(TESTOBJ) $(NOMAIN)


a.out: $(OBJS)
	$(CXX) $(CFLAGS) $(OBJS) -o $@

$(MAIN1OBJ): lab10main.cc
	$(CXX) $(CFLAGS) -c lab10main.cc -o $@


test: $(TESTOBJS)
	$(CXX) $(CFLAGS) $(TESTOBJS) -o $@

$(TESTOBJ): test.cc
	$(CXX) $(CFLAGS) -c test.cc -o $@


.PHONY: clean
clean:
	rm -rf $(NOMAIN) $(MAINOBJ) $(TESTOBJ) a.out
