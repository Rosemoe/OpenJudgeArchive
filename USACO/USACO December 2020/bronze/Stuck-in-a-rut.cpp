#include<cstdio> 
#include<vector>
#include<algorithm>
using namespace std;
int min(int a, int b) {
	return a > b ? b : a;
}
struct Point {
	int x;
	int y;
	Point(int x, int y) : x(x), y(y) {
		
	}
	bool isValid() {
		return x > 0 && y > 0;
	}
};
struct Line {
	Point src;
	int dis;
	bool dir;
	//dir == 1 => E => y=y0 (x0+dis>=x>=x0)
	//dir == 0 => N => x=x0 (y0+dis>=y>=y0)
	Line (Point s, bool way) : src(s), dir(way) {
		dis = -1;
	}
	void stopAt(Point p) {
		if (check(p)) {
			if (dir == 0) {
				dis = p.y - src.y;
			} else {
				dis = p.x - src.x;
			}
		}
	}
	bool check(Point p) {
		if (dir == 0) {
			return p.x == src.x && p.y >= src.y && (dis == -1 || p.y <= src.y + dis);
		} else {
			return p.y == src.y && p.x >= src.x && (dis == -1 || p.x <= src.x + dis);
		}
	}
	Point cross(Line b) {
		if (b.dir != dir) {
			int nx,ny;
			if (dir == 0) {
				nx = src.x;
				ny = b.src.y;
			} else {
				ny = src.y;
				nx = b.src.x;
			}
			Point p(nx, ny);
			if (check(p) && b.check(p)) {
				return p;
			}
		}
		return Point(-1,-1);
	}
	int getDis(Point p) {
		if(check(p)) {
			return dir == 0 ? p.y - src.y : p.x - src.x;
		}
		return -1;
	}
};
struct Cross {
	Point p;
	Line *a,*b;
	Cross(Line *a, Line *b, Point p) : a(a), b(b), p(p) {
		
	}
	bool valid() {
		int d1 = a->getDis(p);
		int d2 = b->getDis(p);
		return d1 != d2 && d1 >= 0 && d2 >= 0;
	}
	int earlyd() {
		return min(a->getDis(p), b->getDis(p));
	}
};
int n;
vector<Line> lines;
vector<Cross> crossx;
int cmp(Cross a, Cross b) {
	return a.earlyd() < b.earlyd();
}
int main() {
	scanf("%d", &n);
	char str[5];
	int x,y;
	for (int i = 0;i < n;i++) {
		scanf("%s%d%d", str, &x, &y);
		lines.push_back(Line(Point(x, y), str[0] == 'E'));
	}
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n;j++) {
			if (i < j) {
				Point cross = lines[i].cross(lines[j]);
				if (cross.isValid()) {
					Cross x = Cross(&lines[i], &lines[j], cross);
					if (x.valid()) {
						crossx.push_back(x);
					}
				}
			}
		}
	}
	std::sort(crossx.begin(), crossx.end(), cmp);
	for (int i = 0;i < crossx.size();i++) {
		Cross c = crossx[i];
		//printf("%d : %d %d\n", i, c.a->getDis(c.p), c.b->getDis(c.p));
		if (!c.valid()) {
			continue;
		}
		//printf("exec");
		if (c.a->getDis(c.p) > c.b->getDis(c.p)) {
			c.a->stopAt(c.p);
			//printf("%d\n", c.a->dis);
		} else {
			c.b->stopAt(c.p);
			//printf("%d\n", c.b->dis);
		}
	}
	for (int i = 0;i < n;i++) {
		int dis = lines[i].dis;
		if (dis == -1) {
			puts("Infinity");
		} else {
			printf("%d\n", dis);
		}
	} 
	return 0;
}
