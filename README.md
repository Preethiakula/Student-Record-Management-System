# Student Record Management System

A menu-driven Student Record Management System written in C using a singly linked list.

## Features

- Add student records with the smallest available roll number
- Delete a record by roll number or name
- Display all records
- Modify a record by roll number, name, or percentage
- Save records to `student.dat` and load them when the program starts
- Sort records by name (ascending) or percentage (descending)
- Delete all records
- Reverse the linked list
- Count linked-list nodes through `countNode()`

## Build

Open a terminal in this project folder and run:

```bash
make
```

## Run

```bash
./student
```

## Clean generated files

```bash
make clean
```

The `student.dat` file is created when records are saved. Keep it in the same folder as the executable to load previously saved records.
