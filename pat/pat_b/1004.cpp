/*读入n名学生的姓名、学号、成绩，分别输出成绩最高和成绩最低学生的姓名和学号。

输入格式：每个测试输入包含1个测试用例，格式为

  第1行：正整数n
  第2行：第1个学生的姓名 学号 成绩
  第3行：第2个学生的姓名 学号 成绩
  ... ... ...
  第n+1行：第n个学生的姓名 学号 成绩
其中姓名和学号均为不超过10个字符的字符串，成绩为0到100之间的一个整数，这里保证在一组测试用例中没有两个学生的成绩是相同的。
输出格式：对每个测试用例输出2行，第1行是成绩最高学生的姓名和学号，第2行是成绩最低学生的姓名和学号，字符串间有1空格。

输入样例：
3
Joe Math990112 89
Mike CS991301 100
Mary EE990830 95
输出样例：
Mike CS991301
Joe Math990112*/
#include <stdio.h>
#include <string.h>
using namespace std;
int main(){
    int n;
    char hname[15],lname[15],hsno[15],lsno[15],name[15],sno[15],grade;
    int hgrade=-1,lgrade=101;
    scanf("%d",&n);
    while(n--){
        scanf("%s %s %d",name,sno,&grade);
        //scanf("%s %s ",name,sno);
        //scanf("%d",&grade);
        if(grade<lgrade){
            strcpy(lname,name);
            strcpy(lsno,sno);
            lgrade=grade;
        }
        if(grade>hgrade){
            strcpy(hname,name);
            strcpy(hsno,sno);
            hgrade=grade;
        }
    }
    printf("%s %s\n",hname,hsno);
    printf("%s %s\n",lname,lsno);
    return 0;
}
