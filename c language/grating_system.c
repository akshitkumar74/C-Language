#include<stdio.h>
int main()
{
    int maths, chemistry,physics;
    int average_marks, total;
    printf("enter the number of maths : ");
    scanf("%d",&maths);
    printf("enter the number of chemistry : ");
    scanf("%d",&chemistry);
    printf("enter the number of physics : ");
    scanf("%d",&physics);

    average_marks = (maths+chemistry+physics)/3;
    total = maths+chemistry+physics;



    if ((maths>=35) && (chemistry>=35) && (physics>=35))
    {
        printf("your average marks is %d\n your total marks is %d\n your passed",average_marks,total);
    }
    else
    {
        printf("your average marks is %d\n your total marks is %d\n you are faill",average_marks,total);
    }
    return 0;
}
