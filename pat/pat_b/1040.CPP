/*�����ʽ��

����ֻ��һ�У�����һ���ַ��������Ȳ�����105��ֻ����P��A��T������ĸ��

�����ʽ��

��һ������������ַ����а������ٸ�PAT�����ڽ�����ܱȽϴ�ֻ�����1000000007ȡ�����Ľ����

����������
APPAPT
���������
2*/
#include <stdio.h>
int main(){
    char s[100010];
    int count=0;
    scanf("%s",s);
    for(int i=0;s[i]!='\0';++i){
        if(s[i]=='P'){
            for(int j=i+1;s[j]!='\0';++j){
                if(s[j]=='A'){
                    for(int k=j+1;s[k]!='\0';++k){
                        if(s[k]=='T'){
                                count=count%1000000007;
                            count++;
                        }
                    }
                }
            }
        }
    }
    printf("%d",count);
    return 0;
}