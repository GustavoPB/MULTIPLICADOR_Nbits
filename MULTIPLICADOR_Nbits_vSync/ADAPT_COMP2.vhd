----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    18:10:58 01/12/2014 
-- Design Name: 
-- Module Name:    ADAPT_COMP2 - Behavioral 
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

entity ADAPT_COMP2 is
	GENERIC(
				nbits: positive
				);
	PORT(
			a, b: IN std_logic_vector(nbits-1 DOWNTO 0);
			result: IN std_logic_vector(2*nbits-1 DOWNTO 0);
			done: IN std_logic;
			init: in std_logic;
			a_s, b_s: OUT std_logic_vector(nbits-1 DOWNTO 0);
			result_s: OUT std_logic_vector(2*nbits-1 DOWNTO 0)
			);
end ADAPT_COMP2;

architecture Behavioral of ADAPT_COMP2 is
	signal a_i: std_logic_vector (a'range);
	signal b_i: std_logic_vector (b'range);
	signal result_i: std_logic_vector (result'range);
	signal aux1: std_logic_vector(nbits-1 downto 0):=(others=>'0');
	signal aux2: std_logic_vector(2*nbits-1 downto 0):=(others=>'0');
	
	begin
	
	
	PROCESS(init, done)
		BEGIN
		IF(init'event and init='1') THEN
	
		IF (a(nbits-1)='1') THEN
			FOR i IN nbits-1 DOWNTO 0 LOOP
				a_i(i) <= not a(i);
			END LOOP;
		a_i<=a_i + aux1;
		END IF;
		
		IF (b(nbits-1)='1') THEN
			FOR j IN nbits-1 DOWNTO 0 LOOP
				b_i(j) <= not b(j);
			END LOOP;
		b_i<=b_i + aux1;
		END IF;
			
		
		ELSIF(done='0' and done'event) THEN
			IF (a(nbits-1)='1' and b(nbits-1)='0') or (a(nbits-1)='0' and b(nbits-1)='1') THEN
			FOR k IN 2*nbits-1 DOWNTO 0 LOOP
				result_i(k) <= not result(k);
			END LOOP;	 
		result_i<=result_i + aux2;
		
			END IF;
			 END IF;
			  
		
		
	END PROCESS;
	
	a_s <= a_i WHEN a(nbits-1)='1' else a;
	b_s <= b_i WHEN b(nbits-1)='1' else b;
	result_s <= result_i WHEN done = '0' ELSE (OTHERS=>'0');
	aux1(0)<='1';
	aux2(0)<='1';
	
		


end Behavioral;

