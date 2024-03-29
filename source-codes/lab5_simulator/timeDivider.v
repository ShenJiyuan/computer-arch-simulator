`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:12:40 03/15/2015 
// Design Name: 
// Module Name:    timeDivider 
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
module timeDivider(
    input clockIn,
    output reg clockOut
    );
	
	reg [4:0] buffer;////
	initial begin
	buffer = 0;
	clockOut = 0;/////
	end
	always @ (posedge clockIn)
	begin
		buffer <= buffer + 1;
		clockOut <= buffer[4];
	end

endmodule
