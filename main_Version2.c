#define F_CPU 1200000UL

#include <tiny13a.h>
#include <delay.h>

int main(void)
{
    // PB0 و PB1 خروجی باشند
    DDRB |= (1 << PB0) | (1 << PB1);

    while (1)
    {
        PORTB = (1 << PB0);  // چراغ اول روشن، دومی خاموش
        delay_ms(500);

        PORTB = (1 << PB1);  // چراغ دوم روشن، اولی خاموش
        delay_ms(500);
    }
}