/*输入两个非负10进制整数A和B(<=230-1)，输出A+B的D (1 < D <= 10)进制数。

输入格式：

输入在一行中依次给出3个整数A、B和D。

输出格式：

输出A+B的D进制数。

输入样例：
123 456 8
输出样例：
1103*/
#include <stdio.h>
using namespace std;
int main(){
    int a,b,c,d,r[100],i;
    scanf("%d %d %d",&a,&b,&d);
    //cin>>a>>b>>d;
    c=a+b;
    if(c==0){
        printf("0");
        //return 0;
    }
    for(i=0;c!=0;++i){
        r[i]=c%d;
        c/=d;
    //printf("%d",r[i]);
    }
     //printf("%d",i);
     //int j;
    for(int j=i-1;j>=0;j--){
         printf("%d",r[j]);
    }
    return 0;
}
