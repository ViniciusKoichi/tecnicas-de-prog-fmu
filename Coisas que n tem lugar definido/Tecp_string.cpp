#include <stdio.h>
#include <string.h>
#include <stdlib.h>

main()
{
	int cont_v = 0, cont_c = 0;
	char str[10] = "ola mundo", str2[10]; //ex 10
	printf("%s\n", str);

	printf("digite seu nome: "); //ex 11, 12
	fgets(str, sizeof(str2), stdin);

	if (str2[0] == 'a' || str[0] == 'A')
		printf("%s\n", str2);

	for (int e = 0; e < sizeof(str2); e++)
	{
		if ('a' == str2[e] || 'e' == str2[e] || 'i' == str2[e] || 'o' == str2[e] || 'u' == str2[e])
		{
			cont_v++;
		}
		else
		{
			cont_c++;
		}
	}

	printf("vogais: %d  \n consoantes: %d", cont_v, cont_c);
	system("pause>null");
}
