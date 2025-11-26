#include<stdio.h>
#include<string.h>

#define N 20

main()
{
	char string1[N], string2[N];
	int i;

	printf("Inserisci la prima stringa\n");
	scanf("%s", string1);

	printf("Inserisci la seconda stringa\n");
	scanf("%s", string2);

	if (strcmp(string1,string2) == 0)
	{	printf("\n%s e %s sono uguali! Procedo con l'elaborazione!", string1, string2);

        i=0;
        while (string2[i] != '\0')
        {
			if (string2[i] >= 'A' && string2[i] <= 'Z')
				string2[i] = string2[i] + 'a'-'A';
			else if (string2[i] >= 'a' && string2[i] <= 'z')
				     string2[i] = string2[i] - 'a'+'A';

/*            if (string2[i] >= 65 && string2[i] <= 90)
				string2[i] = string2[i] + 32;
			else if (string2[i] >= 97 && string2[i] <= 122)
				string2[i] = string2[i] - 32;
*/
            i++;
        }
		
		printf("\nRISULTATI DATI DAL \'strcmp\' INTERNO\n");
		if (strcmp(string1,string2) == 0)
			printf("%s e %s sono uguali!\n", string1, string2);
		else
			printf("%s e %s sono diverse!\n", string1, string2);
	} 
	else
		printf("%s e %s sono diverse!\n", string1, string2);

}
