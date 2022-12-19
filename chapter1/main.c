#include <stdio.h>
enum{SIZE = 8};
int main(int argc, char**argv){
    FILE *fp;
    fp = fopen("test.tiff", "rb");
    char buffer[SIZE];
    int bytes_read = fread(buffer, 1, SIZE, fp);
    if(buffer[0] == 0x49 && buffer[1] == 0x49){
        printf("Least Signifcant Bytes first!\n");
    }
    else if(buffer[0] == 0x4d && buffer[1] == 0x4d){
        printf("Most Signifcant Bytes first!\n");
    }else{
        printf("error!");
    }

    for(size_t i = 0; i < SIZE; i++){
        printf("%hhx\t", buffer[i]);
    }

    
}