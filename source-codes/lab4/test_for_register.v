`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   08:45:36 03/06/2014
// Design Name:   register
// Module Name:   E:/codsjtu_design/genesys/lab4/test_for_register.v
// Project Name:  lab4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: register
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_for_register;

	// Inputs
	reg clock_in;
	reg [25:21] readReg1;
	reg [20:16] readReg2;
	reg [4:0] writeReg;
	reg [31:0] writeData;
	reg regWrite;

	// Outputs
	wire [31:0] readData1;
	wire [31:0] readData2;

	// Instantiate the Unit Under Test (UUT)
	register uut (
		.clock_in(clock_in), 
		.readReg1(readReg1), 
		.readReg2(readReg2), 
		.writeReg(writeReg), 
		.writeData(writeData), 
		.regWrite(regWrite), 
		.readData1(readData1), 
		.readData2(readData2)
	);

	initial begin
		// Initialize Inputs
		clock_in = 0;
		readReg1 = 0;
		readReg2 = 0;
		writeReg = 0;
		writeData = 0;
		regWrite = 0;

		// Wait 100 ns for global reset to finish
		#180;
		regWrite = 1'b1;
		writeReg = 5'b10101;
		writeData = 32'b11111111111111110000000000000000;
		readReg1 = 5'b00000;
		readReg2 = 5'b00000;
		
		#200;
		regWrite = 1'b1;
		writeReg = 5'b01010;
		writeData = 32'b00000000000000001111111111111111;
		readReg1 = 5'b00000;
		readReg2 = 5'b00000;
		
		#200;
		regWrite = 1'b0;
		writeReg = 5'b00000;
		writeData = 32'b00000000000000000000000000000000;
		readReg1 = 5'b00000;
		readReg2 = 5'b00000;
		
		#200;
		readReg1 = 5'b10101;
		readReg2 = 5'b01010;
		// Add stimulus here

	end
	always 
		begin
		    #100;
			 clock_in = ~clock_in;
		end;
      
endmodule

