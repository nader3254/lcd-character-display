#include <avr/io.h>
#include "CLCD162.h"
#define F_CPU 8000000UL
#define en C2
#define rs C0
#define rw C1
#define db7 B7
#define db6 B6
#define db5 B5
#define db4 B4
#define db3 B3
#define db2 B2
#define db1 B1
#define db0 B0

int main(void)
{
	 uint8_t lcd1[]={rs,rw,db7,db6,db5,db4,db3,db2,db1,db0,en};
    // lcd_command_executer(lcd1,Set_function_8bit_2line);_delay_ms(500);
	// lcd_command_executer(lcd1,Clear_Display);_delay_ms(500);
	// lcd_command_executer(lcd1,Return_home);_delay_ms(500);
	// lcd_command_executer(z,Entry_mode_cursorR);_delay_ms(500);
	// lcd_command_executer(lcd1,Display_on_showcursor_Blink);_delay_ms(500);
	// lcd_command_executer(lcd1,Display_shiftR);_delay_ms(500);
	// lcd_command_executer(z,Display_on_hidecursor_noBlink);_delay_ms(500);
	// lcd_command_executer(lcd1,Display_shiftR);
	lcd_initialize(lcd1);
	//unsigned char x[]=;
		
	//lcd_write(lcd1,'w');_delay_ms(200);
	//lcd_write(lcd1,'n');_delay_ms(200);
	//lcd_write(lcd1,'a');_delay_ms(2);
	//lcd_write(lcd1,'d');_delay_ms(2);
	//lcd_write(lcd1,'e');_delay_ms(2);
	//lcd_write(lcd1,'r');_delay_ms(2);
	lcd_write_string(lcd1,"Welecome to MR. Nader Hany Ahmed");
	
    while (1) 
    {
		lcd_command_executer(lcd1,Display_shiftl);
		lcd_command_executer(lcd1,Display_on_showcursor_noBlink);
		_delay_ms(500);
    }
	
}

