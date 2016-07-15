`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:24:36 02/27/2014
// Design Name:   AluCtr
// Module Name:   E:/codsjtu_design/genesys/lab3/test_for_AluCtr.v
// Project Name:  lab3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: AluCtr
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_for_AluCtr;

	// Inputs
	reg [1:0] aluOp;
	reg [5:0] funct;

	// Outputs
	wire [3:0] aluCtr;

	// Instantiate the Unit Under Test (UUT)
	AluCtr uut (
		.aluOp(aluOp), 
		.funct(funct), 
		.aluCtr(aluCtr)
	);

	initial begin
		// Initialize Inputs
		aluOp = 0;
		funct = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		#100 aluOp = 2'b00;
		#100 aluOp = 2'b01;
		#100 aluOp = 2'b10;funct = 6'b100000;
		#100 aluOp = 2'b10;funct = 6'b100010;
		#100 aluOp = 2'b10;funct = 6'b100100;
		#100 aluOp = 2'b10;funct = 6'b100101;
		#100 aluOp = 2'b10;funct = 6'b101010;

	end
      
endmodule

