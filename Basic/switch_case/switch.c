#include<stdio.h>
int main()
{
    int ch,ch1;
    
    printf("CHOOSE LANGUAGE FIRST>>\n");
    printf("***********************\n\n");
    printf("Press 1 for English\n");
    printf("Press 2 for Hindi\n");
    printf("Press 3 for Gujarati\n\n");

    printf("Enter Your Choice: ");
    scanf("%d",&ch);

    printf("\n");

    switch(ch)
    {
        case 1:
            printf("Press 1 for Internet Recharge\n");
            printf("Press 2 for Top-up Recharge\n");
            printf("Press 3 for Special Recharge\n\n");

            printf("Enter Your Choice: ");
            scanf("%d",&ch1);

            printf("\n");

            switch(ch1)
            {
                case 1:
                    printf("You have successfully done a Internet Recharge.\n");
                    break;
                
                case 2:
                    printf("You have successfully done a Top-up Recharge.\n");
                    break;

                case 3:
                    printf("You have successfully done a Special Recharge.\n");
                    break;

                default:
                    printf("WRONG CHOICE ENTER AGAIN\n");
            }
            break;



        case 2:
            printf("Internet Recharge ke liye 1 dabaiye\n");
            printf("Top-up Recharge ke liye 2 dabaiye\n");
            printf("Special Recharge ke liye 3 dabaiye\n\n");

            printf("Enter Your Choice: ");
            scanf("%d",&ch1);

            printf("\n");

            switch(ch1)
            {
                case 1:
                    printf("Aapne safaltapurvak Internet Recharge kar liya he.\n");
                    break;
                
                case 2:
                    printf("Aapne safaltapurvak Top-up Recharge kar liya he.\n");
                    break;

                case 3:
                    printf("Aapne safaltapurvak Special Recharge kar liya he.\n");
                    break;

                default:
                    printf("WRONG CHOICE ENTER AGAIN\n");
            }
            break;



        case 3:
            printf("Internet Recharge mate 1 dabavo\n");
            printf("Top-up Recharge mate 2 dabavo\n");
            printf("Special Recharge mate 3 dabavo\n\n");

            printf("Enter Your Choice: ");
            scanf("%d",&ch1);

            printf("\n");

            switch(ch1)
            {
                case 1:
                    printf("Tame safaltapurvak Internet Recharge karyu chhe.\n");
                    break;
                
                case 2:
                    printf("Tame safaltapurvak Top-up Recharge karyu chhe.\n");
                    break;

                case 3:
                    printf("Tame safaltapurvak Special Recharge karyu chhe.\n");
                    break;

                default:
                    printf("WRONG CHOICE ENTER AGAIN\n");
            }
            break;

            default:
                    printf("WRONG CHOICE ENTER AGAIN\n");
    }
    return 0;
}