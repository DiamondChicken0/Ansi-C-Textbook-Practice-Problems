#include <stdio.h>

main()
{
	/* Exercise 1-8 */

	int c, nl, tb, bl;
	int lastChar;

	nl = 0;
	tb = 0;
	bl = 0;

	while (( c = getchar()) != EOF )
	{
		if ( c == '\n' )
		{
			++nl;
		}
		else if ( c == 9 )
		{
			++tb;
		}
		else if ( c == ' ' )
		{
			++bl;
		}
	}

	printf("%s%d%s", "There are ", nl, " newlines. ");
	
	printf("%s%d%s", "Additionally, There are ", tb, " tabs ");

	printf("%s%d%s\n", "and ", bl, " blanks.");

	/* Exercise 1-9 */

	lastChar = 'a';
	c = 'a';
	
	while ((c = getchar()) != EOF)
	{
		if (lastChar != ' ')
		{
			if (c != ' ')
			{
				printf("\nOutput:");
				putchar(c);
			}
		}
		lastChar = c;
	}
	
	/* Exercise 1-10 */

	while ((c = getchar()) != EOF)
	{
		switch (c)
		{
		case '\b':
			printf("\\b");
			break;
		
		case '\t':
			printf("\\t");
			break;

		case '\\':
			printf("\\");
			break;

		default:
			putchar(c);
			break;
		}
	}

}