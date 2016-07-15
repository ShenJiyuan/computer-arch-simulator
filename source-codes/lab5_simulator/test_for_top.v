`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:06:30 03/15/2015
// Design Name:   top
// Module Name:   D:/xilinx/lab5/test_for_top.v
// Project Name:  lab5
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: top
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_for_top;

	// Inputs
	reg mainClock;
	reg reset;
	reg [3:0] switch;

	// Outputs
	wire [7:0] LED;

	// Instantiate the Unit Under Test (UUT)
	top uut (
		.mainClock(mainClock), 
		.switch(switch), 
		.LED(LED),
		.reset(reset)
	);
	always #(1000) mainClock = ~mainClock;
	initial begin
		// Initialize Inputs
		mainClock = 0;
		switch = 0;
		reset = 0;

		// Wait 100 ns for global reset to finish
		#1000;
        
		// Add stimulus here
		//	#100 reset = 1;
		// #100 reset =0;
	end
      
endmodule

