#include<stdio.h>
int main()
{
    char name[20],sir_name[20],p_name[20],p_sir_name[20];
    int arr[4],a,b,c,i,j=0,m,n;
    printf("\n\t\t\t\t\t\tLove Calculator\n");
    printf("Enter your name: ");
    gets(name);

    printf("Enter your sir name: ");
    gets(sir_name);

    printf("Enter your partner's name: ");
    gets(p_name);
    printf("Enter your partner's sir name: ");
    gets(p_sir_name);

    printf("Enter  your year of birth: ");
    scanf("%d",&a);
    printf("Enter your partner's year of birth: ");
    scanf("%d",&b);
    arr[0]=name[0];
    arr[1]=sir_name[0];
    arr[2]=p_name[0];
    arr[3]=p_sir_name[0];
    if(a>=b)
        m=100-10*(a-b);
    else
        m=100-10*(b-a);

    for(i=0;i<=3;i++)
    {
        if(arr[i]>=97)
        {
            arr[i]-=32;
        }
        j+=arr[i];
    }
    n=(m+j)/5;
    printf("\n\t\t\t\t\t\t\t%d %%",n);
    if(n<=80)
        printf("\n\t\t\t\t\t\tA good relationship");
    else
        printf("\n\t\t\t\t\tyou both are really made for each other.");
return 0;
}
