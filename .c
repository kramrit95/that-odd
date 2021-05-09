#include <stdio.h>

int main() {
int N;
int sum=0;
int a[10];
scanf("%d",&N);
for(int i=0;i<N;i++){
    scanf("%d",&a[i]);
}
for(int i=0;i<N;i++){
if(a[i]%2==0){
    sum=sum+a[i];
    
    }


    
}
printf("%d\n",sum);
    return 0;
}
