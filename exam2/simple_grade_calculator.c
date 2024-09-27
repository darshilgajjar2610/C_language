#include<stdio.h>
int main()
{
    int grade,ch;
    printf("Enter Your Grade:");
    scanf("%d",&grade);
    
    (grade > 100)?printf("Enter Valid Marks"):
    (grade >= 90 && grade <= 100)? printf("Your grade is A."): 
    (grade >= 80 && grade < 90)? printf("Your grade is B."): 
    (grade >= 70 && grade < 80)? printf("Your grade is C."):
    (grade >= 60 && grade < 70)? printf("Your grade is D."): 
    (grade >= 50 && grade < 60)? printf("Your grade is E."): 
    (grade < 51 && grade >= 0)? printf("Your grade is F."):printf("Enter Valid Marks");
    
    if(grade > 100)
    {
        ch=0;    
    }
    
    else if(grade >= 90 && grade <= 100)
    {
        ch = 1;
    }
    
    else if(grade >= 80 && grade < 90)
    {
        ch = 2;
    }
    
    else if(grade >= 70 && grade < 80)
    {
        ch = 3;
    }
    
    else if(grade >= 60 && grade < 70)
    {
        ch = 4;
    }
    
    else if(grade >= 50 && grade < 60)
    {
        ch = 5;
    }
    
    else if(grade < 50 && grade >=0)
    {
        ch = 6;
    }
    
    else
    {
        ch=0;
    }
    
    switch(ch)
    {
        case 1:
            printf(" Excellent work!");
            break;
    
        case 2:
            printf(" Well done!");
            break;
    
        case 3:
            printf(" Good job!");
            break;
    
        case 4:
            printf(" You passed, but you could do better!");
            break;
    
        case 5:
            printf(" Passed, but have to study more!");
            break;
    
        case 6:
            printf(" Sorry, you failed!");
            break;
    
        default:
                printf("!");
    }
    
    if(grade >= 50 && grade <= 100)
    {
        printf(" You are eligible for the next level.\n");
    }
    
    else if(grade < 50 && grade >=0)
    {
        printf(" Please try again next time\n");
    }
    
    else
    {
        printf("!\n");
    }
    return 0;
}