#include<stdio.h>

int main()

{

	int a, b, d, f, g = 0, h, x = 1;;

	scanf("%d%d", &a, &b);

	char c[a + 10], e[a + 10], fin[a + 10];

	gets_s("%s", c);

	for (d = 1; d < b; d++)

	{

		gets_s("%s", e);

		for (f = 0; f < a; f++)

		{

			if (e[f] != c[f])

			{

				g++;

			}

		}

		if (x == 0)

		{

			g = 0;

		}

		if (g > 2)

		{

			for (h = 0; h < a; h++)

			{

				fin[h] = c[h];

			}

			fin[a] = '\0';

			x = 0;

		}

		else

		{

			for (h = 0; h < a; h++)

			{

				c[h] = e[h];

			}

			c[a] = '\0';

		}

	}

	if (x == 1)

	{

		for (h = 0; h < a; h++)

		{

			fin[h] = c[h];

		}

		fin[a] = '\0';

	}

	printf("%s", fin);

	return 0;

}