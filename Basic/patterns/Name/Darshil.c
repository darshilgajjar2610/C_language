#include <stdio.h>

int main()
{
    int i,j;
    for(i=1;i<=7;i++)
    {
        for(j=1;j<=41;j++)
        {
            if(i==1 || i==5 || i==4 || i==6 || i==7 || j==2 || j==5 || j==7 || j==11 || j==38 || j==13 || j==17 || j==19 || j==23 || j==25 || j==30 || j==34)
            {
                //printf("*");
                if((i==1&&j==  5) || (i==4&&j== 4) || (i==4&&j== 6) || (i==4&&j== 8) || (i==4&&j== 9) || (i==4&&j== 9) || (i==4&&j== 1) || (i==4&&j==10) 
				 || (i==4&&j== 3) || (i==5&&j== 1) || (i==5&&j== 3) || (i==5&&j== 4) || (i==4&&j==18) || (i==5&&j==18) || (i==6&&j==12) || (i==4&&j==12)
				 || (i==6&&j==18) || (i==7&&j==18) || (i==1&&j==18) || (i==5&&j== 6) || (i==5&&j==12) || (i==5&&j==14) || (i==6&&j==14) || (i==6&&j==17) 
				 || (i==7&&j==14) || (i==7&&j==15) || (i==4&&j==17) || (i==4&&j==17) || (i==7&&j==16) || (i==6&&j==15) || (i==5&&j==17) || (i==6&&j==14)
				 || (i==5&&j==16) || (i==5&&j==17) || (i==1&&j== 7) || (i==1&&j==11) || (i==1&&j==12) || (i==7&&j== 5) || (i==1&&j== 6) || (i==7&&j== 6) 
				 || (i==7&&j== 8) || (i==7&&j== 9) || (i==7&&j==10) || (i==7&&j==12) || (i==6&&j== 3) || (i==6&&j== 1) || (i==6&&j== 4) || (i==6&&j== 6) 
				 || (i==6&&j== 8) || (i==6&&j== 9) || (i==6&&j==10) || (i==2&&j==23) || (i==3&&j==23) || (i==5&&j==19) || (i==6&&j==19) || (i==6&&j==20) 
				 || (i==1&&j==24) || (i==6&&j==21) || (i==6&&j==22) || (i==6&&j==24) || (i==5&&j==21) || (i==5&&j==22) || (i==5&&j==24) || (i==5&&j==20) 
				 || (i==7&&j==24) || (i==4&&j==24) || (i==1&&j==27) || (i==1&&j==28) || (i==1&&j==26) || (i==1&&j==29) || (i==5&&j==27) || (i==5&&j==28) 
				 || (i==5&&j==26) || (i==5&&j==29) || (i==6&&j==27) || (i==6&&j==28) || (i==6&&j==26) || (i==6&&j==29) || (i==7&&j==27) || (i==7&&j==28) 
				 || (i==7&&j==26) || (i==7&&j==29) || (i==1&&j==31) || (i==5&&j==31) || (i==6&&j==31) || (i==7&&j==31) || (i==4&&j==31) || (i==1&&j==37)
				 || (i==4&&j==32) || (i==4&&j==33) || (i==4&&j==35) || (i==4&&j==36) || (i==4&&j==37) || (i==5&&j==32) || (i==5&&j==33) || (i==5&&j==35) 
				 || (i==5&&j==36) || (i==5&&j==37) || (i==6&&j==32) || (i==6&&j==33) || (i==6&&j==35) || (i==6&&j==36) || (i==6&&j==37) || (i==7&&j==37)
				 || (i==1&&j==39) || (i==1&&j==40) || (i==1&&j==41) || (i==4&&j==39) || (i==4&&j==40) || (i==4&&j==41) || (i==5&&j==39) || (i==5&&j==40) 
				 || (i==5&&j==41) || (i==6&&j==39) || (i==6&&j==40) || (i==6&&j==41) || (i==1&&j==17) || (i==1&&j==19) || (i==4&&j==19) || (i==4&&j==23)
				 || (i==7&&j==23) || (i==7&&j==38))
                {
                    printf(" ");
                }
                else
                {
                    printf("*");
                }
            }
            else
            {
                printf(" ");
            }
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}