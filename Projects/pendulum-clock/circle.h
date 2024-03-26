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


void BC(int xc, int yc, int r)
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

// midpoint circle
void MC(int x0, int y0, int r)
{


 int x = 0;
 int y = r;
 int pk = 1-r;

 while (x <= y)
 {
  putpixel(x0 + x, y0 + y, WHITE);
  putpixel(x0 - x, y0 + y, WHITE);
  putpixel(x0 + x, y0 - y, WHITE);
  putpixel(x0 - x, y0 - y, WHITE);
  putpixel(x0 + y, y0 + x, WHITE);
  putpixel(x0 - y, y0 + x, WHITE);
  putpixel(x0 + y, y0 - x, WHITE);
  putpixel(x0 - y, y0 - x, WHITE);

  if (pk < 0)
  {
   x++;
   pk = pk + 2*x +1;
  }
  if (pk >= 0)
  {
   x++;
   y--;
   pk = pk - 2*y + 2*x + 1;
  }
 }


}
