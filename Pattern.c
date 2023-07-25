/**
***************************************************************************
*  @project   : 30+_Pattern_Programs_inC
*  @pattern.c : The file which have the main function
*  @author    : Mohamed Hussein Elnahas
*  @brief     : This file have the original definition of functions .
                There are different methods for some patterns.
****************************************************************************
**/


#include "Pattern.h"



void pattern_solid_rectangular_star (void)
{
/**

Solid Rectangular Star  Pattern

    *****
    *****
    *****

**/

    int num_row, num_col, row_count, col_count;
    printf ("Please enter the number of rows the columns : ");
    scanf ("%i%i",&num_row,&num_col);

    for (row_count = 1 ; row_count <= num_row; row_count++)
    {
        for (col_count = 1 ; col_count <= num_col ; col_count++)
        {
            printf ("*");
        }
        printf ("\n");
    }



}

void pattern_hollow_rectangle_star  (void)
{

/**

Hollow Rectangular Star Pattern

    *****
    *   *
    *   *
    *****

**/

    int num_row, num_col, row_count, col_count;
    printf ("Please enter the number of rows the columns : ");
    scanf ("%i%i",&num_row,&num_col);

    for (row_count = 1 ; row_count <= num_row ; row_count++)
    {
        if ((row_count == 1) || (row_count == num_row) )
        {
            for (col_count = 1 ; col_count <= num_col ; col_count++)
            {
                printf ("*");
            }
            printf ("\n");
        }
        else
        {
            for (col_count = 1 ; col_count <= num_col ; col_count++)
            {
                if ((col_count == 1) || (col_count == num_col))
                {
                    printf ("*");
                }
                else
                {
                    printf (" ");
                }
            }
            printf("\n");

        }

    }

}

void pattern_hollow_rectangle_star_2  (void)
{
/**

Hollow Rectangular Star Pattern , another way

    *****
    *   *
    *   *
    *****

**/
    int num_row, num_col, row_count, col_count;
    printf ("Please enter the number of rows the columns : ");
    scanf ("%i%i",&num_row,&num_col);

    for (row_count = 1 ; row_count <= num_col ; row_count++)
    {
        for (col_count = 1 ; col_count <= num_col ; col_count++)
        {
            if (row_count == 1 || col_count == 1 || row_count == num_col || col_count == num_col)
            {
                printf ("*");
            }
            else
            {
                printf (" ");
            }
        }

        printf ("\n");


    }
}

void pattern_half_pyramid_star (void)
{
/**

Half Pyramid Star Pattern

*
* *
* * *
* * * *
* * * * *

**/

    int prmd_n, row_count, col_count ;
    printf ("Please enter the half pyramid star n : ");
    scanf ("%i",&prmd_n);

    for (row_count = 1 ; row_count <= prmd_n ; row_count++)
    {
        for (col_count = 1 ; col_count <= row_count ; col_count++)
        {
            printf ("* ");
        }
        printf ("\n");

    }


}

void pattern_half_pyramid_star_2 (void)
{

/**

Half Pyramid Star Pattern , another way

*
* *
* * *
* * * *
* * * * *

**/

    int prmd_n, row_count, col_count ;
    printf ("Please enter the half pyramid n : ");
    scanf ("%i",&prmd_n);

    for (row_count = 1 ; row_count <= prmd_n ; row_count++)
    {
        for (col_count = 1 ; col_count <= (prmd_n - (prmd_n - row_count)) ; col_count++)
        {
            printf ("* ");
        }
        for (col_count = col_count ; col_count <= (prmd_n - row_count) ; col_count++)
        {
            printf (" ");
        }
        printf ("\n");

    }

}

void pattern_inverted_half_pyramid (void)
{
/**
Inverted Half Pyramid Star Pattern

* * * * *
* * * *
* * *
* *
*

**/
    int prmd_n, row_count, col_count ;
    printf ("Please enter the inverted half pyramid star n : ");
    scanf ("%i",&prmd_n);

    for (row_count = 1 ; row_count <= prmd_n ; row_count++)
    {
        for (col_count = 1 ; col_count <= (prmd_n-(row_count-1)) ; col_count++)
        {
            printf ("* ");
        }

        printf ("\n");

    }

}

void  pattern_full_pyramid  (void)
{
/**
Full Pyramid Star Pattern

    *
   * *
  * * *
 * * * *
* * * * *

**/
    int prmd_n, row_count, col_count ;
    printf ("Please enter the full pyramid star n : ");
    scanf ("%i",&prmd_n);


    for (row_count = 1 ; row_count <= prmd_n ; row_count++)
    {
        for (col_count = 1 ; col_count <= (prmd_n-row_count) ; col_count++)
        {
            printf (" ");
        }
        for (col_count = 1 ; col_count <= row_count ; col_count++)
        {
            printf ("* ");
        }
        printf ("\n");

    }


}

void  pattern_full_pyramid_2 (void)
{
/**
Full Pyramid Star Pattern , another way 2

    *
   * *
  * * *
 * * * *
* * * * *

**/
    int prmd_n, row_count, col_count ;
    printf ("Please enter the full pyramid star n : ");
    scanf ("%i",&prmd_n);

    for (row_count = prmd_n ; row_count >= 1 ; row_count--)
    {
        for (col_count = 1 ; col_count <= (row_count-1) ; col_count++)
        {
            printf (" ");
        }
        for (col_count = 1 ; col_count <= (prmd_n-(row_count-1)) ; col_count++)
        {
            printf ("* ");
        }
        printf ("\n");

    }

}

void  pattern_full_pyramid_3 (void)
{
/**
Full Pyramid Star Pattern , another way 3

    *
   * *
  * * *
 * * * *
* * * * *

**/
    int prmd_n, row_count, col_count = 1 ;
    printf ("Please enter the full pyramid star n : ");
    scanf ("%i",&prmd_n);

    for (row_count = 1 ; row_count <= prmd_n ; row_count++)
    {
        while (col_count <= prmd_n)
        {
            if (col_count <= (prmd_n-row_count))
            {
                printf (" ");
            }
            else
            {
                printf ("* ");
            }
            col_count++;
        }
        col_count = 1;
        printf ("\n");
    }

}

void  pattern_full_pyramid_4 (void)
{
/**
Full Pyramid Star Pattern , another way 4

    *
   * *
  * * *
 * * * *
* * * * *

**/
    int i, j, n, k = 0;
    printf ("Please enter the full pyramid star n : ");
    scanf("%d",&n);

    for(i = 1; i <= n; ++i )
    {
        k = 0;
        for(j = 1; j <= ((2*n - 1) - (2*i-1)) ; ++j)
        {
            printf(" ");
        }

        while(k != (2*i-1))
        {
            printf("* ");
            ++k;
        }

        printf("\n");
    }

}

void pattern_inverted_full_pyramid (void)
{
/**
Inverted Full Pyramid Star Pattern

* * * * *
 * * * *
  * * *
   * *
    *

**/
    int prmd_n, row_count, col_count ;
    printf ("Please enter the inverted full pyramid star n : ");
    scanf ("%i",&prmd_n);


    for (row_count = prmd_n ; row_count >= 1 ; row_count--)
    {
        for (col_count = 1 ; col_count <= (prmd_n-row_count) ; col_count++)
        {
            printf (" ");
        }
        for (col_count = 1 ; col_count <= row_count ; col_count++)
        {
            printf ("* ");
        }
        printf ("\n");
    }
}

void  pattern_inverted_full_pyramid_4 (void)
{
/**
Inverted Full Pyramid Star Pattern , another way 4

* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *
**/
    int i, j, n, k = 0;
    printf ("Please enter the full pyramid star n : ");
    scanf("%d",&n);

    for(i = n; i >= 1; i-- )
    {
        k = 0;
        for(j = 1; j <= ((2*n - 1) - (2*i-1)) ; ++j)
        {
            printf(" ");
        }

        while(k != (2*i-1))
        {
            printf("* ");
            ++k;
        }

        printf("\n");
    }
}

void pattern_hollow_full_pyramid (void)
{
/**
Hollow Full Pyramid Star Pattern

    *
   * *
  *   *
 *     *
* * * * *

**/
    int prmd_n, row_count, col_count ;
    printf ("Please enter the hollow full pyramid star n : ");
    scanf ("%i",&prmd_n);

    for (row_count = 1 ; row_count <= prmd_n ; row_count++)
    {
        for (col_count = 1 ; col_count <= (prmd_n-row_count) ; col_count++)
        {
            printf (" ");
        }

        for (col_count = 1 ; col_count <= row_count ; col_count++)
        {
            if (row_count <= 2 || row_count == prmd_n || col_count == 1 || col_count ==  row_count )
            {
                printf ("* ");
            }
            else
            {
                printf ("  ");
            }
        }
        printf ("\n");
    }
}

void pattern_hollow_half_pyramid (void)
{
/**
Hollow Half Pyramid Star Pattern

*
* *
*   *
*     *
* * * * *

**/
    int prmd_n, row_count, col_count ;
    printf ("Please enter the hollow half pyramid star n : ");
    scanf ("%i",&prmd_n);

    for (row_count = 1 ; row_count <= prmd_n ; row_count++)
    {
        for (col_count = 1 ; col_count <= row_count ; col_count++)
        {
            if (row_count <= 2 || row_count == prmd_n || col_count == 1 || col_count ==  row_count )
            {
                printf ("* ");
            }
            else
            {
                printf ("  ");
            }
        }
        printf ("\n");
    }
}

void pattern_inverted_hollow_half_pyramid (void)
{
/**
Inverted Hollow Half Pyramid Star Pattern

* * * * *
*     *
*   *
* *
*

**/
    int prmd_n, row_count, col_count ;
    printf ("Please enter the inverted hollow half pyramid star n : ");
    scanf ("%i",&prmd_n);

    for (row_count = prmd_n ; row_count >= 1 ; row_count--)
    {
        for (col_count = 1 ; col_count <= row_count ; col_count++)
        {
            if (row_count <= 2 || row_count == prmd_n || col_count == 1 || col_count ==  row_count )
            {
                printf ("* ");
            }
            else
            {
                printf ("  ");
            }
        }
        printf ("\n");
    }
}

void pattern_inverted_hollow_full_pyramid (void)
{
/**
Inverted Hollow Full Pyramid Star Pattern

* * * * *
 *     *
  *   *
   * *
    *

**/
    int prmd_n, row_count, col_count ;
    printf ("Please enter the inverted hollow full pyramid star n : ");
    scanf ("%i",&prmd_n);

    for (row_count = prmd_n ; row_count >= 1 ; row_count--)
    {
        for (col_count = 1 ; col_count <= (prmd_n - row_count) ; col_count++ )
        {
            printf (" ");
        }

        for (col_count = 1 ; col_count <= row_count ; col_count++)
        {
            if (row_count <= 2 || row_count == prmd_n || col_count == 1 || col_count ==  row_count )
            {
                printf ("* ");
            }
            else
            {
                printf ("  ");
            }
        }
        printf ("\n");
    }
}

void pattern_num_half_pyramid (void)
{
/**
Half pyramid pattern using numbers

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

**/
    int prmd_n, row_count, col_count ;
    printf ("Please enter the \" Half pyramid pattern using numbers \" n : ");
    scanf ("%i",&prmd_n);

    for(row_count = 1 ; row_count <= prmd_n ; row_count++)
    {

        for (col_count = 1 ; col_count <= row_count ; col_count++)
        {
            printf ("%i ",col_count);
        }
        printf ("\n");
    }
}

void pattern_num_inverted_half_pyramid (void)
{
/**
Inverted half-pyramid pattern using numbers

1 2 3 4 5
1 2 3 4
1 2 3
1 2
1

**/
    int prmd_n, row_count, col_count ;
    printf ("Please enter the \" Inverted half-pyramid pattern using numbers \" n : ");
    scanf ("%i",&prmd_n);

    for(row_count = prmd_n ; row_count >= 1 ; row_count--)
    {
        for (col_count = 1 ; col_count <= row_count ; col_count++)
        {
            printf ("%i ",col_count);
        }
        printf ("\n");
    }
}

void pattern_num_full_pyramid (void)
{
/**
Full pyramid pattern using numbers

        1
      2 3 2
    3 4 5 4 3
  4 5 6 7 6 5 4
5 6 7 8 9 8 7 6 5

**/
    int prmd_n, row_count, col_count ;
    printf ("Please enter the \" Full pyramid pattern using numbers \" n : ");
    scanf ("%i",&prmd_n);

    for(row_count = 1 ; row_count <= prmd_n ; row_count++)
    {

        for (col_count = 1 ; col_count <= (prmd_n-row_count) ; col_count++)
        {
            printf ("  ");
        }

       for (col_count = row_count ; col_count <= (row_count + (row_count-1)) ; col_count++)
       {
           printf ("%i ",col_count);

           if (col_count == (row_count + (row_count-1)))
           {
                for (col_count = (row_count + (row_count-1)) - 1 ; col_count >= row_count ; col_count--)
                {
                    printf ("%i ",col_count);
                }
                break;
           }
       }
       printf ("\n");

    }



}

void pattern_num_hollow_half_pyramid (void)
{
/**
Hollow half-pyramid pattern using numbers

1
1 2
1   3
1     4
1 2 3 4 5

**/
    int prmd_n, row_count, col_count ;
    printf ("Please enter the \" Hollow half-pyramid pattern using numbers\" n : ");
    scanf ("%i",&prmd_n);

    for(row_count = 1 ; row_count <= prmd_n ; row_count++)
    {
         for (col_count = 1 ; col_count <= row_count ; col_count++)
        {
           if (row_count == 1 || row_count == prmd_n || col_count == 1 || col_count == row_count)
           {
                printf ("%i ",col_count);
           }
           else
           {
               printf ("  ");
           }
        }
        printf ("\n");
    }
}

void Pattern_num_hollow_inverted_half_pyramid (void)
{
/**
Hollow Inverted Half Pyramid Pattern using numbers

1 2 3 4 5
2     5
3   5
4 5
5

**/
    int prmd_n, row_count, col_count ;
    printf ("Please enter the \" Hollow Inverted Half Pyramid Pattern using numbers \" n : ");
    scanf ("%i",&prmd_n);

    for(row_count = 1 ; row_count <= prmd_n ; row_count++)
    {
        for (col_count = row_count ; col_count <= prmd_n ; col_count++)
        {
            if (row_count == 1 || row_count == prmd_n || col_count == row_count || col_count == prmd_n)
            {
                printf ("%i ",col_count);
            }
            else
            {
                printf ("  ");
            }
        }
        printf ("\n");
    }
}

void pattern_num_hollow_full_pyramid (void)
{
/**
Hollow Full Pyramid Pattern using numbers

    1
   1 2
  1   3
 1     4
1 2 3 4 5

**/
    int prmd_n, row_count, col_count ;
    printf ("Please enter the \" Hollow Full Pyramid Pattern using numbers \" n : ");
    scanf ("%i",&prmd_n);

    for(row_count = 1 ; row_count <= prmd_n ; row_count++)
    {
        for (col_count = 1 ; col_count <= (prmd_n - row_count) ; col_count++)
        {
            printf (" ");
        }
        for (col_count = 1 ; col_count <= row_count ; col_count++)
        {
            if (row_count == 1 || row_count == prmd_n || col_count == 1 || col_count == row_count)
            {
                printf ("%i ",col_count);
            }
            else
            {
                printf ("  ");
            }
        }
        printf ("\n");
    }
}
