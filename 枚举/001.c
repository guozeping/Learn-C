#include "stdio.h"

int main() {
    enum Day{
        one,
        two
    };
    enum Day day;
    printf("%lu\n", sizeof(day));
    
    
};