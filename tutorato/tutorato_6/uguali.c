#include<stdio.h>

int uguale(char a, char b) {

	/*Per tutti i caratteri vige che se hanno lo stesso ASCII allora sono uguali*/
	if (a == b) {

		return 1;
	}
	else

		/*Se sono lettere invece pu� valere anche che hanno lo stesso ASCII differito di 32*/
		if (((a >= 65 && a <= 90) || (a >= 97 && a <= 122)) &&
			((b >= 65 && b <= 90) || (b >= 97 && b <= 122)) &&
			(a == b + 32 || a == b - 32)) {

			return 1;
		}

		else {

			return 0;
		}
}

main()
{
	int risultato;
	char a, b;
	printf("Inserire due caratteri:");
	scanf("%c", &a);
	scanf("\n%c", &b);

	risultato = uguale(a, b);

	if (risultato == 1) {

		printf("I caratteri %c e %c sono uguali", a, b);
	}
	else {
		printf("I caratteri %c e %c sono diversi", a, b);
	}

}
