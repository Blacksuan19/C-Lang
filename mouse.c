// read mouse input (linux only).
#include <linux/input.h>
#include <fcntl.h>    

int main(int argc, char **argv)
{
int fd;
if ((fd = open("/dev/input/mice", O_RDONLY)) < 0) {
    perror("evdev open");
    exit(1);
}

struct input_event ev;

while(1) {
    read(fd, &ev, sizeof(struct input_event));
    printf("value %d, type %d, code %d\n",ev.value,ev.type,ev.code);
}

return 0;
}