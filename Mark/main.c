//
//  main.c
//  Mark
//
//  Created by 20161104569 on 18/6/27.
//  Copyright © 2018年 20161104569. All rights reserved.
//

#include <stdio.h>

void main()
{ float score[5];
    float min,max,ave;
    float sum=0.0;
    int i;
    printf("input 5 score:\n");
    for(i=0;i<5;i++) scanf("%f",&score[i]);
    printf("\n");
    min=score[0];
    max=score[0];
    for(i=0;i<5;i++){
        sum=sum+score[i];
        if(score[i]>max) max=score[i];
        if(score[i]<min) min=score[i];
    }
    ave=(sum-max-min)/3;
    printf("The max=%f\n",max);
    printf("The min=%f\n",min);
    printf("The ave=%f\n",ave);
}
