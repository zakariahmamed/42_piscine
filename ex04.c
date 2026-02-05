#include<unistd.h>




void  ft_is_negative(int a)
{
	if(a <  0){
	   char c = 'N';
	  write(1,&c,1);
	}
	else{
	  char e = 'P';
	  write(1,&e,1);
	}

}




int main(void){
	ft_is_negative(2);


}
