#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>


int main()

{

	int l, n, count, x ,i,j;

	scanf_s("%d %d", &l, &n);

	char word[n][l] = new char[n][l];//n คือจำนวนคำ l คือความยาวของแต่ละคำ
	
	

	for (i = 0; i < n; i++)

	{

		for (j = 0; j < l; j++)

		{

			scanf_s("%c", &word[i][j]);

		}

	}

	for (i = 0; i < n; i++)

	{

		for (j = 0; j < l; j++)

		{

			if (word[i][j] != word[i + 1][j])//เทียบระหว่างสองคำ

			{

				count++;//นับว่าตัวอักษรต่างกันกี่ตัวแล้ว

				if (count > 2)

				{

					x = i;//เก็บว่าคำไหนที่เป็นตัวสุดท้าย

					i = n;//ไว้ออกจาก loop นอก

					break;

				}

			}

			else if (j == l - 2 && count == 0)//ถ้าตัวไหนเช็คจนเหลือ 2 ตัวสุดท้ายแล้วยังไม่มีตัวต่างให้ข้ามไปคำถัดไปเลย

			{

				break;

			}

		}

		count = 0;

	}

	for (i = 0; i < l; i++)

	{

		printf("%c", word[x][i]);

	}

	return 0;

}
