TARGET = cppprac

SRCS = ./main_entry/cppprac_main.cpp \
    ./cppprac_2/source/cppprac_2.cpp

INC =  -I./cppprac_2/include

OBJS = $(SRCS:.cpp=.o)

$(TARGET):$(OBJS)
	g++ -o $@ $^

clean:
	rm -rf $(TARGET)
	rm -rf $(OBJS)

%.o:%.cpp
	g++  $(INC) -o $@ -c $<
