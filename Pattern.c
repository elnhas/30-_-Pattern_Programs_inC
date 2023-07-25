

#include "Pattern.h"



void pattern_solid_rectangular_star (void)
{
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
    int prmd_n, row_count, col_count ;
    printf ("Please enter the half pyramid n : ");
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
    int prmd_n, row_count, col_count ;
    printf ("Please enter the inverted half pyramid n : ");
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
    int prmd_n, row_count, col_count ;
    printf ("Please enter the full pyramid n : ");
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
    int prmd_n, row_count, col_count ;
    printf ("Please enter the full pyramid n : ");
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
    int prmd_n, row_count, col_count = 1 ;
    printf ("Please enter the full pyramid n : ");
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
    int i, j, n, k = 0;
    printf ("Please enter the full pyramid n : ");
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
    int prmd_n, row_count, col_count ;
    printf ("Please enter the inverted full pyramid n : ");
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
    int i, j, n, k = 0;
    printf ("Please enter the full pyramid n : ");
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
    int prmd_n, row_count, col_count ;
    printf ("Please enter the hollow full pyramid n : ");
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
    int prmd_n, row_count, col_count ;
    printf ("Please enter the hollow half pyramid n : ");
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
    int prmd_n, row_count, col_count ;
    printf ("Please enter the inverted hollow half pyramid n : ");
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
    int prmd_n, row_count, col_count ;
    printf ("Please enter the inverted hollow full pyramid n : ");
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
    int prmd_n, row_count, col_count ;
    printf ("Please enter the \" num half pyramid \" n : ");
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
    int prmd_n, row_count, col_count ;
    printf ("Please enter the \" num half pyramid \" n : ");
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
    int prmd_n, row_count, col_count ;
    printf ("Please enter the \" num full pyramid \" n : ");
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
    int prmd_n, row_count, col_count ;
    printf ("Please enter the \" num hollow half pyramid \" n : ");
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
    int prmd_n, row_count, col_count ;
    printf ("Please enter the \" num hollow inverted half pyramid \" n : ");
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
    int prmd_n, row_count, col_count ;
    printf ("Please enter the \" num hollow full pyramid \" n : ");
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
/**

      1
    1 2
  1   3
1 2 3 4

------------1
----------2 3 2
--------3 4 5 4 3
-----4 5 6 7 6 5 4
---5 6 7 8 9 8 7 6 5
6 7 8 9 10 11 10 9 8 7 6



27
24
22
18
15
12
9
6
3

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

**/
