/*给定一个常数K以及一个单链表L，请编写程序将L中每K个结点反转。例如：给定L为1→2→3→4→5→6，K为3，则输出应该为3→2→1→6→5→4；如果K为4，则输出应该为4→3→2→1→5→6，即最后不到K个元素不反转。

输入格式：

每个输入包含1个测试用例。每个测试用例第1行给出第1个结点的地址、结点总个数正整数N(<= 105)、以及正整数K(<=N)，即要求反转的子链结点的个数。结点的地址是5位非负整数，NULL地址用-1表示。

接下来有N行，每行格式为：

Address Data Next

其中Address是结点地址，Data是该结点保存的整数数据，Next是下一结点的地址。

输出格式：

对每个测试用例，顺序输出反转后的链表，其上每个结点占一行，格式与输入相同。

输入样例：
00100 6 4
00000 4 99999
00100 1 12309
68237 6 -1
33218 3 00000
99999 5 68237
12309 2 33218
输出样例：
00000 4 33218
33218 3 12309
12309 2 00100
00100 1 99999
99999 5 68237
68237 6 -1
*/
#include <stdio.h>
#include <algorithm>
using namespace std;
const int maxn=100010;
struct node{
    int address;
    int data;
    int next;
    int order;
};
node no[maxn];
node temp;
bool cmp(node a,node b){
    if(a.order!=b.order){
        return a.order<b.order;
    }
}
int main(){
    int start,n,k,address;
    scanf("%d %d %d",&start,&n,&k);
    for(int i=0;i<maxn;++i){
        no[i].order=maxn;
    }
    for(int i=0;i<n;++i){
        scanf("%d",&address);
        scanf("%d %d",&no[address].data,&no[address].next);//自作孽不可活，我是瞎了吗？？？？？？？？？？？？？？？？？？？？？？
        no[address].address=address;
    }
    int p=start,order=0;
    while(p!=-1){
        no[p].order=order++;
        p=no[p].next;
    }
    sort(no,no+maxn,cmp);
    n=order;
    for(int i=0;i<n/k;++i){
           for(int j=k-1;j>=1;--j){
                printf("%05d %d %05d\n",no[i*k+j].address,no[i*k+j].data,no[i*k+j-1].address);
           }
           if(i!=(n/k-1)){
             printf("%05d %d %05d\n",no[i*k].address,no[i*k].data,no[(i+1)*k+k-1].address);
        }
    }
    if(n%k!=0){
        //no[((n/k)-1)*k].next=no[(n/k)*k].address;
         printf("%05d %d %05d\n",no[(n/k-1)*k].address,no[(n/k-1)*k].data,no[(n/k)*k].address);
        for(int i=0;i<(n%k-1);++i){
            printf("%05d %d %05d\n",no[(n/k)*k+i].address,no[(n/k)*k+i].data,no[(n/k)*k+i+1].address);
        }
        printf("%05d %d -1\n",no[n-1].address,no[n-1].data);
    }
    else{
         printf("%05d %d -1\n",no[(n/k-1)*k].address,no[(n/k)-1].data);
    }
    return 0;
}
