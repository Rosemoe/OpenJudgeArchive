#include<cstdio>
int main(){
	int h1,m1,h2,m2;
	scanf("%d %d %d %d",&h1,&m1,&h2,&m2);
	int h3,m3;
	m3 = m2 - m1;
	if(m3 < 0){
		h2--;
		m3 += 60;
	}
	h3 = h2- h1;
	printf("%d %d",h3,m3);
	return 0;
}
