--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   20:38:25 01/12/2014
-- Design Name:   
-- Module Name:   C:/Users/Guss/Desktop/TRABAJO SED/MULTIPLICADOR_Nbits/SINGLE_ADAPT_C2_tb.vhd
-- Project Name:  MULTIPLICADOR_Nbits
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: SINGLE_ADAPT_C2
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
 
ENTITY SINGLE_ADAPT_C2_tb IS
END SINGLE_ADAPT_C2_tb;
 
ARCHITECTURE behavior OF SINGLE_ADAPT_C2_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT SINGLE_ADAPT_C2
	 GENERIC (nbits: positive);
    PORT(
         num : IN  std_logic_vector(3 downto 0);
			revert: IN std_logic;
         num_c2 : OUT  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal num : std_logic_vector(3 downto 0) := (others => '0');  
	signal revert: std_logic;
 	--Outputs
   signal num_c2 : std_logic_vector(3 downto 0);

 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: SINGLE_ADAPT_C2 
	GENERIC MAP(nbits=> 4)
	PORT MAP (
          num => num,
			 revert => revert,
          num_c2 => num_c2
        );

   -- Stimulus process
   stim_proc: process
   begin	

		num<="1010";
		revert<='0';
		wait for 20 ns;
			
		assert num_c2="0110"
		report "non-revert CONVERSION failure"
		severity failure;
		
		num<="0101";
		wait for 20 ns;
			
		assert num_c2="0101"
		report "non-CONVERSION failure"
		severity failure;
		wait for 10 ns;
		
		revert<='1';
		
		wait for 10 ns;
		assert num_c2="1011"
		report "revert-CONVERSION failure"
		severity failure;
		wait for 10 ns;
		
		assert false
		report "TEST OK"
		severity failure;
		
   end process;

END;
