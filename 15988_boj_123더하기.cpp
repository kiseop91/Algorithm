#include <iostream>
#include <cstdio>
using namespace std;
long long d[1000001];
int main() {
	
	d[1]=1;
	d[2]=2;
	d[3]=4;
	long long N=0;
	long long num=0;
	
	scanf("%lld",&N);
	
	for(int i=4; i<=1000000; i++)
	{
		d[i]=(d[i-1]+d[i-2]+d[i-3])%1000000009;
	}
	
	for(int i=0; i<N; i++)
	{
		scanf("%lld",&num);
		cout<<d[num]<<endl;
	}
	
	return 0;
}