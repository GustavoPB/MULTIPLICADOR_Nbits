--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   02:26:35 01/10/2014
-- Design Name:   
-- Module Name:   C:/Users/wortenmajadahonda/Documents/UPM/SED Sist Electronicos Digitales/MULTIPLICADOR_Nbits/LSR_tb.vhd
-- Project Name:  MULTIPLICADOR_Nbits
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: LSR
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY LSR_tb IS
END LSR_tb;
 
ARCHITECTURE behavior OF LSR_tb IS 

    COMPONENT LSR
	 GENERIC (nbits: positive);
    PORT(
         factor_in : IN  std_logic_vector(3 downto 0);
         load : IN  std_logic;
			clk : IN std_logic;
         factor_out : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal factor_in : std_logic_vector(3 downto 0) := (others => '0');
   signal load : std_logic := '0';
	signal clk : std_logic:='0';

 	--Outputs
   signal factor_out : std_logic_vector(7 downto 0):= (others=>'0');
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: LSR 
	GENERIC MAP (nbits => 4)
	PORT MAP (
          factor_in => factor_in,
          load => load,
			 clk=>clk,
          factor_out => factor_out
        );
	
   process
   begin
	
		factor_in <= "1001";
		wait for 10 ns;
		
		load <= '1';
		wait for 20 ns;		
		
		assert factor_out="00001001"
		report"Mala propagacion de la entrada"
		severity failure;
		wait for 20 ns;
		
		clk <= '1';
		wait for 20 ns;
		clk <= '0';
		
		assert factor_out="00010010"
		report "LSR failure"
		severity failure;
		
		wait for 20 ns;
		
		assert false
		report "Test correct"
		severity failure;
	
	end process;
END ARCHITECTURE;
