#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char buf[40];
int main(int argc, char* argv[]){
    if(argc<2){
        printf("pass argv[1] a number\n");
        return 0;
    }
    int fd = atoi( argv[1] ) - 0x8000;
    int len = 0;
    len = read(fd, buf, 40);
    if(!strcmp("LETMEGOHOME\n", buf)){
        printf("good pwned!:)\n");
        system("/bin/cat flag.txt");
        exit(0);
    }
    printf("learn about Linux file IO\n");
    return 0;
}
