#include <stdio.h>
int main()
{
	int num1, num2, count = 0, x;

	scanf_s("%d%d",&num1,&num2);


	char str[num1][num2];//n คือจำนวนคำ l คือความยาวของแต่ละคำ

	int i, j;

	for (i = 0; i < num1; i++)

	{

		for (j = 0; j < num2; j++)

		{

			scanf_s(str[i][j]);

		}

	}

	for (i = 0; i < num1; i++)

	{

		for (j = 0; j < num2; j++)

		{

			if (str[i][j] != str[i + 1][j])//เทียบระหว่างสองคำ

			{

				count++;//นับว่าตัวอักษรต่างกันกี่ตัวแล้ว

				if (count > 2)

				{

					x = i;//เก็บว่าคำไหนที่เป็นตัวสุดท้าย

					i = num1;//ไว้ออกจาก loop นอก

					break;

				}

			}

			else if (j == num2 - 2 && count == 0)//ถ้าตัวไหนเช็คจนเหลือ 2 ตัวสุดท้ายแล้วยังไม่มีตัวต่างให้ข้ามไปคำถัดไปเลย

			{

				break;

			}

		}

		count = 0;

	}

	for (i = 0; i < num1; i++)

	{

		printf_s("%c", str[x][i]);

	}

	return 0;

}