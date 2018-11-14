/*
Given a user space virtual address p, return the information about this address. 
(1) Is p already allocated/valid or not? 
(2) If yes, what is the start and end addresses of the virtual memory area containing p. 
(3) Is that virtual memory area readable, writable, and/or executable? 
You should iterate through every address in the user address space at an interval of PAGE_SIZE * 1024. 
Finally, print the number of valid/invalid addresses. 
*/
#include <stdio.h>
#include <unistd.h>
#include <linux/sched.h>

int readAddr(void *p)
{
    struct task_struct task;
    struct mm_struct *mem;
    struct vm_area_struct *vm;
    return 0;
}

int main() 
{
    unsigned long PAGE_SIZE = 0, TASK_SIZE = 0;

    PAGE_SIZE = sysconf(_SC_PAGESIZE);
    if(sizeof (void*) == sizeof (int)) // 32-bit system
	    TASK_SIZE = 0xc0000000UL;
    else // 64-bit system
	    TASK_SIZE = (1UL << 47) - PAGE_SIZE;
    
    char *p = 0;
    unsigned long validAddr = 0, invalidAddr = 0;
    for( ; (unsigned long)p < TASK_SIZE; p += PAGE_SIZE * 1024 ) 
    {
	    
	    int r = readAddr(p);
	    //TODO: print the information about p
	    
    }
    printf("%lu out of %lu addresses are valid\n", validAddr, validAddr + invalidAddr);
    
}
