// midpoint circle
void midpointCircle(int x0, int y0, int r)
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
