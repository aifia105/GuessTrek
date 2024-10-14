#include <stdio.h>
#include <dirent.h>
#include <stdlib.h>

int main(){
    DIR *dir;
    struct dirent *entry;
    char *dir_name = ".";
    char c ;

    dir = opendir(dir_name);
    if(dir == NULL){
        perror("unable to read directory");
        exit(EXIT_FAILURE);
    }

    sancf("%s",&c);

    if(c != "ls"){
         printf("hi");
    } else {
        while((entry = readdir(dir)) != NULL ){
        printf("%s\n",entry->d_name);
    }

    }


    closedir(dir);
    return 0;
}
