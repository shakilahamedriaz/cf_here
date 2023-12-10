#include<bits/stdc++.h>
using namespace std;


void sr_sol(double x, double y)
{
    if(x == 0.0 && y == 0.0) cout << "Origem" << endl; 
    else if((x > 0.0 && y == 0.0) || (x < 0.0 && y == 0.0)) cout << "Eixo X" << endl;
    else if((x == 0.0 && y > 0.0) || (x == 0 && y < 0.0)) cout << "Eixo Y" << endl;
    else if(x > 0.0 && y > 0.0) cout << "Q1" << endl;
    else if(x < 0.0 && y > 0.0) cout << "Q2" << endl;
    else if(x < 0.0 && y < 0.0) cout << "Q3" << endl;
    else cout << "Q4" << endl; // x > 0.0 && y < 0.0

}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    double x,y;
    cin >> x >> y;

    sr_sol(x,y);
  
    return 0;
}












  