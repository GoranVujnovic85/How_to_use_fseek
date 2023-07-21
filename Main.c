#include <stdio.h>

int main()
{
	FILE* out;

	 out = fopen("fseek.txt", "w");

	if(out == NULL)
	{
		return 1;
	}
  /*
	fprintf(out, "20");
	fseek(out,1, SEEK_SET);
	fprintf(out, "19");
  */

  /*
	fprintf(out, "20");
	fseek(out,10, SEEK_CUR);
	fprintf(out, "19");
  */

	fprintf(out, "20");
	fseek(out,-2, SEEK_END);
	fprintf(out, "19");


	fclose(out);
	return 0;

}
