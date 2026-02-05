#include<unistd.h>


void ft_print_reverse_alphabet(void){
	char alpha_tab[26] ={'a','b','c', 'd','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	int i =25;
	while(i >=0)
	{
		write(1,&alpha_tab[i],1);
		i--;
	}


}


int main(void){
	ft_print_reverse_alphabet();
	return 0;
}
