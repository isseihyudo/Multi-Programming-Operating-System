/******************************************************/
/* File Name:- mem.c                                 */
/* Licence:- GNU GPL v3                               */
/* Project Name:-Multiprogramming Operating System    */
/* ****************************************************/

#include"mem.h"

/* Allocate Memory */
static MEM* mem_alloc(MEM *memory){
  if(memory==NULL){
    memory=(MEM*)malloc(sizeof(MEM));
  }
  if(memory==NULL)
    {
      fprintf(stderr,"Memory not allocated");
      exit(8);
    }
  return memory;
}

/* Set Whole Memory To Blank */
static MEM* mem_set(MEM *memory){
  memset((void*)memory->BUFF,'\0',sizeof(char)*20*42);
  memset((void*)memory->LINE,'\0',sizeof(char)*42);
  memset((void*)memory->MMEM,'\0',sizeof(char)*10*42);
  return memory;
}

/* Innitialize Memory */
MEM* mem_init(MEM *memory){
 memory=mem_alloc(memory);
 memory=mem_set(memory);
 return memory;
}

/* Get A Character From Memory Buffer */
char inline mem_getchar(MEM *memory,int line,int place){
  return (*memory).BUFF[line][place];
}

/* Get A Character From Current Memory Line*/
char inline meml_getchar(MEM *memory,int no){
  return (*memory).LINE[no];
}

/* Get A Character From Main Memory */
char inline memm_getchar(MEM *memory,int line,int place){
  return (*memory).MMEM[line][place];
}
