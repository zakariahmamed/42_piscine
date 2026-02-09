#include<unistd.h>



void ft_print_comb2(void){
	int a = 00;
	int b;
	while(a<=98){
		b = a+1;
		while(b<=99){
			char a1 = (a/10)+'0';
			char a2 = (a%10)+'0';
			write(1,&a1,1);
			write(1,&a2,1);
			write(1," ",1);
			char b1 = (b/10)+'0';
			char b2 = (b%10)+'0';
			write(1,&b1,1);
			write(1,&b2,1);
			if(!(a ==98 && b ==99)){
					write(1,",",1);
			}
		b++;
		}
	a++;
	}
}


int main(void){
	ft_print_comb2();
	return 0;

}
