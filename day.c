#include <time.h>
#include <stdio.h>

int main(void) {
    char buffer[32];
    struct tm *ts;
    size_t last;
    time_t timestamp = time(NULL);

    ts   = localtime(&timestamp);
    last = strftime(buffer, 32, "%A", ts);
    buffer[last] = '\0';

    printf("%s\n", buffer);
    return 0;
}