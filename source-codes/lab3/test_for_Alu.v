`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:47:36 02/27/2014
// Design Name:   Alu
// Module Name:   E:/codsjtu_design/genesys/lab3/test_for_Alu.v
// Project Name:  lab3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Alu
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_for_Alu;

	// Inputs
	reg [31:0] input1;
	reg [31:0] input2;
	reg [3:0] aluCtr;

	// Outputs
	wire zero;
	wire [31:0] aluRes;

	// Instantiate the Unit Under Test (UUT)
	Alu uut (
		.input1(input1), 
		.input2(input2), 
		.aluCtr(aluCtr), 
		.zero(zero), 
		.aluRes(aluRes)
	);

	initial begin
		// Initialize Inputs
		input1 = 0;
		input2 = 0;
		aluCtr = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		#100 aluCtr = 4'b0000; input1 = 255; input2 = 170;
		#100 aluCtr = 4'b0001; input1 = 255; input2 = 170;
		#100 aluCtr = 4'b0010; input1 = 1; input2 = 1;
		#100 aluCtr = 4'b0110; input1 = 255; input2 = 170;
		#100 aluCtr = 4'b0110; input1 = 1; input2 = 1;
		#100 aluCtr = 4'b0111; input1 = 255; input2 = 170;
		#100 aluCtr = 4'b0111; input1 = 170; input2 = 255;
		#100 aluCtr = 4'b1100; input1 = 0; input2 = 1;

	end
      
endmodule

