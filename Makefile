SRCS:=ult.cpp
OBJS:=$(SRCS:.cpp=.o)
EXEC:=ultrans
CXX:=g++ -O6 -Wall

.PHONEY: dep depend

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CXX) -o $(EXEC) $(OBJS)

dep: .depend

depned: .depend

.depend:
	$(CXX) -M $(EXEC) > $@ 


clean:
	rm -rf *.o $(EXEC) .depend


sinclude .depend
