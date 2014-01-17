----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    20:39:12 12/27/2013 
-- Design Name: 
-- Module Name:    latch_D - Dataflow 
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

entity latch_D is
PORT(
		d:in std_logic;
		clk: in std_logic;
		enable: in std_logic;
		q: out std_logic
		);
		
end latch_D;

architecture Behavioral of latch_D is
signal q_i: std_logic;
	
begin

	PROCESS(clk, enable)
		BEGIN
	IF(enable='1') THEN q_i<=q_i;
	ELSIF(clk = '1' and clk'event) THEN q_i<=d;
		END IF;
	
	END PROCESS;
	q<=q_i;

end architecture Behavioral;

