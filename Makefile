

#FLAGS = -DOPEN_DEBUG
OBJS = logger.o main.o
TARGET = log

all: $(OBJS)
	gcc $(FLAGS) -g -o $(TARGET) $^ -lpthread

%.o: %.c
	gcc $(FLAGS) -g -c $^ -o $@

clean:
	rm -f $(OBJS) $(TARGET)
