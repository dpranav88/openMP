#include<stdio.h>
#include<omp.h>

int main()
{
	#pragma omp parallel num_threads(4)
	{
	//int ID = 0;
	int ID = omp_get_thread_num();
	printf("Hello world this is thread(%d)\n", ID);
	}
return 0;
}