#include <stdio.h>
#define F for(i=0;i<3;i++)
int main()
{
    int i,j,t,pA[3]={0,0,0},pB[3]={0,0,0};
    char a[3][3],b[3][3],t1,t2,t3;
    scanf("%s %s %s",&a[0],&a[1],&a[2]);
    scanf("%s %s %s",&b[0],&b[1],&b[2]);
    /*用两个整型数组来表示三张扑克牌的大小*/
    F
    {
        switch(a[i][1])
        {
            case'1':{
                if(a[i][2]=='0')
                    pA[i]+=9;
            }
                break;
            case 'A':
                pA[i]+=13;
                break;
            case'2':
                pA[i]+=1;
                break;
            case'3':
                pA[i]+=2;
                break;
            case'4':
                pA[i]+=3;
                break;
            case'5':
                pA[i]+=4;
                break;
            case'6':
                pA[i]+=5;
                break;
            case'7':
                pA[i]+=6;
                break;
            case'8':
                pA[i]+=7;
                break;
            case'9':
                pA[i]+=8;
                break;
            case'J':
                pA[i]+=10;
                break;
            case 'Q':
                pA[i]+=11;
                break;
            case 'K':
                pA[i]+=12;
                break;
            default:
                pA[i]=0;
        }
        switch (a[i][0])
        {
            case'H':
                pA[i]+=39;
                break;
            case'S':
                pA[i]+=26;
                break;
            case'D':
                pA[i]+=13;
                break;
            case'C':
                pA[i]+=0;
                break;
            default:
                pA[i]=0;
        }
    }
    F
    {
        switch(b[i][1])
        {
            case'1':{
                if(b[i][2]=='0')
                    pB[i]+=9;
            }
                break;
            case 'A':
                pB[i]+=13;
                break;
            case'2':
                pB[i]+=1;
                break;
            case'3':
                pB[i]+=2;
                break;
            case'4':
                pB[i]+=3;
                break;
            case'5':
                pB[i]+=4;
                break;
            case'6':
                pB[i]+=5;
                break;
            case'7':
                pB[i]+=6;
                break;
            case'8':
                pB[i]+=7;
                break;
            case'9':
                pB[i]+=8;
                break;
            case'J':
                pB[i]+=10;
                break;
            case 'Q':
                pB[i]+=11;
                break;
            case 'K':
                pB[i]+=12;
                break;
            default:
                pB[i]=0;
        }
        switch (b[i][0])
        {
            case 'H':
                pB[i]+=39;
                break;
            case 'S':
                pB[i]+=26;
                break;
            case 'D':
                pB[i]+=13;
                break;
            case 'C':
                pB[i]+=0;
                break;
            default:
                pB[i]=0;
        }
    }
    if(pA[0]==0||pA[1]==0||pA[2]==0||pB[0]==0||pB[1]==0||pB[2]==0)
    {printf("Input Error!\n");
        return 0;}
    if(pA[0]==pA[1]||pA[0]==pA[2]||pA[1]==pA[2]||pB[0]==pB[1]||pB[0]==pB[2]||pB[1]==pB[2])
    {printf("Input Error!\n");
        return 0;}
    else/*如果输入正确，用冒泡排序把对应的pX,a,b从大到小排列*/
    {
        F
        for (j=i; j<3; j++)
            if(pA[j]>pA[i])
            {
                t=pA[i];
                pA[i]=pA[j];
                pA[j]=t;
                t1=a[i][0];
                a[i][0]=a[j][0];
                a[j][0]=t1;
                t2=a[i][1];
                a[i][1]=a[j][1];
                a[j][1]=t2;
                t3=a[i][2];
                a[i][2]=a[j][2];
                a[j][2]=t3;
            }
        F
        for (j=i; j<3; j++)
            if(pB[j]>pB[i])
            {
                t=pB[i];
                pB[i]=pB[j];
                pB[j]=t;
                t1=b[i][0];
                b[i][0]=b[j][0];
                b[j][0]=t1;
                t2=b[i][1];
                b[i][1]=b[j][1];
                b[j][1]=t2;
                t3=b[i][2];
                b[i][2]=b[j][2];
                b[j][2]=t3;
            }
    }
    
    {
        F
        {
            if(pA[i]>pB[i])
            {
                printf("Winner is A!\n");
                printf("A: %s %s %s\n",a[0],a[1],a[2]);
                printf("B: %s %s %s\n",b[0],b[1],b[2]);
                break;
            }
            if (pB[i]>pA[i])
            {
                printf("Winner is B!\n");
                printf("A: %s %s %s\n",a[0],a[1],a[2]);
                printf("B: %s %s %s\n",b[0],b[1],b[2]);
                break;
            }
            if(i==2)/*当循环判断了三个值后仍没有输出值时，证明三个值均相等，此时输出X!*/
            {
                printf("Winner is X!\n");
                printf("A: %s %s %s\n",a[0],a[1],a[2]);
                printf("B: %s %s %s\n",b[0],b[1],b[2]);
                break;
            }
        }
    }
}





