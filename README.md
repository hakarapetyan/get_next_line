📖 #Get Next Line: Reading Files Line by Line

📝 Project Overview
The Get Next Line project is about creating a function that reads text from a file descriptor (like a .txt file or the terminal input) and returns it one line at a time. Each time you call the function, it provides the next line of the file until the end is reached.

🧩 Key Concepts
Static Variables
In C, normal local variables are destroyed when a function finishes. A static variable stays in memory until the program ends. In this project, a static variable acts as a "buffer" or a "memory bank" to store the extra text read from a file that belongs to the next line.

Buffer Size
The project uses a macro called BUFFER_SIZE. This defines how many bytes the program reads at once. Your code must work perfectly whether the buffer is very small (1 byte), medium (42 bytes), or very large (10,000,000 bytes).

🛠️ Function Details

Function Name,get_next_line

Prototype,char *get_next_line(int fd);

Files,"get_next_line.c, get_next_line_utils.c, get_next_line.h"

Parameters,fd: The file descriptor to read from.

Return Value,"The line read (including \n), or NULL if finished or an error occurs."
