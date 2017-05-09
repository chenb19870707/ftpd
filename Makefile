.PHONY=clean all
CPP=g++
CPPFLAGS=-Wall -g 
BIN=ftpd
OBJS=main.o sysutil.o session.o privparent.o ftpproto.o str.o tunable.o parseconf.o privsock.o hash.o
LIBS=-lcrypt 
$(BIN):$(OBJS)
	$(CPP) $(CPPFLAGS)  $^ -o $@ $(LIBS)
%.o:%.c
	$(CPP) $(CPPFLAGS) -c $< -o $@
clean:
	rm -rf *.o $(BIN)
