#include <stdio.h>
#include <stdlib.h>

//Aly Husein 2211 Assignment 3 Task 1

float s_exp(float sub_exp, char op);
float m_exp(float sub_exp, char op);
float get_num();
char get_op();
char answer;
int done = 0;

float main()
{
  do {
printf("Hi there, Please input a simple arithmetic expression: ");
printf("%.2f", s_exp(0, '+'));
printf("\nWould you like to continue?");
printf("\nPlease enter Y for Yes, N for Quit\n");
scanf("%c", &answer);
if (answer == 'Y')
{
  continue;
}
else if (answer == 'N')
{
  done = 1;
  printf("Thanks for using my program! Have a nice day.");
}
else
  printf("Invalid input, Goodbye.");
  exit(EXIT_FAILURE);
}
while (done == 0);
}
// Input: ’sub_exp’: the value of the sub s_expression to the left of ’op’
// location in stdin.
// ’op’ : an operator, ’+’ or ’-’. ’op’ could also be
// ’\n’ indicating the end of the s_expression
// the rest of the expression will be read in from stdin
// Effect: the whole s_expression is evaluated using recursion:
// get next_num with m_exp() and then get next_op with get_op()
// use ’sub_exp op next_num’ and ’next_op’ to do recursive call
// Output: this function returns the value of the s_expression
float s_exp(float sub_exp, char op)
{
  if (op == '\n')
  {
    return sub_exp;
  }
  else
  {
    float f1 = m_exp(1, '*');
    char op1 = get_op();

    if (op == '+')
    {
      f1 = sub_exp + f1;
    }
    else if (op == '-')
    {
      f1 = sub_exp - f1;
    }
    else
    {
      printf("Your input is invalid, Goodbye.");
      exit(EXIT_FAILURE);
    }
    return s_exp(f1, op1);
  }
}
// Input: ’sub_exp’: the value of the current sub m_expression
// to the left of ’op’ location in stdin.
// ’op’ : an operator, ’*’ or ’/’. ’op’ could also be
// ’+’, ’-’, or ’\n’ indicating the end of the m_expression.
// "+’, ’-’, or ’\n’ should be pushed back to stdin.
// the rest of the m_expression will be read in from stdin
// Effect: the m_expression is evaluated using recursion:
// get next_num with get_num() and then get next_op with get_op()
// use ’sub_exp op next_num’ and ’next_op’ to do recursive call
// Output: this function returns the value of the current m_expression
float m_exp(float sub_exp, char op)
{
    if (op == '+' || op == '-' || op == '\n')
    {
      ungetc(op, stdin);
      return sub_exp;
    }
    else
    {
      float f1 = get_num();
      char op1 = get_op();
      if (op == '*')
      {
        f1 = sub_exp * f1;
      }
      else if (op == '/')
      {
        f1 = sub_exp / f1;
      }
      else
      {
        printf("Your input is invalid, Goodbye");
        exit(EXIT_FAILURE);
      }
      return m_exp(f1, op1);
    }
}
//The following two functions should also be used to simplify the programming task.
// Input: none, read from stdin
// Effect: get the next operator of the expression
// this operator can be +, -, *, /, or ’\n’
// ’\n’ indicates the end of the expression input
// leading spaces should skipped
// Output: return the next operator of the expression.
char get_op()
{
    char op;
    scanf("%c", &op);
    return op;
}
// Input: none, read from stdin
// Effect: get the next numeric value of the expression
// Output: return the next numeric value of the expression.
float get_num()
{
    float num;
    scanf("%f", &num);
    return num;
}

