#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    int n,m,q,x,y;
    cin>>n>>m>>q;
    const int H = 20 ,W = 40;
    const vector<string> seal = {"BQQRQMRgRgMgMgRQQQBBBBBBBBBBBBBBBBBBBBBB", 
				  "QQMQMRMMgQMBBBBQgdsvr7rr7jL77LvsuSXPZQBB" ,
                  "BMRgRgRMQggKLi: ...:i75XJ.  ...       .g" ,
                  "QRgMggddq2Jsr7riYQdYri7YUPEi .::..   5BB" ,
                  "QMMgMZJPgEgP55ZPIPdX27::iivM: i:::::PBBM" ,
                  "RRgggDZBQK5KbQRQdbZQDB5.:ii7L ... 7BBRDQ" ,
                  "QgMgMPjIv7PZDEZEZdEPDgBi.iiir ...sBQgDMM" ,
                  "gRgMgg7.jggEdEbZddPddgBr iir....PBgDZggR" ,
                  "RgMDgMZYPZEbEdEbdPddZgB..ii.   1BggEgZgg" ,
                  "gRggZggREDdEbEbdPdbEEBP ir.   UBDZZDZggM" ,
                  "RgMDgEgEDEDdEbEbdbZZBB:.:   .PBQZdgEgDMg" ,
                  "gMggDDZDdDEZEDdDZggBB: .   :BB5dbDZgZggR" ,
                  "MDgDgDgZDEZEZEDZMRBB.   ..igBPISEZDZgggg" ,
                  "MMggZDEgZZdDEggRgQI     :PPgggZgZgEgZgDR" ,
                  "QMgggZDEZdDZgMQRX.    .uQBQDDEDZZEDDgDQM" ,
                  "QQMMDgZgZDZggQEi    iEQBPPPDEDdZEgDggQMQ" ,
                  "QRQMQgMgMMBQE:   :IgQRPPDEbEgDgggDRRQQQQ" ,
                  "QQQQQQQBBBX:  :IZBBQggDDEggMgMMQRRRQQBQB" ,
                  "BQBQBBQK7..iPBBQBMRgMgMggDRMQMQQBQBQBQBB" ,
                  "BBQBRXJUqBBBBBBBQQQQRQQQQQQBQBBBBBQBBBBB" };
    vector<string> canvas(n,string(m,' '));
    for(int i = 0;i < q;i++){
        cin>>x>>y;
        for(int r = 0;r<H;r++){
            for(int c =0;c<W;c++){
                int r_1 = r + x,c_1 = c + y;
                if(r_1 >= 0 && r_1 < n && c_1 >= 0 && c_1 < m && seal[r][c] != ' ' ){
                    canvas[r_1][c_1] = seal[r][c];

                }
            }
        }
    }

    for(int i = 0;i<n;i++){
        cout<<canvas[i]<<endl;
    }
    return 0; 
}
/*1、输入的n和m分别指的是行数和列数
2、每行的输入是x y指的是画布的行数和列数
3、自己写的时候一定注意vector和string的索引顺序
4、这一步赋值很重要vector<string> canvas(n,string(m,' '));
5、对二维字符串的处理

*/