#include <stdio.h>

// int main(){
//     int a,b;
//     printf("Please intput:\n");
//     scanf("%d", &a);

//     b=a%2;
//     if(b=1)
//         printf("����");
//     else
//         printf("ż��");
//     return 0;
// }


int main(){
    int a=1;
    
    // while(a<=100){

    //     if(a%2==1)
    //     printf("%d\n", a);
    //     a++;

    // }

    for(a=1;a<=100;a++){

        if(a%2==1)
            printf("%d ", a);
    }
    return 0;
}