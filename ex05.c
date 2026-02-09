#include<unistd.h>


void ft_print_comb(void){
	int x=0;
	int y;
	int z;
	while(x<=7){
		y=x+1;
		while(y<=8){
			z = y+1;
			while(z<=9){
                                    char cx = x + '0';
                                    char cy = y + '0';
                                    char cz = z + '0';
                                    write(1,&cx,1);
                                    write(1,&cy,1);
                                    write(1,&cz,1);
                                    if(!( x==7 &&  y==8 &&  z==9)){
                                               write(1,", ",2);
                                               }

			z++;
			}
		y++;
		}
	     x++;
	    }

}



int main(void)
{
    ft_print_comb();
    return 0;
}
