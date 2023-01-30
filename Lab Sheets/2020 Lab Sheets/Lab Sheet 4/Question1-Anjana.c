#include <stdio.h>

void drawLines();
void drawLinesWithRow(int a);
void drawLinesWithRowCol(int a,int b);
void newrect(int h,int w,int c);

int main()
{
    printf("(a,b)\n");
    drawLines();

    printf("(c,d)\n");
    drawLinesWithRow(6);

    printf("\n");
    drawLinesWithRow(12);

    printf("(e,f)\n");
    drawLinesWithRowCol(7,4);

    printf("\n");
    drawLinesWithRowCol(5,5);

    printf("(g)\n");
    newrect(4,8,'#');
    return 0;
}

void drawLines(){
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++)
            printf("*");
        printf("\n");
    }
}

void drawLinesWithRow(int a){
    for(int i=0;i<a;i++){
        for(int j=0;j<10;j++)
            printf("*");
        printf("\n");
    }
}

void drawLinesWithRowCol(int a,int b){
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++)
            printf("*");
        printf("\n");
    }
}

void newrect(int h,int w,int c){
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++)
            printf("%c",c);
        printf("\n");
    }

}
