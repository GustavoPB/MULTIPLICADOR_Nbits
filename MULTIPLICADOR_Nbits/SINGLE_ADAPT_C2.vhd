----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    20:05:48 01/12/2014 
-- Design Name: 
-- Module Name:    SINGLE_ADAPT_C2 - Dataflow 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
USE IEEE.STD_LOGIC_ARITH.ALL;
USE IEEE.STD_LOGIC_UNSIGNED.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity SINGLE_ADAPT_C2 is
	GENERIC(
				nbits:positive
				);
	PORT(
			num: IN std_logic_vector (nbits-1 DOWNTO 0);
			num_c2: OUT std_logic_vector(nbits-1 DOWNTO 0)
			);
end SINGLE_ADAPT_C2;

architecture Behavioral of SINGLE_ADAPT_C2 is
	
	signal num_i: std_logic_vector(num'range);
	
begin
		num_i<=not num;
		num_c2<= num_i+1 when num(nbits-1)='1' ELSE num;
		
end Behavioral;

