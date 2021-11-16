#include <stdio.h>
#include <string.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer starter, size_t len){
    size_t i;
    for(i = 0;i<len;i++)
        printf("%.2x",starter[i]);
    printf("\n");
}

void show_int(int x){
    show_bytes((byte_pointer) &x,sizeof(int));
}
void show_float(float x){
    show_bytes((byte_pointer) &x,sizeof(float));
}
void show_pointer(void *x){
    show_bytes((byte_pointer) &x,sizeof(void *));
}

void inplace_swap(int *x,int *y){
    *y = *x ^ *y;
    *x = *x ^ *y;
    *y = *x ^ *y;
}

int equals(int x,int y){
    return !v(x ^ y);
}

int main(){
    // const char* s= "abcdef";
    // show_bytes((byte_pointer)s,strlen(s));
    // int x = 0x87654321;
    // printf("0X%.8x",x ^ 0xFFFFFF00);
    printf("%d",equals(1,1));
    return 0;
}