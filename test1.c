#include <stdio.h>

int main() {
	FILE *fpData, *fpOut;
	int day, month, year;
	fpData = fopen ("input.txt", "r");
	fpOut = fopen ("output.txt", "w");
	fscanf(fpData, "%d-%d-%d", &day, &month, &year);
	fprintf(fpOut, "The day is %d\nThe month is %d\nThe year is %d\n", day, month, year);

	fclose(fpData);
	fclose(fpOut);


	return 0;
}
