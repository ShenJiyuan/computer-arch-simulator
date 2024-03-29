`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:14:14 03/06/2014 
// Design Name: 
// Module Name:    data_memory 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module data_memory(
    input clock_in,
	 input [31:0] writeData,
	 input [31:0]address,
	 input memRead,
	 input memWrite,
	 output reg[31:0] readData
    );
	 
	 reg [31:0] memFile[0:127];
	 
always @(address or readData or memRead or memFile)
begin
	if(memRead==1)
		readData=memFile[address];
end
	 
always @(negedge clock_in)
begin
	if(memWrite==1)
		memFile[address]=writeData;
end


endmodule
