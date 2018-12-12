#include <stdio.h>
#include <stdint.h>

struct Computer {
    float cpu_speed_GHz;
    int ram_size_GB;
    int bits;
};

typedef struct {
    float cpu_speed_GHz;
    int ram_size_GB;
    int bits;
} Notebook;

int main()
{
    struct Computer HP;
    HP.cpu_speed_GHz = 2.5;
    printf("CPU speed is: %0.2lf GHz.\n", HP.cpu_speed_GHz);
    HP.ram_size_GB = 12;
    printf("HP has %d GB ram.\n", HP.ram_size_GB);

    Notebook DELL;
    DELL.cpu_speed_GHz = 3.5;
    printf("CPU speed is %0.2lf GHz.\n", DELL.cpu_speed_GHz);
    DELL.ram_size_GB = 12;
    printf("DELL has %d GB ram.", DELL.ram_size_GB);

    return 0;
}