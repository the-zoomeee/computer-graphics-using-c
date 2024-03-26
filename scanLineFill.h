void scanLineFill(int sides, int *points, int fill_color) {
    int i, j, x, y, count, temp, xi, x1, y1, x2, y2;
    for (y = 0; y < getmaxy(); y++) {
	count = 0;
	for (i = 0, j = sides * 2 - 2; i < sides * 2; j = i, i += 2) {
	    y1 = points[i + 1], y2 = points[j + 1];
	    x1 = points[i], x2 = points[j];

	    if ((y1 <= y && y2 > y) || (y2 <= y && y1 > y)) {
		xi = (int)((float)(y - y1) / (y2 - y1) * (x2 - x1) + x1);
		if (count == 0) {
		    count++;
		    x = xi;
		} else {
		    count = 0;
		    if (x > xi) {
			temp = x;
			x = xi;
			xi = temp;
		    }
		    for (; x <= xi; x++) {
			putpixel(x, y, fill_color);
		    }
		}
	    }
	}
    }
}
