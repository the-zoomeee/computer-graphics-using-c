// bresenhams Line
void BL(int x1, int y1, int x2, int y2) {
     int i;
    int dx = abs(x2 - x1);
    int dy = abs(y2 - y1);
    int x = x1, y = y1;
    int sx = x1 < x2 ? 1 : -1;
    int sy = y1 < y2 ? 1 : -1;

    if (dx > dy) {
	int p = 2 * dy - dx;
	for (i = 0; i <= dx; i++) {
	    putpixel(x, y, WHITE);
	    if (p >= 0) {
		y += sy;
		p -= 2 * dx;
	    }
	    x += sx;
	    p += 2 * dy;
	}
    } else {
	int p = 2 * dx - dy;
	for (i = 0; i <= dy; i++) {
	    putpixel(x, y, WHITE);
	    if (p >= 0) {
		x += sx;
		p -= 2 * dy;
	    }
	    y += sy;
	    p += 2 * dx;
	}
    }
}

// Digital Differential Analyzer
void DDA(int x,int y,int x1,int y1){
float m,n,f,steps,x2,y2,i;
m=(y1-y);
n=(x1-x);
if(n>=m){
steps =n;
}
else{
steps= m;
}
n=n/steps;
m=m/steps;
x2=x;
y2=y;
i=1;
while(i<=steps){
putpixel(x2,y2,WHITE);


x2+=n;
y2+=m;
i=i+1;
}
}
