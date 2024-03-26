// bresanham circle
void drawCircle(int xc, int yc, int x, int y)
{
	putpixel(xc+x, yc+y, 15);
	putpixel(xc-x, yc+y, 15);
	putpixel(xc+x, yc-y, 15);
	putpixel(xc-x, yc-y, 15);
	putpixel(xc+y, yc+x, 15);
	putpixel(xc-y, yc+x, 15);
	putpixel(xc+y, yc-x, 15);
	putpixel(xc-y, yc-x, 15);
}


void bresanhamCircle(int xc, int yc, int r)
{
	int x = 0, y = r;
	int d = 3 - 2 * r;
	drawCircle(xc, yc, x, y);
	while (y >= x)
	{

		x++;

		if (d > 0)
		{
			y--;
			d = d + 4 * (x - y) + 10;
		}
		else
			d = d + 4 * x + 6;
		drawCircle(xc, yc, x, y);
	}
}
