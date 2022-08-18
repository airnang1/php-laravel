#include <iostream>
using namespace std;
double tong(double a,double b){
    return a+b;
}
double tich(double a,double b){
    return a*b;
}
double hieu(double a,double b){
    return a-b;
}
double thuong(double a,double b){
    return a/b;
}
double tong1(double *a,double *b){
    return *a+*b;
}
double hieu1(double *a,double *b){
    return *a-*b;
}
double tich1(double *a,double *b){
    return *a**b;
}
double thuong1(double *a,double *b){
    return *a/(*b);
}
int main(){
    double a,b;
    cin >>a>>b;
    double *c=&a;
    double *d=&b;
    cout <<tong(a,b)<<"\t"<<hieu(a,b)<<"\t"<<tich(a,b)<<"\t"<<thuong(a,b)<<endl;
    cout <<tong1(c,d)<<"\t"<<hieu1(c,d)<<"\t"<<tich1(c,d)<<"\t"<<thuong1(c,d)<<endl;
}