#include<stdio.h>

int main(){

    int num, choice;
    char c;

    do
  {

    printf("CALCULATORRRR\n");

    printf("Choose Operation:\n1)Addition\n\t2)Subtraction\n\t3)Divison\n\t4)Multiplication\n");
    scanf("%d", &choice);

    printf("enter two numbers: ");
    scanf("%d %d", &x, &y);

    switch (choice)
    {
    case 1:

      sum();

      break;

    case 2:

      sub();

      break;

    case 3:

      div();

      break;

    case 4:

      mul();

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

