#include<unistd.h>



void ft_print_alphabet(void){
         char  alpha_tab[27] ={'a','b','c', 'd','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','\0'};
	 int i =0;
	 while(alpha_tab[i]!= '\0'){
		write(1,&alpha_tab[i],1);
		i++;
	}


}


int main(void){
	ft_print_alphabet();
	return 0;
}
