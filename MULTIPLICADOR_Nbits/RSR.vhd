----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    11:18:26 01/12/2014 
-- Design Name: 
-- Module Name:    RSR - Dataflow 
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

entity RSR is
	generic(nbits: positive);
	port(
		factor_in	: in std_logic_vector(nbits-1 downto 0);
		load			: in std_logic;
		clk         : in std_logic;
		factor_out	: out std_logic_vector(nbits-1 downto 0)
		);
end RSR;

architecture Dataflow of RSR is

	signal aux: std_logic_vector (factor_out'range);

begin
		
		PROCESS(load, clk)
			BEGIN
				
				IF (load='0') THEN 
								aux<=(OTHERS=>'0');
				ELSIF (load='1' and load'event) THEN 
								aux<=factor_in;
				ELSIF (clk='1' and clk'event) THEN
								aux <= '0' & aux(nbits-1 DOWNTO 1);
							
							END IF;
			END PROCESS;
			
	factor_out <= aux;
	
end Dataflow;

