/*��������[-231, 231]�ڵ�3������A��B��C�����ж�A+B�Ƿ����C��

�����ʽ��

�����1�и���������T(<=10)���ǲ��������ĸ�����������T�����������ÿ��ռһ�У�˳�����A��B��C���������Կո�ָ���

�����ʽ��

��ÿ�������������һ���������Case #X: true�����A+B>C�����������Case #X: false��������X�ǲ��������ı�ţ���1��ʼ����

����������
4
1 2 3
2 3 4
2147483647 0 2147483646
0 -2147483648 -2147483647
���������
Case #1: false
Case #2: true
Case #3: true
Case #4: false
*/
#include <iostream>
using namespace std;
int main(){
    long a,b,c;
    int n;
    //scanf("%d",&n);
    cin>>n;
    for(int i=1;i<=n;++i){
        //printf("Case #%d:",i);
        cin>>a>>b>>c;
        cout<<"Case #"<<i<<": "<<((a+b)>c?"true":"false")<<endl;
       /* if((a+b)>c)
            cout<<"true";
        else
            cout<<"false";*/
    }
    return 0;
}