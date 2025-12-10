#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
class circle{
public:
    circle(int x,int y,int r){
        this->x = x;
        this->y = y;
        this->r = r;
    }
    void print_center(){
        cout<<x<<" "<<y<<endl;
    }

    void print_area(){
        double area = M_PI * r * r;
        cout<<fixed<<setprecision(5)<<area<<endl;
    }
    void print_primeter(){
        double primeter = 2 * M_PI * r;
        cout<<fixed<<setprecision(5)<<primeter<<endl;
    }

    double distance(int p, int q){
        int d_x = (p - x) * (p - x);
        int d_y = (q - y) * (q - y);

        double dis = sqrt(d_x + d_y);
        return dis;
    }

    void isTangency(int p,int q,int r){
        double d = distance(p,q);   
        if(fabs(d - (this->r + r)) < 1e-9 || fabs(d - (abs(this->r - r))) < 1e-9) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }

private:
    int x,y,r;
};
int main(){
    int x,y,r,N,op;
    cin>>x>>y>>r;
    class circle cle(x,y,r);
    cin>>N;
    while(N--){
        cin>>op;
        switch(op){
            case 1:{
                cle.print_center();
                break;
            }
            case 2:{
                cle.print_area();
                break;
            }
            case 3:{
                cle.print_primeter();
                break;
            }
            case 4:{
                int p,q,r1;
                cin>>p>>q>>r1;
                cle.isTangency(p,q,r1);
                break;
            }
        }
    }

    return 0;
}