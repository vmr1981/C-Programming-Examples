/* NOTE: Select an exercise and use CTRL+MAYUS+C to comment it. Select an exercise and use CTRL+MAYUS+X to uncomment it. */

/*********************************************************
    Exercise 1
		Type in and run the nine programs presented in this chapter. Compare the output produced by each program with the output presented after each program in the text.
*********************************************************/

// The outputs are the same.

/*********************************************************
    Exercise 2
		Write a program to generate and display a table of n and n2, for integer values of n ranging from 1 to 10. Be certain to print appropriate column headings.
*********************************************************/

//#include <stdio.h>
//
//int main() {
//    int n = 0, a = 0;
//
//    printf("Please, enter a positive integer number ranging from 1 to 10: ");
//    scanf("%i", &n);
//
//    printf("\n");
//
//    for (a = 1; a <= n; a++) {
//        printf("Number: %3i       Number squared: %3i\n", a, a * a);
//    }
//
//    return 0;
//}

/*********************************************************
    Exercise 3
		A triangular number can also be generated by the formula

            triangularNumber = n * (n + 1) / 2

        for any integer value of n. For example, the 10th triangular number, 55, can be generated by substituting 10 as the value for n in the preceding formula.
        Write a program that generates a table of triangular numbers using the preceding formula.
        Have the program generate every fifth triangular number between 5 and 50 (that is, 5, 10, 15, ..., 50).
*********************************************************/

//#include <stdio.h>
//
//int main () {
//    // Can be made with ints too.
//
//    float a = 5.0F;
//
//    for ( ; a <= 50; a += 5)
//    {
//        printf("Value of triangular number %.3f: %.3f\n", a, a * (a + 1.0F) / 2.0F);
//    }
//}

/*********************************************************
    Exercise 4
		The factorial of an integer n, written n!, is the product of the consecutive integers 1 through n. For example, 5 factorial is calculated as

            5!  =  5 x 4 x 3 x 2 x 1  =  120

        Write a program to generate and print a table of the first 10 factorials.
*********************************************************/

//#include <stdio.h>
//
//int main () {
//    int n = 0, a = 0, c = 1;
//
//    for (n = 1; n <= 10; n++)
//    {
//        for (a = 1; a <= n; a++)
//            c *= a;
//        printf("Factorial for number %3i is: %10i\n", n, c);
//        c = 1;
//    }
//    return 0;
//}

/*********************************************************
    Exercise 5
        The following perfectly valid C program was written without much attention paid to its format.
        As you will observe, the program is not very readable. (And believe it or not, it is even possible to make this program significantly more unreadable!)
        Using the programs presented in this chapter as examples, reformat the program so that it is more readable. Then type the program into the computer and run it.

        #include <stdio.h>
        int main(void){
        int n,two_to_the_n;
        printf("TABLE OF POWERS OF TWO\n\n");
        printf(" n     2 to the n\n");
        printf("---    ---------------\n");
        two_to_the_n=1;
        for(n=0;n<=10;++n){
        printf("%2i        %i\n",n,two_to_the_n); two_to_the_n*=2;}
        return 0;}
*********************************************************/

#include <stdio.h>

int main(void) {
    int n, two_to_the_n;

    printf("TABLE OF POWERS OF TWO\n\n");
    printf(" n     2 to the n\n");
    printf("---    ---------------\n");
    two_to_the_n = 1;

    for(n = 0; n <= 10; ++n)
    {
        printf("%2i        %i\n", n, two_to_the_n);
        two_to_the_n *= 2;
    }

    return 0;
}
