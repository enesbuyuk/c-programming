#include <stdio.h>

int main(){
    int n;
    printf("Please enter the length of the array: ");

    if(scanf("%d",&n) == 0){
        printf("You must enter a integer!");
        return 0;
    }

    int oldArray[n],newArray[n];

    for(int i=0;i<n;i++){
        printf("Enter the %d. element: ",i+1);
        if(scanf("%d",&oldArray[i]) == 0){
            printf("You must enter a integer!");
            return 0;
        }
    }

    for(int i=0;i<n;i++){
        (i == n-1) ? (newArray[0] = oldArray[i]) : (newArray[i+1] = oldArray[i]);
    }

    for(int i=0;i<n;i++){
        printf("%d ",newArray[i]);
    }

    return 0;
}
