#include <sys/syspage.h>
#include <stdio.h>

int main(int argc, char** argv)
{
        printf("%d\n", _syspage_ptr->num_cpu);
        return 0;
}