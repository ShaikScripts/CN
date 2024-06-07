#include<stdio.h>
int main(){
int w,i,f,frames[50];
printf("enter window size");
scanf("%d",&w);
printf("\nenter no.of frames to transmit");
scanf("%d",&f);
printf("\nenter %d frames:f");
for(i=1;i<=f;i++){
    scanf("%d",&frames[i]);
    printf("\nwith sliding window protocol the frames will be sent in following manner(assuming no corruption of frames)\n\n");
    printf("after sending %d frames at each stage waits for acknowledgement sent by receiver\n\n",w);
    for(i=1;i<=f;i++){
    if(i%w==0){
    printf("%d\n",frames[i]);
    printf("acknowledgement above frames sent by receiver by sender\n\n");
    }
    else{
    printf("%d",frames[i]);
    }
    if(f%w!=0){
    printf("\nacknoeledgement of above frames sent is received by sender\n");
    }
    }
    return 0;
}
