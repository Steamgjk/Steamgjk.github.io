/*
1. Memory Copy Cost   One-Step
2. Straggler: Ring-based
**/
#include "cuda_runtime.h"
#include "device_launch_parameters.h"
#include <stdio.h>
#include <iostream>
static void HandleError( cudaError_t err, const char *file, int line )
{
	if (err != cudaSuccess)
	{
		printf( "%s in %s at line %d\n", cudaGetErrorString( err ), file, line );
		exit( EXIT_FAILURE );
	}
}
#define HANDLE_ERROR( err ) (HandleError( err, __FILE__, __LINE__ ))


__global__ void kernel()
{

}

int main()
{

}