#include <stdio.h>

int main(void) {

	int ages, members, temp, sum;
	unsigned char limit_tabel[3] = { 4 , 2 , 3 };
	unsigned char count[3][4];

	for (ages = 0; ages < 3; ages++) {

		printf("\n%d0대 연령의 윗몸 일으키기 횟수 \n",ages + 2);

		for (members = 0; members < limit_tabel[ages]; members++) {
			printf("#%d: ", members + 1);
			scanf_s("%d", &temp);
			count[ages][members] = (unsigned char)temp;

		}


	}


	printf("\n\n 연령별 평균 윗몸일으키기 횟수 \n");

	for (ages = 0; ages < 3; ages++) {
		sum = 0;
		printf("%d대 : ", ages + 2);
		for (members = 0; members < limit_tabel[ages]; members++) {

			sum = sum + count[ages][members];
		}

		printf("%5.2f \n", (double)sum / limit_tabel[ages]);
	}





	return 0;
}