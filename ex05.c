#include<unistd.h>


void ft_print_comb(){

	for (int x =0;x <= 7;x++)
	{
		for(int y=x+1; y<=8;y++)
			{
				for(int z = y+1 ; z<= 9 ;z++)
					{
						char cx = x + '0';
						char cy = y + '0';
						char cz = z + '0';
						write(1,&cx,1);
						write(1,&cy,1);
						write(1,&cz,1);
						 if(!( x==7 &&  y==8 &&  z==9)){
               							 write(1,", ",2);
        						}

					}
			}
	}



}

int main(void)
{
    ft_print_comb();
    return 0;
}
