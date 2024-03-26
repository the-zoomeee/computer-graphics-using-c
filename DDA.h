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
