    #include <stdio.h>
     
    int main () {
        int x, y, m = 0;
        scanf("%d",&x);
        while (x>=5){
                y=x-5;
                x=y;
                m++;    }
        if (x>=4){
                y=x-4;
                x=y;
                m++;
        }
        else if (x>=3){
                y=x-3;
                x=y;
                m++;
        }
        while (x>=2){
                y=x-2;
                x=y;
                m++;
        }
        while (x>=1){
                y=x-1;
                x=y;
                m++;
        }
     
        printf("%d",m);
    return 0;
    }
