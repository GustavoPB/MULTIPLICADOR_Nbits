----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    10:49:07 01/12/2014 
-- Design Name: 
-- Module Name:    COMPARATOR - Behavioral 
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

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity COMPARATOR is
	GENERIC(
				nbits: positive
				);
	PORT(
			num: IN std_logic_vector(nbits-1 DOWNTO 0);
			z, lsb: OUT std_logic
			);
				
end COMPARATOR;

architecture dataflow of COMPARATOR is

	signal aux: std_logic_vector (num'range);

begin
		
		aux<=(OTHERS=>'0');
		z<= '1' WHEN num=aux ELSE '0';
		lsb<=num(0);

end dataflow;

