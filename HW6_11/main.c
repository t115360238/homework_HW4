#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d", &n);
    int list[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &list[i]);

    for(int j = n - 1; j >= 1; j--){
        int flag = 0;
        for(int k = 0; k < j; k++){
            if(list[k] > list[k + 1]){
                flag = 1;
                int temp = list[k];
                list[k] = list[k + 1];
                list[k + 1] = temp;
            }
        }
        if(flag == 0)
            break;
    }

    for(int l = 0; l < n; l++)
        printf("%d ", list[l]);

    system("pause");
    return 0;
}