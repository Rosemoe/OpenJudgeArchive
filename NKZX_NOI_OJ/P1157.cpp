#include<cstdio>
const int right = 0,left = 1,up = 2,down = 3;
int main(){
	int n,line,column;
	scanf("%d%d%d",&n,&line,&column);
	int value = 0,x = 1,y = 1,action = 0;
	int minx = 1,miny = 1,maxx = n,maxy = n;
	while(true) {
		if(action == right) {
			if(y == line) {
				value += column - x + 1;
				break;
			}
			value += maxx - x + 1;
			miny++;
			x = maxx;
			y = miny;
			action = down;
		}else if(action == down) {
			if(x == column) {
				value += line - y + 1;
				break;
			}
			value += maxy - y + 1;
			maxx--;
			x = maxx;
			y = maxy;
			action = left;
		}else if(action == left) {
			if(y == line) {
				value += x - column + 1;
				break;
			}
			value += x - minx + 1;
			maxy--;
			x = minx;
			y = maxy;
			action = up;
		}else{
			if(x == column) {
				value += y - line + 1;
				break;
			}
			value += y - miny + 1;
			minx++;
			x = minx;
			y = miny;
			action = right;
		}
	}
	printf("%d",value);
    return 0;
}
