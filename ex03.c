#include<unistd.h>


void ft_print_numbers(int a){
	char c;
	if (a>=10 && a >=0){
	    ft_print_numbers(a/10);
	}
	c = (a% 10) + '0';
	write(1,&c,1);
}


int main(void){
     ft_print_numbers(123456789);
    return 0;
}

