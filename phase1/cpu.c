/******************************************************/
/* File Name:- cpu.c                                 */
/* Licence:- GNU GPL v3                               */
/* Project Name:-Multiprogramming Operating System    */
/* ****************************************************/

#include"cpu.h"

/* Innitialize cpu */
CPU* cpu_init(CPU *cpu){
  cpu=(CPU*)malloc(sizeof(CPU));
  if(cpu==NULL)
    {
      fprintf(stderr,"Memory not allocated");
    }
  memset((void*)cpu->IR,'\0',sizeof(char)*4);
  memset((void*)cpu->R,'\0',sizeof(char)*4);
  cpu->PC=0;
  cpu->SI=none;
  cpu->PI=n;
  cpu->MODE=slave;
  cpu->C=false;
  return cpu;
}
