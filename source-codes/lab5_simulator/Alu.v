`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:20:22 03/05/2015 
// Design Name: 
// Module Name:    Alu 
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
module Alu(
    input reset,
    input [31:0] input1,
    input [31:0] input2,
    input [3:0] aluCtr,
    output reg zero,
    output reg [31:0] aluRes
    );
	 
	 //reg zero;
	 //reg [31:0] aluRes;

	 always @ (input1 or input2 or aluCtr or reset)
	 begin
		if(reset)
		begin
		zero=0;
		aluRes=0;
		end
		else
	 case (aluCtr)
			4'b0000:
			begin
				aluRes=input1 & input2;
				zero=0;
			end
			
			4'b0001:
			begin
				aluRes=input1 | input2;
				zero=0;
			end
			
			4'b0010:
			begin
				aluRes=input1+input2;
				zero=0;
			end
			
			4'b0110:
			begin
				aluRes=input1-input2;
				if (aluRes==0)
					zero=1;
				else
					zero=0;
			end
			
			4'b0111:
			begin
				if (input1<input2)
					aluRes=1;
				else
					aluRes=0;
				zero=0;
			end
			
			4'b1100:
			begin
				aluRes=~(input1 | input2);
				zero=0;
			end
		endcase
	end
endmodule
