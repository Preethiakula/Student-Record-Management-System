CC = gcc
CFLAGS = -Wall -Wextra -std=c11

OBJECTS = main.o stu_add.o stu_dlt.o stu_count.o stu_modify.o stu_show.o stu_rev.o stu_sort.o stu_save.o stu_load.o stu_alldel.o

student: $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o student

main.o: main.c header.h
	$(CC) $(CFLAGS) -c main.c

stu_add.o: stu_add.c header.h
	$(CC) $(CFLAGS) -c stu_add.c

stu_dlt.o: stu_dlt.c header.h
	$(CC) $(CFLAGS) -c stu_dlt.c

stu_count.o: stu_count.c header.h
	$(CC) $(CFLAGS) -c stu_count.c

stu_modify.o: stu_modify.c header.h
	$(CC) $(CFLAGS) -c stu_modify.c

stu_show.o: stu_show.c header.h
	$(CC) $(CFLAGS) -c stu_show.c

stu_rev.o: stu_rev.c header.h
	$(CC) $(CFLAGS) -c stu_rev.c

stu_sort.o: stu_sort.c header.h
	$(CC) $(CFLAGS) -c stu_sort.c

stu_save.o: stu_save.c header.h
	$(CC) $(CFLAGS) -c stu_save.c

stu_load.o: stu_load.c header.h
	$(CC) $(CFLAGS) -c stu_load.c

stu_alldel.o: stu_alldel.c header.h
	$(CC) $(CFLAGS) -c stu_alldel.c

clean:
	rm -f $(OBJECTS) student

.PHONY: clean
