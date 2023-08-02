#include<stdio.h>
int main(){
int t=0;
char n;
scanf("%d",&t);
for(int i=0;i<t;i++){
scanf("%c",&n);
if(n=='B' || n=='b')
printf("BattleShip\n");
else if(n=='C' || n=='c')
printf("Cruiser\n");
else if(n=='D' || n=='d')
printf("Destroyer\n");
else if(n=='F' || n=='f')
printf("Frigate\n");
}
return 0;
}