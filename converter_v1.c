#include <stdio.h>
int main (){
    char USD = 'U';
    char EUR = 'E';
    char MAD = 'M';
    char currency_1;
    char currency_2;
    double amount;
    //CURENCY 1
    printf("Enter your curency?(M for MAD, E for EURO and U for USD)\n");
    scanf("%c",&currency_1);
    //CURENCY 2
    printf("Enter your desired curency?(M for MAD, E for EURO and U for USD)\n");
    scanf(" %c",&currency_2);
    //AMOUNT
    printf("Enter your amount?\n");
    scanf("%lf",&amount);
    printf("Current Currency : %lf\n",amount);
    //IF STATEMENT
    if (currency_1 == MAD || currency_1 == EUR || currency_1 == USD){
        if (currency_2 == MAD || currency_2 == EUR || currency_2 == USD){
            if (currency_1 == MAD){
                if (currency_2==USD){
                    printf("MAD TO USD Convert\n");
                    amount = amount*0.099;
                }
                else if (currency_2 ==EUR){
                    printf("MAD TO EUR Convert\n");
                    amount = amount*0.09;
                } 
            }
            else if (currency_1==EUR){
                if (currency_2==USD){
                    printf("EUR TO USD Convert\n");
                    amount = amount*1.1;
                }
                else if (currency_2==MAD){
                    printf("EUR TO MAD Convert\n");
                    amount = amount*11.17;
                }
            }
            else if (currency_1==USD){
                if (currency_2==MAD){
                    printf("USD TO MAD Convert\n");
                    amount = amount*10.15;
                }
                else if (currency_2==EUR){
                    printf("USD To EUR Convert\n");
                    amount = amount*0.91;
                }
            }
            printf("Converted Currency : %lf\n",amount);
        }
        else{
            printf("STUPID! BASTARD!\n");
        }
    }
    else{
        printf("STUPID! BASTARD!");
    }
    return 0;
}
