#include<cstdio>
int main() {
	double target,step=2,curr=0;
	scanf("%lf",&target);
	int i = 0;
	while(curr < target){
		i++;
		curr += step;
		step *= 0.98; 
	}
	printf("%d",i);
    return 0;
}
