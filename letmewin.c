#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h> // for read function

char buf[32];

int main(int argc, char* argv[], char* envp[]) {
    if (argc < 2) {
        printf("pass argv[1] a number\n");
        return 0;
    }

    int fd = atoi(argv[1]) - 0x1234; // i give you a hint already
    int len = 0;
    len = read(fd, buf, 32);

    if (!strcmp("LETMEWIN\n", buf)) {
	     // you may think this is the flag, yes, but the motive is not getting the flag you need to find out the concept to print this out.
        printf("good job :)\n");
	    
        printf("yes ! you are proved that Hacker\n"); 
    }
	else{

    printf("learn about Linux file IO and c concept\n");
}
    return 0;
}



