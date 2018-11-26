#include <stdio.h>

int main(void)
{
    int tCases;
    int nBoxes, xCoin, swaps;
    int coinPos;
    int i, j, k;
    int box1, box2;
    scanf("%d", &tCases);
    int output[tCases];
    for(i=1;i<=tCases;++i)
    {
        scanf("%d %d %d", &nBoxes, &xCoin, &swaps);
        coinPos=xCoin;
        for(j=1;j<=swaps;++j)
        {
            scanf("%d %d", &box1, &box2);

            if(coinPos==box1)
                coinPos=box2;
            else if(coinPos==box2){
                coinPos=box1;
            }
            
        }
        output[i-1]=coinPos;
    }
    for(k=0;k<tCases;++k)
    {
        printf("%d \n", output[k]);
    }

    return 0;
}