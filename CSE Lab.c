#include<stdio.h>
int main(){

    char ch[40][50];
    int i, j, r=0, c;
    for(i=0,i<2;i++){
        gets(str);
        for(j=0;str[j]!='\0';j++){
            if(str[j]=='')
                //printf("\n")
                word[r][c++]='\0';
                r++;
                c = 0;
            else
                //printf("%c",str[i]);
                word[r][c++]=str[j];
        }
        r++
        c = 0;
    }
for(i=0;i<r;i++)
    printf("%s \n", word[i]);

return 0;
}
