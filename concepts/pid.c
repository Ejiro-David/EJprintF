#include <stdio.h>
#include <unistd.h>
#include <limits.h>

//Function prints the max attenable pid

int main(void)
{
    pid_t my_pid;
    pid_t last_pid = 0;

    for (my_pid = 0; my_pid < INT_MAX; my_pid++)
    {
        pid_t curr_pid = getpid();

        // how does the if comparism below indicate that maximum pid has been reached?
        if(getpid() != curr_pid){ 
            break;
        }
        last_pid = my_pid;
 
    }

    printf("max pid: %u\n", last_pid);
    return 0;
}
