/*输入格式：

输入在第1行给出不超过105的正整数N，即学生总人数。随后1行给出N名学生的百分制整数成绩，中间以空格分隔。最后1行给出要查询的分数个数K（不超过N的正整数），随后是K个分数，中间以空格分隔。

输出格式：

在一行中按查询顺序给出得分等于指定分数的学生人数，中间以空格分隔，但行末不得有多余空格。

输入样例：
10
60 75 90 55 75 99 82 90 75 50
3 75 90 88
输出样例：
3 2 0*/
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],grade[110]={0};
    for(int i=0;i<n;++i){
            int score;
        scanf("%d",&score);
    grade[score]++;
    }
    int k;
    scanf("%d",&k);
    for(int i=0;i<k;++i){
        int score;
        scanf("%d",&score);
        if(i<k-1){
            printf("%d ",grade[score]);
        }
        else
             printf("%d",grade[score]);
    }
    return 0;
}
