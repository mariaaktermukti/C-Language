#include<stdio.h>


int main(){

int n, index;
printf("Enter array size : ");
scanf("%d",&n);



int arr[n];

for(int i =0;i<n;i++){
    scanf("%d",&arr[i]);

}

printf("Enter Deleting index : ");
scanf("%d",&index);

for(int i=index;i<n;i++){
    arr[i] = arr[i+1];
}


for(int i =0;i<n-1;i++){
    printf(" %d",arr[i]);
}

return 0;
}
