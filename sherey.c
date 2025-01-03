#include<stdio.h>
int sum(int num1, int num2)
{
    printf("The sum of two numbers are : %d\n",(num1+num2));
}
int sub(int num1,int num2)
{
    printf("The difference of two numbers are : %d\n",(num1-num2));
}
int main(){

    int num, choice,num1,num2;
    char c;

    do
  {

    printf("CALCULATORRRR\n");

    printf("Choose Operation:\n1)Addition\n\t2)Subtraction\n\t3)Divison\n\t4)Multiplication\n");
    scanf("%d", &choice);

    printf("enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    switch (choice)
    {
    case 1:

      sum(num1,num2);

      break;

    case 2:

      sub(num1,num2);

      break;

    // case 3:

    //   div();

    //   break;

    // case 4:

    //   mul();

    //   break;

    default:

      "Invalid choice, Input again.";
    }

    printf("DO YOU WANT TO USE THE CALCULATOR AGAIN?? (y/n): ");
    scanf(" %c", &c);

  }

  while (c == 'y');

    printf("You have reached the end of the program");
  return 0;
}

