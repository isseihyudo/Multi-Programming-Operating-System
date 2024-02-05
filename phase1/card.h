/******************************************************/
/* File Name:- card.h                                 */
/* Licence:- GNU GPL v3                               */
/* Project Name:-Multiprogramming Operating System    */
/* ****************************************************/

#ifndef CARD_H_
#define CARD_H_
#include"mem.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/* File Handling Macros */
#define O_READ(x) fopen(x,"rt");
#define O_WRIT(x) fopen(x,"wt");
#define CLOSE(x)  fclose(x);
/* Card functions */
extern FILE* card_open(FILE *FIN,char *FILENAME);
extern int card_read(FILE *FIN,MEM *memory);
extern void card_close(FILE *FIN);
#endif  /* card.h */
