#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
class point{
public:
    point(int x,int y){
        this->x = x;
        this->y = y;
    }
    void print(){
        cout<<x<<" "<<y<<endl;
    }

    double distance(int p, int q){
        int d_x = (p - x) * (p - x);
        int d_y = (q - y) * (q - y);

        double dis = pow(d_x + d_y,0.5);
        return dis;
    }

    void print_dis(int p,int q){
        cout<<fixed<<setprecision(5)<<distance(p,q)<<endl;
    }

    void print_opposite(){
        cout<<x*(-1)<<" "<<y*(-1)<<endl;
    }

    void isInCircle(int p,int q,int r){
        if(distance(p,q) < r) cout<<"Yes";
        else cout<<"No";
    }

private:
    int x,y;

};
int main(){
    int x,y;
    cin>>x>>y;
    class point pt(x,y);
    int N,op;
    cin>>N;
    while(N--){
        cin>>op;
        switch (op){
            case 1:{
                pt.print();
                break;
            }
            case 2:{
                int p,q;
                cin>>p>>q;
                pt.print_dis(p,q);
                break;
            }
            case 3:{
                pt.print_opposite();
                break;
            }
            case 4:{
                int p,q,r;
                cin>>p>>q>>r;
                pt.isInCircle(p,q,r);
                cout<<endl;
                break;
            }
        }
    }
    return 0;
}