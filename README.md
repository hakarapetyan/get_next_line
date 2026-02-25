# 📖 Get Next Line: Reading Files Line by Line

📝 Project Overview
The Get Next Line project is about creating a function that reads text from a file descriptor (like a .txt file or the terminal input) and returns it one line at a time. Each time you call the function, it provides the next line of the file until the end is reached.

### 🧩 Key Concepts
Static Variables
In C, normal local variables are destroyed when a function finishes. A static variable stays in memory until the program ends. In this project, a static variable acts as a "buffer" or a "memory bank" to store the extra text read from a file that belongs to the next line.

Buffer Size
The project uses a macro called BUFFER_SIZE. This defines how many bytes the program reads at once. Your code must work perfectly whether the buffer is very small (1 byte), medium (42 bytes), or very large (10,000,000 bytes).

### 🛠️ Function Details

Function Name,get_next_line

Prototype,char *get_next_line(int fd);

Files,"get_next_line.c, get_next_line_utils.c, get_next_line.h"

Parameters,fd: The file descriptor to read from.

Return Value,"The line read (including \n), or NULL if finished or an error occurs."

### 🌟 Bonus Part: Multiple File Descriptors
The bonus section of this project takes the function to the next level by adding two main challenges:

1. Single Static Variable
While the mandatory part allows multiple static variables, the bonus requirement limits the code to only one static variable. This requires a more efficient way to manage memory and data storage.

2. Managing Multiple Files
In the mandatory version, the function only needs to handle one file at a time. The bonus version can manage multiple file descriptors simultaneously without getting them mixed up.

### ⚙️ Technical Logic
To handle multiple files with a single static variable, the variable is typically structured as an array or a linked list. This allows the function to store a separate "reading state" for every unique File Descriptor (fd) opened by the system.

### 📦 Instructions
Compilation
To compile the project with a specific buffer size, use the following command:
```bash
cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c -o gnl
```
To compile the bonus version, use the _bonus.c files:
```bash
cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line_bonus.c get_next_line_util.c
```
