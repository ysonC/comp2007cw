#include <stdlib.h>
#include <sys/time.h>
#include "coursework.c"
#include <stdio.h>
#include <unistd.h>
#include <time.h>

int main()
{
    Process *proc = generateProcess(1);
    while (proc->iState != 4)
    {
        runPreemptiveProcess(proc, 0, 0);
        int cpu = proc->iHash;
        int pid = proc->iPID;
        int bTime = proc->iBurstTime;
        int rTime = proc->iRemainingBurstTime;
        printf("SIMULATOR - CPU %d: [PID = %d, InitialBurstTime = %d, RemainingBurstTime = %d]\n", cpu, pid, bTime, rTime);
        
    }
}