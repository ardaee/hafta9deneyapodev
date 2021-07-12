#include <iostream>
using namespace std;
class Basketbolcu{//soru 1
public:
    string ad;
    string soyad;
    int forma;
    int basket;
    Basketbolcu(string a,string s,int f,int b){
        ad=a;
        soyad=s;
        forma=f;
        basket=b;
    }
};
class Nokta{
public:
    float x;
    float y;
    Nokta(float xkonum, float ykonum){
        x=xkonum;
        y=ykonum;
    }
    void goster(){
        cout<<"Noktanin x konumu: "<<x<<", noktanin y konumu: "<<y<<endl;
    }
    void sifir_mi(){
        if(x==0&&y==0){
            cout<<"Nokta sifira sifirdadir."<<endl;
        }else
            cout<<"Nokta sifira sifir noktasinda degildir. "<<endl;
    }
    void git(float x_git, float y_git){
        x=x_git;
        y=y_git;
    }
};
int main(){
    int s;
    cout<<"Cevabini gormek istediginiz soru numarasini giriniz(1-2): "<<endl;
    cin>>s;
    if(s==1){
        Basketbolcu b1("Adnan","Yilmaz",33,286);
        Basketbolcu b2("Selim","Kaptan",51,133);
        cout<<"1. basketbolcu: "<<b1.ad<<" "<<b1.soyad<<", forma numarasi: "<<b1.forma<<", attigi basket sayisi: "<<b1.basket<<endl;
        cout<<"2. basketbolcu: "<<b2.ad<<" "<<b2.soyad<<", forma numarasi: "<<b2.forma<<", attigi basket sayisi: "<<b2.basket<<endl;
    } else if(s==2){
        Nokta n1(5,12);
        n1.goster();
        n1.sifir_mi();
        n1.git(-3,77.6);
        n1.goster();
        n1.git(0,0);
        n1.goster();
        n1.sifir_mi();
    }
}
