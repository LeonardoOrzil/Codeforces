#include <stdio.h>
// Idk how this worked, but it just worked, so here it is (this code was made by me and my friend Renato Teixeira)
int main (){
    int a, b, c, x;
    scanf("%d\n", &x);
    for(int i=0; i<x; i++){
        scanf("%d %d", &a, &b);
        if(a>b){
            c=a-b;
        }else{
            c=b-a;
        }
        if(a==1 && b==1){
            printf("1\n");
        }else{
            printf("%d\n", c);
        }
    }
return 0;
}
