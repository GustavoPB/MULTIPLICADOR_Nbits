----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    02:04:33 01/10/2014 
-- Design Name: 
-- Module Name:    LSR - Behavioral 
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

entity LSR is
	generic(nbits: positive);
	port(
		factor_in	: in std_logic_vector(nbits-1 downto 0);
		load			: in std_logic;
		clk         : in std_logic;
		factor_out	: out std_logic_vector(2*nbits-1 downto 0)
		);
end LSR;

architecture dataflow of LSR is
	signal num: std_logic_vector(2*nbits-1 downto 0);
	signal aux: std_logic_vector(nbits-1 downto 0);
begin
	process(clk, load)
	begin

		if load='0' then num<=(others=>'0');
		elsif load='1' and load'event then
			num <= aux & factor_in ;
		elsif(clk='1' and clk'event) then
				num <= num(2*nbits-2 downto 0) & '0';
		end if;
		end process;
		
		aux<=(others=>'0');
		factor_out<=num;
			
end dataflow;

