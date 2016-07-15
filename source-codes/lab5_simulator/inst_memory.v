`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:13:43 03/07/2015 
// Design Name: 
// Module Name:    inst_memory 
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
module inst_memory(
	 input clock_in,
	 input reset,
    input [31:0] addr,
    output reg [31:0] inst
    );

	 reg [31:0] INSTMemFile [0:15];
	 initial 
	 begin
			INSTMemFile[0] = 32'b00001000000000000000000000000100; // j a
			INSTMemFile[1] = 32'b00000000000000000000000000000000; 
			INSTMemFile[2] = 32'b00000000000000000000000000000000; 
			INSTMemFile[3] = 32'b00000000000000000000000000000000; 
			INSTMemFile[4] = 32'b101011_00000_00100_00000_00000_000000; // sw $4 0($0)
			INSTMemFile[5] = 32'b101011_00000_00011_00000_00000_000100; // sw $3 4($0)
			INSTMemFile[6] = 32'b100011_00000_00001_00000_00000_000100; // lw $1 4($0)
			INSTMemFile[7] = 32'b100011_00000_00010_00000_00000_000000; // lw $2 0($0)
			INSTMemFile[8] = 32'b00000000001000100001100000100000; // add $3,$1,$2
			INSTMemFile[9] = 32'b00000000001000100010000000100010; // sub $4,$1,$2
			//INSTMemFile[6] = 32'b00000000000000000000000000000000; 
			//INSTMemFile[7] = 32'b00000000000000000000000000000000; 
			//INSTMemFile[8] = 32'b00000000000000000000000000000000; 
			//INSTMemFile[9] = 32'b00000000000000000000000000000000; 
			INSTMemFile[10] = 32'b00001000000000000000000000000100; // j a
			INSTMemFile[11] = 32'b00000000000000000000000000000000; 
			INSTMemFile[12] = 32'b00000000000000000000000000000000; 
			INSTMemFile[13] = 32'b00000000000000000000000000000000; 
			INSTMemFile[14] = 32'b00000000000000000000000000000000; 
			INSTMemFile[15] = 32'b00000000000000000000000000000000; 
	 end
	 //always @ (negedge clock_in)
	 always @ (addr or reset)
	 begin
		if(reset)
			inst =0;
		else
			inst = INSTMemFile[addr>>2];
	 end

endmodule
