#include"cal_taha.h"
void cal_taha(float num1, float num2,char op)
{
    switch(op)
    {
    case '+':
        printf("the result is :%0.2f\n\a",num1+num2);
        break;
    case '-':
        printf("the result is :%0.2f\n\a",num1-num2);
        break;
    case '*':
        printf("the result is :%0.2f\n\a",num1*num2);
        break;
    case '%':
        printf("the result is :%i\n\a",(int)num1%(int)num2);
        break;
    case '/':
        switch((int)num2)
        {
        case 0:printf("Error!!!!\n\a");
        break;
        default:printf("the result is :%0.2f\n\a",num1/num2);
        }
        break;

    default:printf("the entered operation is not valid\n\a");


    }}

