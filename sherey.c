#include<stdio.h>

int mul(int num1, int num2){
    printf("%d x %d = %d",num1,num2,num1*num2);
}

int div(int num1,int num2){
    printf("%d / %d = %d",num1,num2,num1/num2);
}

int main(){

    int num1,num2, choice;
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

     // sum();

      break;

    case 2:

      //sub();

      break;

    case 3:

      div(num1,num2);

      break;

    case 4:

      mul(num1,num2);

      break;

    default:

      "Invalid choice, Input again.";
    }

    printf("DO YOU WANT TO USE THE CALCULATOR AGAIN?? (y/n): ");
    scanf(" %c", &c);

  }

  while (c == 'y');

  return 0;
}

