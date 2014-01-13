----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    01:13:41 01/10/2014 
-- Design Name: 
-- Module Name:    ACC - dataflow 
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
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity ACC is
	GENERIC(
				nbits: positive
				);
	PORT(
			sumando: IN std_logic_vector ((2*nbits)-1 DOWNTO 0);
			reset_n, add, clk: IN std_logic;
			suma: OUT std_logic_vector ((2*nbits)-1 DOWNTO 0)
			);
			
end ACC;

architecture dataflow of ACC is

	signal suma_i: std_logic_vector (suma'range);

begin

	PROCESS(reset_n, clk)
	
		BEGIN
				
				IF (reset_n='0') THEN 
					suma_i<=(OTHERS=>'0');
				ELSIF (clk='1' and clk'event) THEN
					IF (add='1') THEN
					suma_i <= suma_i + sumando;
						
				END IF;
				END IF;
				
	END PROCESS;
	
	suma <= suma_i;
					
end dataflow;

