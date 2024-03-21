// @File		MAIN.C		 		
// @Author		JOSIMAR PEREIRA LEITE
// @country		BRAZIL
// @Date		17/03/24
//
//
// Copyright (C) 2024 JOSIMAR PEREIRA LEITE
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
#include "utils.h"
#include "wire.h"
#include "mcp23008.h"

void main(void)
{
    __delay_ms(500);   
    
    Pic18f2520_init();
    
    Wire_Init();            

    // ALL PINS CONFIGURED AS OUTPUT
    MCP23008_write(MCP23008_IODIR, 0x00);
    
    // DATA
    MCP23008_write(MCP23008_GPIO, 0xFF);
    
    while(1);
    
    return;
}
