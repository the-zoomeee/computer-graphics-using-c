// bresenhams Line
void bresenhamsLine(int x1, int y1, int x2, int y2) {
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
