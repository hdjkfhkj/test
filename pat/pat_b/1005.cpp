
/*������(Callatz)�����Ѿ���1001�и������������������Ŀ������΢��Щ���ӡ�

��������֤�����Ȳ����ʱ��Ϊ�˱����ظ����㣬���Լ�¼�µ��ƹ�����������ÿһ�����������n=3������֤��ʱ��������Ҫ����3��5��8��4��2��1�������Ƕ�n=5��8��4��2������֤��ʱ�򣬾Ϳ���ֱ���ж������Ȳ������α��������Ҫ�ظ����㣬��Ϊ��4�����Ѿ�����֤3��ʱ���������ˣ����ǳ�5��8��4��2�Ǳ�3�����ǡ����������ǳ�һ�������е�ĳ����nΪ���ؼ����������n���ܱ������е��������������ǡ�

���ڸ���һϵ�д���֤�����֣�����ֻ��Ҫ��֤���еļ����ؼ������Ϳ��Բ������ظ���֤���µ����֡������������ҳ���Щ�ؼ����֣������Ӵ�С��˳��������ǡ�

�����ʽ��ÿ�������������1��������������1�и���һ��������K(<100)����2�и���K��������ͬ�Ĵ���֤��������n(1<n<=100)��ֵ�����ּ��ÿո������

�����ʽ��ÿ���������������ռһ�У����Ӵ�С��˳������ؼ����֡����ּ���1���ո��������һ�������һ�����ֺ�û�пո�

����������
6
3 5 6 7 8 11
���������
7 6*/
#include <iostream>
#include <algorithm>
using namespace std;
bool cmp(int a,int b){
    return a>b;
}
int main(){
    int len,a[100];
    cin>>len;
    for(int i=0;i<len;++i)
        cin>>a[i];
    for(int i=0;i<len;++i){
        int n=a[i];
        if(n!=101){
            while(n>1){
                if(n%2==0)
                    n/=2;
                else
                    n=(3*n+1)/2;
                for(int j=0;j<len;j++)
                    if(n==a[j])
                    a[j]=101;
            }
        }
    }
    sort(a,a+len,cmp);
    int i;
    for(i=0;i<len&&a[i]==101;++i){
    }
    cout<<a[i];
    for(i=i+1;i<len;++i)
        cout<<" "<<a[i];
    return 0;
}