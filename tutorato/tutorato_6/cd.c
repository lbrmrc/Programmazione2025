#include<stdio.h>


int min_to_sec(int m)
{
	return m * 60;
}

int ore_to_sec(int o)
{
	int min = o * 60;
	return min_to_sec(min);
}

int tempo_to_sec(int Ore, int Minuti, int Secondi)
{
	return ore_to_sec(Ore) + min_to_sec(Minuti) + Secondi;
}

main()
{
	int Ore, Minuti, Secondi;
	int SecondiTotali;

	printf("Inserire la durata del brano (formato h:m:s)\n");
	scanf("%d:%d:%d", &Ore, &Minuti, &Secondi);

	SecondiTotali = tempo_to_sec(Ore, Minuti, Secondi);

	printf("Il brano dura %d s\n", SecondiTotali);
}

