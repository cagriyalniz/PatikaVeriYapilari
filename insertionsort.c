#include <stdio.h>
/*
 [22,27,16,2,18,6] -> Insertion Sort

-Yukarı verilen dizinin sort türüne göre aşamalarını yazınız.
***aşamaları***
2 27 16 22 18 6
2 6 16 22 18 27
2 6 16 18 22 27

-Big-O gösterimini yazınız.
***Big-O***
O(n*n)

-Time Complexity: 
	Average case: Aradığımız sayının ortada olması,
		**O(n*n)
	Worst case: Aradığımız sayının sonda olması,
       		**O(n*n)	
	Best case: Aradığımız sayının dizinin en başında olması.
		**O(n)
Dizi sıralandıktan sonra 18 sayısı hangi case kapsamına girer? Yazınız.
		** ortada olduğu için "average case" yani O(n*n)

[7,3,5,8,2,9,4,15,6] dizisinin Insertion Sort'a göre ilk 4 adımını yazınız.

2, 3, 5, 8, 7, 9, 4, 15, 6
2, 3, 4, 8, 7, 9, 5, 15, 6
2, 3, 4, 5, 7, 9, 8, 15, 6
2, 3, 4, 5, 6, 9, 8, 15, 7


 */

//once en kucuk elemani birinci siraya
//sonra ikinci en kucuk elemani ikinci siraya ... seklinde devam eden algoritma ornegi
// !!!!!dizinin icinde sayi tekrari bulundugu zaman calismiyor
int sirasi(int sayi, int dizi[], int diziuzunluk)
{
	int sira;
	sira = 0;
	int i = 0;
	while(i < diziuzunluk)
	{
		if(dizi[i] < sayi)
		{
			sira++;
		}
		i++;
	}
	return(sira);
}


int main()
{
	int arv[6] = {22, 27, 16, 2, 18, 6};
	int arb[9] = {7, 3, 5, 8, 2, 9, 5, 15, 6};
	int ar[9] = {16,15, 4, 4, 6, 8, 7, 100,0 };
	int ar_lenv = 6;
	int ar_len = 9;
	//int ar_len =  dizilen(ar) - 1;
	int newar[ar_len];
	int newarv[ar_lenv];
	int i = 0;
	int k = 0;
	int min = 0;
	while(i < ar_len)
	{
		k = 0;
		while(k < ar_len)
		{
			if(min == sirasi(ar[k], ar, ar_len))
			{
				newar[min] = ar[k];
				min++;
				break;
			}
			k++;
		}
		i++;
	}
	int j = 0;
	while(j < ar_len)
	{
		printf("%d \n", newar[j]);
		j++;
	}

}
