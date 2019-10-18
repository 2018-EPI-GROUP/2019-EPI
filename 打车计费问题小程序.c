#include <stdio.h>
float Fee(float time ,float miles)
{
    float fee;
    if(miles<3)
    {
        printf("车费为14元");
    }
    else if(time>5&&time<=23)
    {
        fee=14+2.3*(miles-3);
        printf("车费为%.1f",fee);
    }
    else
    {
        fee=14+2.3*1.2*(miles-3);
        printf("车费为%.1f",fee);
    }
        return fee;
}
int main()
{
    Fee(6,12);
    return 0;
}