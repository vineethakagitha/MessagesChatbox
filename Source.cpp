#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
struct stdetails{
	int stid;
	char location[10];
	int gender;
};
char subjects[6][20];
struct stmarks{
	int stid;
	int marks[6];
};
void main()
{
	FILE *fp;
	int i;
	fp = fopen("stmarks.bin", "wb+");
	/*struct stdetails st[5] = { { 1, "hyderabad", 1 }, { 2, "delhi", 1 }, { 3, "vizag", 0 }, { 4, "pune", 0 }, { 5, "hyderabad", 1 } };
	char ch = '2';
	fp = fopen("stdetails.bin", "wb+");
	for (i = 0; i < 5; i++)
		fwrite(&st[i], sizeof(struct stdetails), 1, fp);*/
	for (int i = 0; i < 6; i++)
	{
		scanf("%s", &subjects[i]);
	}
	for (int i = 0; i < 6; i++)
		fwrite(&subjects[i], 20 * sizeof(char), 1, fp);

	struct stmarks stm[5] = { { 1, { 56, 35, 97, 43, 56, 36 } }, { 2, { 95, 23, 15, 75, 33, 29 } }, { 3, { 77, 86, 34, 23, 55, 65 } }, { 4, { 57, 92, 76, 71, 33, 88 } }, { 5, { 44, 99, 33, 55, 77, 88 } } };
	for (int i = 0; i < 6; i++)
             fwrite(&stm[i], sizeof(struct stmarks), 1, fp);
	fclose(fp);
}