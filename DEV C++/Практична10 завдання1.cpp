#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "UKRAINIAN");
	double x,a,b,c,d;
	double fi,w,y;
	cout<<"¬вед≥ть x,a,b,c,d: ";
	cin>>x>>a>>b>>c>>d;
	fi=tan(x+a)-log(fabs(b+7))/log(4);
	w*c*pow(x*x+d*exp(1.3),1./5);
	if(fabs(x<10))
		y=sin(fi)*pow(cos(fi),2)*sin(fi+1.4)/0.85+7.14;
	else
		y=fabs(sin(2*fi-1.5)+3*sin(4*fi))+2.38;
	cout<<"fi= "<<fi<<" w= "<<w<<" y= "<<y<<endl;
	return 0;
}
