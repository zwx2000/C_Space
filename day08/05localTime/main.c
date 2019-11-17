#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//1970 1 1 0 0 0

int main()
{
    time_t rawtime;
    rawtime = time(NULL);

    struct tm * timeinfo;
    timeinfo = localtime(&rawtime);

    printf("year :%d\n", timeinfo->tm_year+1900);
    printf("month:%d\n", timeinfo->tm_mon+1);
    printf("day  :%d\n", timeinfo->tm_mday);

    printf("hour :%d\n", timeinfo->tm_hour);
    printf("min  :%d\n", timeinfo->tm_min);
    printf("sec  :%d\n", timeinfo->tm_sec);

    return 0;
}
