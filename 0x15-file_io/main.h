#ifndef MAIN_H
#define MAIN_H
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
Ssize_t Read_Textfile(const char *filename, size_t letters);
int create_file(Const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
#endif

