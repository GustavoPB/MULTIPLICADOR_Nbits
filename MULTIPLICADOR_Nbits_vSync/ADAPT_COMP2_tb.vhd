--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   20:34:34 01/12/2014
-- Design Name:   
-- Module Name:   C:/Users/Guss/Desktop/TRABAJO SED/MULTIPLICADOR_Nbits/ADAPT_COMP2_tb.vhd
-- Project Name:  MULTIPLICADOR_Nbits
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: ADAPT_COMP2
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
 
ENTITY ADAPT_COMP2_tb IS
END ADAPT_COMP2_tb;
 
ARCHITECTURE behavior OF ADAPT_COMP2_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT ADAPT_COMP2
    PORT(
         a : IN  std_logic_vector(-1 to 0);
         b : IN  std_logic_vector(-1 to 0);
         result : IN  std_logic_vector(-1 to 0);
         done : IN  std_logic;
         init : IN  std_logic;
         a_s : OUT  std_logic_vector(-1 to 0);
         b_s : OUT  std_logic_vector(-1 to 0);
         result_s : OUT  std_logic_vector(-1 to 0)
        );
    END COMPONENT;
    

   --Inputs
   signal a : std_logic_vector(-1 to 0) := (others => '0');
   signal b : std_logic_vector(-1 to 0) := (others => '0');
   signal result : std_logic_vector(-1 to 0) := (others => '0');
   signal done : std_logic := '0';
   signal init : std_logic := '0';

 	--Outputs
   signal a_s : std_logic_vector(-1 to 0);
   signal b_s : std_logic_vector(-1 to 0);
   signal result_s : std_logic_vector(-1 to 0);

 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: ADAPT_COMP2 PORT MAP (
          a => a,
          b => b,
          result => result,
          done => done,
          init => init,
          a_s => a_s,
          b_s => b_s,
          result_s => result_s
        );

process
begin

end process;

END;
