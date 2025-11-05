#include<stdio.h>
int main(){
    int n,a[100],i,ele;
    int even = 0;
    int odd = 0;
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("Enter the elements of array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(i%2==0){
            even+=a[i];
        }
        else{
            odd+=a[i];
        }
    }
    printf("The sum of even index elements is %d",even);
    printf("The sum of odd indexed elements is %d",odd);
}