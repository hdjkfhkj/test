
/*给定任一个各位数字不完全相同的4位正整数，如果我们先把4个数字按非递增排序，再按非递减排序，然后用第1个数字减第2个数字，将得到一个新的数字。一直重复这样做，我们很快会停在有“数字黑洞”之称的6174，这个神奇的数字也叫Kaprekar常数。

例如，我们从6767开始，将得到

7766 - 6677 = 1089
9810 - 0189 = 9621
9621 - 1269 = 8352
8532 - 2358 = 6174
7641 - 1467 = 6174
... ...

现给定任意4位正整数，请编写程序演示到达黑洞的过程。

输入格式：

输入给出一个(0, 10000)区间内的正整数N。

输出格式：

如果N的4位数字全相等，则在一行内输出“N - N = 0000”；否则将计算的每一步在一行内输出，直到6174作为差出现，输出格式见样例。注意每个数字按4位数格式输出。

输入样例1：
6767
输出样例1：
7766 - 6677 = 1089
9810 - 0189 = 9621
9621 - 1269 = 8352
8532 - 2358 = 6174
输入样例2：
2222
输出样例2：
2222 - 2222 = 0000
*/
#include <stdio.h>
#include <algorithm>
using namespace std;
bool cmp(int a,int b){
    if(a!=b){
        return a>b;
    }
}
int main(){
    int n,dif=0,a[10];
    scanf("%d",&n);
    dif=n;
    //cout<<dif;
    while(1){
            int max=0,min=0,i=0;//在哪用到在哪定义，要不然很有可能出错!!!!!!!!!!!!!!!!!!!
     while(i<4){
        a[i]=dif%10;
        dif/=10;
        i++;
    }
    //if(a[0]==a[1]&&a[0]==a[2]&&a[0]==a[3])
       // printf("%d - %d = 0000",n,n);
    //sort(a,a+i);//升序
    sort(a,a+4,cmp);
    for(int j=0;j<4;++j){
        max=max*10+a[j];
    }
    //sort(a,a+i);
    for(int j=3;j>=0;--j){
        min=min*10+a[j];
    }
    dif=max-min;
    //cout<<max;
    printf("%04d - %04d = %04d\n",max,min,dif);
    if(dif==0||dif==6174){
        break;
     }
    }
    return 0;
}
