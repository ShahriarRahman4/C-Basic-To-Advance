 #include<stdio.h>
 int main()
 {
int mark;

printf("Enter your mark :");
scanf("%d",&mark);

if(mark>100)
{
    printf("Invalid mark");

}
else if(mark<0)
{
    printf("Invalid mark");
}
else if(mark>=80)
{
    printf("A+");
}
else if(mark>=70)
{
    printf("A");
}
else if(mark>=60)
{
    printf("A-");
}

else if(mark>=50)
{
    printf("B");
}

else if(mark>=40)
{
    printf("C");
}

else
{
    printf("Fail");
}



    return 0;
 }