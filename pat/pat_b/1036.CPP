/*�����ʽ��

������һ���и��������α߳�N��3<=N<=20������������αߵ�ĳ���ַ�C�����һ���ո�

�����ʽ��

����ɸ����ַ�C�����������Ρ�����ע�⵽�м����м�������Ϊ���ý������ȥ���������Σ��������������ʵ������������50%����������ȡ������

����������
10 a
���������
aaaaaaaaaa
a        a
a        a
a        a
aaaaaaaaaa*/
#include <stdio.h>
#include <math.h>
int main(){
    int n;
    char c;
    scanf("%d %c",&n,&c);
    for(int i=0;i<n;++i){
        printf("%c",c);
    }
    printf("\n");
    for(int i=1;i<ceil(n/2.0)-1;++i){
        for(int j=0;j<n;++j){
            if(j==0||j==n-1){
                printf("%c",c);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    for(int i=0;i<n;++i){
        printf("%c",c);
    }
    return 0;
}