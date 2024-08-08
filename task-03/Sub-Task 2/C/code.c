#include <stdio.h>

int main() {
    int num;
    FILE *fp = fopen("input.txt", "r");
    while (fscanf(fp, "%d", &num) == 1)    
        
    fp = fopen("output.txt", "a");
    fprintf(fp, "%d", num);
    
    return 0;

}
