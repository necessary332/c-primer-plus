TARGET = cppprac

SRCS = ./main_entry/cppprac_main.cpp \
    ./cppprac_2/source/cppprac_2.cpp \
    ./cppprac_3/source/cppprac_3.cpp \
    ./cppprac_4/source/cppprac_4.cpp

INC =  -I./cppprac_2/include \
    -I./cppprac_3/include \
    -I./cppprac_4/include \
    -I./public/include

OBJS = $(SRCS:.cpp=.o)

$(TARGET):$(OBJS)
	g++ -o $@ $^

clean:
	rm -rf $(TARGET)
	rm -rf $(OBJS)

%.o:%.cpp
	g++  $(INC) -o $@ -c $<
