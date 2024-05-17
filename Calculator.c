#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

float add()
{
    int a[100];
    float num, sum = 0; 

    printf("How many numbers: ");
    scanf("%f", &num);

    for (int i = 0; i < num; i++)
     {
        printf("Enter your number: ");
        scanf("%d", &a[i]);
        sum += a[i];
    }

    printf("The result is: %.2f\n", sum);

    return 0;
}

float subtract()
{
    int a[100];
    float num, sub = 0;

    printf("How many numbers: ");
    scanf("%f", &num);

    for (int i = 0; i < num; i++)
     {
        printf("Enter your number: ");
        scanf("%d", &a[i]);
        sub -= a[i];
    }

    printf("The result is: %.2f\n", sub);

    return 0;
}

float multiplication()
{
    int a[100];
    float num, mult = 1;

    printf("How many numbers: ");
    scanf("%f", &num);

    for (int i = 0; i < num; i++)
     {
        printf("Enter your number: ");
        scanf("%d", &a[i]);
        mult *= a[i];
    }

    printf("The result is: %.2f\n", mult);

    return 0;
}

float division()
{
    float num1, num2, result;
    printf("Enter Two Numbers:");
    scanf("%f%f",&num1,&num2);
    if(num2!=0)
    {
        result = num1/num2;
        printf("Division of the numbers is :%.2f\n\n",result);
        return 0;
    }
    else
    {
        printf("You can't divide a number by 0\n");
        printf("Lets do the calculation again\n");
        division();
    }
}

float square()
{
    float num1, result;
    printf("Enter Your Number:");
    scanf("%f",&num1);
    result = num1*num1;

    printf("Square of the numbers is :%.2f\n\n",result);
    return 0;
}

float root()
{
    float num1, result;
    printf("Enter Your Number:");
    scanf("%f",&num1);
    result = sqrt(num1);
    printf("Root of the numbers is :%.2f\n\n",result);
    return 0;
}

int primeNumberChecking()
{
    int num1, result;
    int i,flag=0;
    printf("Enter Your Number:");
    scanf("%d",&num1);

    if(num1<=1)
    {
        printf("0 and 1 are not prime numbers\n\n");
        return 0;
    }

    for(i=2; i<=(num1/2); i++)
    {
        if(num1%i==0)
        {
            printf("%d is not a prime number\n\n",num1);
            flag++;
            return 0;
        }
    }
    if(flag==0)
    {
        printf("%d is a prime number\n\n",num1);
        return 0;
    }
}

int palindromeChecking()
{
    int oriNum, revNum=0, remainder,temp;
    printf("Enter Your Number:");
    scanf("%d",&oriNum);
    temp=oriNum;
    while(temp>0)
    {
        remainder=temp%10;
        revNum = revNum*10+remainder;
        temp = temp/10;
    }
    if(oriNum==revNum)
    {
        printf("%d is a palindrome number\n\n",oriNum);
        return 0;
    }
    else
    {
        printf("%d is not a palindrome number\n\n",oriNum);
        return 0;
    }
}

int fibonacchiSequenceGeneration()
{
    int i, n, t1=0, t2=1;
    int next=t1+t2;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    printf("Fibonacci Series: %d, %d, ", t1, t2);
    for(i=3; i<=n; i++)
    {
        printf("%d",next);
        if(i<n)
        {
            printf(", ");
        }
        t1=t2;
        t2=next;
        next=t1+t2;
    }
    printf("\n\n");
    return 0;
}

int factorialCalculation()
{
    int num, i, result=1;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(i=num; i>0; i--)
    {
        result= result*i;
    }
    printf("Factorial of %d is %d\n\n",num,result);
}
float matrixadd()
{
     int r, c, a[100][100], b[100][100], sum[100][100], i, j;
  printf("Enter the number of rows : ");
  scanf("%d", &r);
  printf("Enter the number of columns : ");
  scanf("%d", &c);

  printf("\nEnter elements of 1st matrix:\n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("Enter element a%d%d: ", i + 1, j + 1);
      scanf("%d", &a[i][j]);
    }

  printf("Enter elements of 2nd matrix:\n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("Enter element b%d%d: ", i + 1, j + 1);
      scanf("%d", &b[i][j]);
    }

  // adding two matrices
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      sum[i][j] = a[i][j] + b[i][j];
    }

  // printing the result
  printf("\nSum of two matrices: \n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("%d\t\n",a[i][j],b[i][j],sum[i][j]);

    }

  return 0;
}
float derivative()
{


double f(double x) 
{
    return x * x; // Example function: f(x) = x^2
}

double differentiate(double x, double h) {
    double derivative = (f(x + h) - f(x)) / h;
    return derivative;
}

    double x; // Point at which to calculate the derivative
    printf("enter the value which will be derivative : ");
    scanf("%lf",&x);
    double h = 0.0001; // Small increment
    double derivative = differentiate(x, h);
    
    printf("The derivative of f(x) = x^2 at x = %.2f is %.2f\n", x, derivative);
    
    return 0;
}
double newton_refson()
{
double f(double x) {
    // Define the function for which we want to find the root
    return x * x - 4;
}

double f_prime(double x) {
    // Define the derivative of the function
    return 2 * x;
}

double newton_raphson(double x0, double epsilon) {
    double x = x0;
    double delta;

    do {
        delta = f(x) / f_prime(x);
        x -= delta;
    } while (fabs(delta) > epsilon);

    return x;
}


    double root = newton_raphson(1.0, 0.0001);
    printf("Root: %f\n", root);

    return 0;

}

//float moreOption()
/*{

}*/

int choices()
{
    int choice;
    printf("Press 1 for Add\n");
    printf("Press 2 for Subtract\n");
    printf("Press 3 for Multiplication\n");
    printf("Press 4 for Division\n");
    printf("Press 5 for Square\n");
    printf("Press 6 for Root\n");
    printf("Press 7 for Prime Number Checking\n");
    printf("Press 8 for Palindrome Checking\n");
    printf("Press 9 for Fibonacci Sequence Generation\n");
    printf("Press 10 for Factorial Calculation\n");
    printf("Press 11 for Matrix Add\n");
    printf("Press 12 for Derivative \n");
   printf("Press 12 for Newton_raphson\n");
    


    //printf("Press 11 for More\n\n");
    printf("Enter your choice\n>>");

    scanf("%d",&choice);
    if(choice==1)
    {
        add();
    }
    else if(choice==2)
    {
        subtract();
    }
    else if(choice==3)
    {
        multiplication();
    }
    else if(choice==4)
    {
        division();
    }
    else if(choice==5)
    {
        square();
    }
    else if(choice==6)
    {
        root();
    }
    else if(choice==7)
    {
        primeNumberChecking();
    }
    else if(choice==8)
    {
        palindromeChecking();
    }
    else if(choice==9)
    {
        fibonacchiSequenceGeneration();
    }
    else if(choice==10)
    {
        factorialCalculation();
    }
    else if(choice==11)
    {
        matrixadd();
    }
 else if(choice==12)
    {
        derivative ();
    }
    else if(choice==13)
    {
    newton_refson();
    }
    

    else
    {
        printf("Invalid Input, try again.\n");
    }
}

int main()
{
    printf("Welcome to my Project.\n\n");
    choices();
    int wish;
    while(1<2)
    {

        printf("Do you want to continue using the calculator?\n");
        printf("Press 1 for continue\nPress 2 for exit\n\n");
        printf("Your wish\n>>");
        scanf("%d",&wish);
        if(wish==1)
        {
            choices();
        }
        else if(wish==2)
        {
            return 0;
        }
        else
        {
            printf("Invalid input, try again\n");
        }
        return 0;
    }

}
