#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {
    if(argc > 1) {
        char * ex = argv[0];
        
        if(strcmp(ex, "0")) {
            printf("%d", 3*333*334/2 + 5*199*200/2 - 15*66*67/2);
        }
    }
}