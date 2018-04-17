#include <iostream>

int serie(int a);

int main(void){
  for(int i=1;i<=10;i++)
  std::cout<<serie(i)<<"\n";
}

int serie(int a){
  if(a==0) return 0;
  if(a==1) return 1;
  return serie(a-1)+serie(a-2);
}
