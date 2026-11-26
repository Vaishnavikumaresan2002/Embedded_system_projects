#include <reg51.h>

sbit RD_ADC = P2^5;
sbit WR_ADC = P2^6;
sbit INTR_ADC = P2^7;

sbit STREET_LIGHT = P2^0;

#define DARK_THRESHOLD 80
#define BRIGHT_THRESHOLD 120

void delay_ms(unsigned int ms)
{
unsigned int i, j;

for(i = 0; i < ms; i++)
{
    for(j = 0; j < 1275; j++);
}

}

unsigned char read_adc()
{
unsigned char adc_value;
unsigned int timeout;

WR_ADC = 0;
delay_ms(1);
WR_ADC = 1;

timeout = 0;

while(INTR_ADC == 1)
{
    timeout++;

    if(timeout > 5000)
    {
        return 255;
    }
}

RD_ADC = 0;
adc_value = P1;
RD_ADC = 1;

return adc_value;

}

void main()
{
unsigned char light_level;
bit light_state = 0;

P1 = 0xFF;

RD_ADC = 1;
WR_ADC = 1;
INTR_ADC = 1;

STREET_LIGHT = 0;

while(1)
{
    light_level = read_adc();

    if(light_level < DARK_THRESHOLD)
    {
        light_state = 1;
    }
    else if(light_level > BRIGHT_THRESHOLD)
    {
        light_state = 0;
    }

    STREET_LIGHT = light_state;

    delay_ms(200);
}

}
