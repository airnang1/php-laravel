#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
void tinh(float &a,float &b,float &n);
void nhapmang(float *arr,float &a,float &b,float &f,int n,int &nCount)
{
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        float c = (float) rand() / RAND_MAX - (float) rand() / RAND_MAX;
        if (c>0)
        {
            *(arr+i)=c;
            f=c;
            tinh(a,b,f);
            nCount++;
        }
        
    }
}
float average1(float *arr,int n)
{
    int dem=0;
    float a=0;
    for (int i = 0; i < n; i++)
    {
        if (*(arr+i)>0)
        {
            a+=*(arr+i);
            dem++;
        }
    }
    return a/dem;
}
void average2(float *arr,int n){
    float s=0,k=0;
    int dem=0,demst=0;
    for (int i = 0; i <n; i++)
    {
        if (*(arr+i)<0.01 && *(arr+i)>0)
        {
            s+=*(arr+i);
            dem++;
        }
        else if(*(arr+i)>=0.01){
            k+=*(arr+i);
            demst++;
        }
    }
    cout <<"average1= "<<s/dem<<"\t"<<"average2= "<<k/demst<<endl;
}
void tinh(float &a,float &b,int n){
    if (n<0.01 && n>0)
    {
        a+=n;
    }
    else if(n>0.01){
        b+=n;
    }
}
float average3(float a,float b,int nCount){
    return (a+b)/nCount;
}
int main(){
    int n,nCount=0;
    float a;
    float b,f;
    cin >>n;
    float *arr=new float[n];
    if (n<1000)
    {
        nhapmang(arr,a,b,f,n,nCount);
        cout <<average1(arr,n)<<endl;
        average2(arr,n);
        // tinh(a,b,f);
        // cout <<average3(a,b,nCount);
    }
    return 0;
}