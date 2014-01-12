--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   10:58:45 01/12/2014
-- Design Name:   
-- Module Name:   C:/Users/Guss/Desktop/TRABAJO SED/MULTIPLICADOR_Nbits/COMPARATOR_tb.vhd
-- Project Name:  MULTIPLICADOR_Nbits
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: COMPARATOR
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
 
ENTITY COMPARATOR_tb IS
END COMPARATOR_tb;
 
ARCHITECTURE behavior OF COMPARATOR_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT COMPARATOR
	 GENERIC(
				nbits: positive
				);
    PORT(
         num : IN  std_logic_vector(3 DOWNTO 0);
         z : OUT  std_logic;
         lsb : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal num : std_logic_vector(3 DOWNTO 0) := (others => '0');

 	--Outputs
   signal z : std_logic;
   signal lsb : std_logic;
   
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: COMPARATOR 
	
	GENERIC MAP( 
					nbits=>4
					)
	PORT MAP (
          num => num,
          z => z,
          lsb => lsb
        );

   -- Stimulus process
   stim_proc: process
   begin		

	num<="1010";
	
	wait for 20 ns;
	
	ASSERT z='0' and lsb='0'
	REPORT "ERROR z='0' and lsb='0'"
	SEVERITY failure;
	wait for 10 ns;
	
	num<="0101";
	
	wait for 20 ns;
	ASSERT z='0' and lsb='1'
	REPORT "ERROR z='0' and lsb='1'"
	SEVERITY failure;
	wait for 10 ns;
	
	num<="0000";
	
	wait for 20 ns;
	ASSERT  z='1' and lsb='0'
	REPORT "ERROR EN SALIDAS CON ENTRADA 0"
	SEVERITY failure;
	wait for 10 ns;
	
	ASSERT false
	REPORT "FIN DE TEST CON EXITO"
	SEVERITY failure;
	

   end process;

END;
