#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int arr[n][3];

    int i=0, count=0;
    for(i=0; i<n; i++){
       scanf("%d %d %d", &arr[i][0], &arr[i][1], &arr[i][2]);
    }

    for(i=0; i<n; i++){
        if((arr[i][0]==1&&arr[i][1]==1)||(arr[i][1]==1&&arr[i][2]==1)||(arr[i][0]==1&&arr[i][2]==1)){
            count++;
        }
    }

    printf("%d", count);

    return 0;
}