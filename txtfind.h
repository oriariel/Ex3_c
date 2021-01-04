#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <stdbool.h>
#define LINE 256
#define TotalLine 250
#define WORD 30
int getline(char s[]);
int getword(char w[]);
int substring(char* str1, char* str2);
int similar(char* s, char* t, int n);
void print_similar_words(char* str);
void print_lines(char* st);		