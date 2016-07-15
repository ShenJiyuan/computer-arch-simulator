`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:36:36 03/14/2015 
// Design Name: 
// Module Name:    signext 
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
module signext(inst,data,reset);
    input [15:0] inst;
	 input reset;
    output [31:0] data;
	 
	 reg [31:0] data;
    always @ (inst or reset)
	 begin
		if(reset)
			data=0;
		else if(inst<16'b1000000000000000)
			assign data=inst+32'b00000000000000000000000000000000;
		else
			assign data=inst+32'b11111111111111110000000000000000;
	 end
endmodule
	