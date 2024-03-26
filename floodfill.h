void floodFill(int x, int y, int fillColor, int borderColor) {
    if (getpixel(x, y) != borderColor && getpixel(x, y) != fillColor) {
        putpixel(x, y, fillColor);
        floodFill(x + 1, y, fillColor, borderColor);
        floodFill(x - 1, y, fillColor, borderColor);
        floodFill(x, y + 1, fillColor, borderColor);
        floodFill(x, y - 1, fillColor, borderColor);
    }
}
