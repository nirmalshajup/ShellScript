#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>
int main()
{
    int fd;
    char buffer[100];
    char msg[100] = "Hello, i am Nirmal Shaju";
    fd = open("hello.txt",O_RDWR);
    printf("fd=%d\n",fd);
    if(fd != -1)
    {
        printf("hello.txt opened with RW access.\n");
        write(fd,msg,sizeof(msg));
        lseek(fd,0,SEEK_SET);
        read(fd,buffer,sizeof(msg));
        printf("%s was written to the file.\n",buffer);
        close(fd);
    }
    return 0;
}