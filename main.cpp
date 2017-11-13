#include <stdlib.h>

#include <iostream>
using std::cout;
using std::cin;

bool trocar ( int &, int & );
bool trocar ( double &, double & );

int main(int argc, char **argv)
{
	int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int e = 0;
    int count = 0;    
    const int NITER = 5;
    
    

    cout << "Entre com o valor de a: ";
    cin >> a;
    cout << "a: " << a << '\n';
    
    cout << "Entre com o valor de b: ";
    cin >> b;
    cout << "b: " << b << '\n';
    
    cout << "Entre com o valor de c: ";
    cin >> c;
    cout << "c: " << c << '\n';
    
    cout << "Entre com o valor de d: ";
    cin >> d;
    cout << "d: " << d << '\n';
    
    cout << "Entre com o valor de e: ";
    cin >> e;
    cout << "e: " << e << "\n\n";
    
    for (int i = 0; i < NITER - 1; i++)
    { 
        if( trocar( a, b ) )
            count++;
        if( trocar( b, c ) )
            count++;
        if( trocar( c, d ) )
            count++;
        if( trocar( d, e ) )
            count++;
    }
        
    cout << "a: " << a << '\n';    
    cout << "b: " << b << '\n';
    cout << "c: " << c << '\n';
    cout << "d: " << d << '\n';
    cout << "e: " << e << '\n';
    
    cout << "Total de trocas: " << count << '\n';
    
    system ("pause"); 
	return 0;
}

bool trocar ( int & x, int & y )
{
    
    int temp;
    if( x > y )
    {
      
        temp = x;
        x = y;
        y = temp;
        return true;
    }
    else 
        return false;
}

bool trocar ( double & x, double & y )
{
    double temp;
    if( x > y )
    {    
        temp = x;
        x = y;
        y = temp;
        return true;
    }
    else 
        return false;
}
