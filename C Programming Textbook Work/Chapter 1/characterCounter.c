#include <stdio.h>


/* character counter; first version.

main()
{
    long nc;

    nc = 0;
    while (getchar() != EOF)
        ++nc;

    printf("%ld\n", nc);
}

*/


/* character counter; second version. */

main()
{
    double nc;

    for (nc = 0; getchar() != EOF; ++nc)
        ;

    printf("%.0f\n", nc);
}