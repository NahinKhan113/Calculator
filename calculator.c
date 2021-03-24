#include<stdio.h>
/*int title()
{
    printf(" *     * *** * ****\n  *   *  * * *  *  *\n   * *   * * *  *  *\n    *    *** * ****");
    //return 0;
}
int add()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("\t%d",c);
}
int sub()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    c=a-b;
    printf("\t%d",c);
}
int mul()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    c=a*b;
    printf("\t%d",c);
}
float div()
{
    float a,b,c;
    scanf("%f%f",&a,&b);
    c=a/b;
    printf("\t%f",c);
}
int matrix()
{
    int r_1,r_2,c_1,c_2,r,c,x,y;
    printf("\nFor\tA\nGive number of\nRow: ");
    scanf("%d",&r_1);
    printf("Column: ");
    scanf("%d",&c_1);
    int a[r_1][c_1];
    for(r=1;r<=r_1;r++)
    {
        for(c=1;c<=c_1;c++)
            scanf("%d",&a[r][c]);
    }
    for(r=1;r<=r_1;r++)
    {
        for(c=1;c<=c_1;c++)
            printf("%d\t",a[r][c]);
        printf("\n");
    }
    printf("\nFor\tB\nGive number of\nRow: ");
    scanf("%d",&r_2);
    printf("Column: ");
    scanf("%d",&c_2);
    int b[r_2][c_2];
    for(r=1;r<=r_2;r++)
    {
        for(c=1;c<=c_2;c++)
            scanf("%d",&b[r][c]);
    }
    for(r=1;r<=r_2;r++)
    {
        for(c=1;c<=c_2;c++)
            printf("%d\t",a[r][c]);
        printf("\n");
    }

}*/
int main()
{
    //title();
    /*int a;
a:  //printf("\n\n***********\nChoose\tyour\toperation\tmode:\naddition");
    //printf("\tsub\tmultiplication\tdivision\tnext\n   1\t\t2\t3\t\t4\t\t5\n");
    //scanf("%d",&a);
    switch(a)
    {
        case 1:
            //add();goto b;
        case 2:
            //sub();goto b;
        case 3:
            //mul();goto b;
        case 4:
            //div();goto b;
        case 5:
            break;
    }
    printf("\nMatrix\tEQN\n   1\t 2\n");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
            //matrix();goto b;
        case 2:
        {
            printf("\n\tPolynomial:\t1\n\t");
            //;goto b;
        }
        case 5:
            break;
    }
b:  *///printf("\n*\t*\t*\n*\tDO you want to do another calculation?\n\tYes: 1\n\tNo: 2\n");
    //scanf("%d",&a);
    //if(a==1)
        //goto a;
        printf("*");
    return 0;
}
