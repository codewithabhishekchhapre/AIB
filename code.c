void main(){

     for(int i=0;i<8;i++){
          if(i % 2 == 0){
               printf("%d\n", i+2);
          } else {
               printf("%d\n", i%2);
          }
          if(i%3==0 && i%2==0){
               printf("%d\n", i-1);
          } else if(i%3==0){
               printf("%d\n", i+2);
          } else {
               printf("%d\n", i%3);
          }
     }
}