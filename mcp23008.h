// @File		MCP23008.H		 		
// @Author		JOSIMAR PEREIRA LEITE
// @country		BRAZIL
// @Date		20/03/24
//
//
// Copyright (C) 2024 JOSIMAR PEREIRA LEITE
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
#ifndef MCP23008_H
#define MCP23008_H

#define MCP23008_SLA_W 0x40
#define MCP23008_SLA_R 0x41

#define MCP23008_IODIR 0x00
#define MCP23008_IPOL 0x01
#define MCP23008_GPINTEN 0x02
#define MCP23008_DEFVAL 0x03
#define MCP23008_INTCON 0x04
#define MCP23008_IOCON 0x05
#define MCP23008_GPPU 0x06
#define MCP23008_INTF 0x07
#define MCP23008_INTCAP 0x08
#define MCP23008_GPIO 0x09
#define MCP23008_OLAT 0x0A

void MCP23008_write(unsigned char address, unsigned char data)
{
    Wire_Start();
    Wire_Write(MCP23008_SLA_W);
    Wire_Write(address);
    Wire_Write(data);
    Wire_Stop();
}


#endif
