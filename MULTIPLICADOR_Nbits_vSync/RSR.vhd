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
		sh         : in std_logic;
		factor_out	: out std_logic_vector(nbits-1 downto 0)
		);
end RSR;

architecture dataflow of RSR is

	signal num: std_logic_vector (factor_out'range);
	signal last_load: std_logic;
	signal last_sh: std_logic;

begin
		
process(clk)
	begin
		if clk'event and clk = '0' then
		  if load = '0' then
		    num <= (others => '0');
		  elsif load = '1' then
		    if last_load = '0' then	
			   num <= factor_in ;
		    elsif sh /= last_sh and sh = '1' then
			   num <= '0' & num(nbits-1 DOWNTO 1);
			 end if;
		  end if;
		  last_sh <= sh;
		  last_load <= load;
		end if;

			END PROCESS;
--PROCESS(load, sh)
--			BEGIN
--				
--				IF (load='0') THEN 
--								num<=(OTHERS=>'0');
--				ELSIF (load='1' and load'event) THEN 
--								num<=factor_in;
--				ELSIF (sh='1' and sh'event) THEN
--								num <= '0' & num(nbits-1 DOWNTO 1);
--							
--							END IF;
--			END PROCESS;
			
	factor_out <= num;
	--factor_out <= num WHEN load = '1' ELSE (others => '0');
	
end dataflow;

