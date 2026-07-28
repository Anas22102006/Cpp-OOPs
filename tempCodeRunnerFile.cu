#include <iostream>
#include <vector>
#include <chrono>
#include <cuda_runtime.h>

using namespace std;

__global__ void vectorAdd(int *a, int *b, int *c, int n)
{
    int idx = blockIdx.x * blockDim.x + threadIdx.x;

    if(idx < n)
        c[idx] = a[idx] + b[idx];
}

int main()
{
    const int N = 10000000;

    vector<int> a(N,1);
    vector<int> b(N,2);
    vector<int> cpu(N);
    vector<int> gpu(N);

    auto cpuStart = chrono::high_resolution_clock::now();

    for(int i=0;i<N;i++)
        cpu[i]=a[i]+b[i];

    auto cpuEnd = chrono::high_resolution_clock::now();

    auto cpuTime = chrono::duration_cast<chrono::microseconds>(cpuEnd-cpuStart);

    int *d_a,*d_b,*d_c;

    cudaMalloc(&d_a,N*sizeof(int));
    cudaMalloc(&d_b,N*sizeof(int));
    cudaMalloc(&d_c,N*sizeof(int));

    cudaMemcpy(d_a,a.data(),N*sizeof(int),cudaMemcpyHostToDevice);
    cudaMemcpy(d_b,b.data(),N*sizeof(int),cudaMemcpyHostToDevice);

    auto gpuStart = chrono::high_resolution_clock::now();

    int threads = 256;
    int blocks = (N+threads-1)/threads;

    vectorAdd<<<blocks,threads>>>(d_a,d_b,d_c,N);

    cudaDeviceSynchronize();

    auto gpuEnd = chrono::high_resolution_clock::now();

    auto gpuTime = chrono::duration_cast<chrono::microseconds>(gpuEnd-gpuStart);

    cudaMemcpy(gpu.data(),d_c,N*sizeof(int),cudaMemcpyDeviceToHost);

    cout<<"CPU Time : "<<cpuTime.count()<<" microseconds"<<endl;
    cout<<"GPU Time : "<<gpuTime.count()<<" microseconds"<<endl;

    cout<<"Sample Output : "<<gpu[100]<<endl;

    cudaFree(d_a);
    cudaFree(d_b);
    cudaFree(d_c);

    return 0;
}
__global__ void heavyWork(int *a, int *b, int *c, int n)
{
    int idx = blockIdx.x * blockDim.x + threadIdx.x;

    if(idx < n)
    {
        int x = a[idx];

        for(int i = 0; i < 10000; i++)
            x = (x * 3 + b[idx]) % 10000019;

        c[idx] = x;
    }
}