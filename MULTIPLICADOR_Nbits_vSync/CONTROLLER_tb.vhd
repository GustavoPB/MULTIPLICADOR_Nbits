--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   15:11:03 01/12/2014
-- Design Name:   
-- Module Name:   C:/Users/wortenmajadahonda/Documents/GitHub/MULTIPLICADOR_Nbits/MULTIPLICADOR_Nbits/CONTROLLER_tb.vhd
-- Project Name:  MULTIPLICADOR_Nbits
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: CONTROLLER
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
 
ENTITY CONTROLLER_tb IS
END CONTROLLER_tb;
 
ARCHITECTURE behavior OF CONTROLLER_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT CONTROLLER
    PORT(
         init : IN  std_logic;
         z : IN  std_logic;
         lsb : IN  std_logic;
         clk : IN  std_logic;
			reset_n: IN std_logic;
         sh : OUT  std_logic;
         done_n : OUT  std_logic;
         restart_n : OUT  std_logic;
         add : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal init : std_logic := '0';
   signal z : std_logic := '0';
   signal lsb : std_logic := '0';
   signal clk : std_logic := '0';
	signal restart_n: std_logic :='0';

 	--Outputs
   signal sh : std_logic;
   signal done_n : std_logic;
   signal reset_n : std_logic;
   signal add : std_logic;

 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: CONTROLLER PORT MAP (
          init => init,
          z => z,
          lsb => lsb,
          clk => clk,
          sh => sh,
          done_n => done_n,
			 restart_n => restart_n,
          reset_n => reset_n,
          add => add
        );

process
begin
	reset_n<='0';
	wait for 5 ns;
	assert done_n ='1' and sh='0' and restart_n='0' and add='0'
	report "reset_n MALFUNCTION"
	severity failure;
	
	reset_n<='1';
	init<='1';
	wait for 5 ns;
	clk<='1';
	wait for 5 ns;

	
	assert done_n ='1' and sh='0' and restart_n='1' and add='0'
	report "failure in state CHECK"
	severity failure;
	clk<='0';
	wait for 5 ns;

	wait for 5 ns;
	lsb<='1';
	wait for 5 ns;
	clk<='1';
	wait for 5 ns;

	
	assert done_n ='1' and restart_n='1' and add='1'
	report "failure in state RUN1"
	severity failure;
	clk<='0';
	wait for 5 ns;
	
	clk<='1';
	wait for 5 ns;
	clk<='0';
	wait for 5 ns;
	
	assert done_n ='1' and sh='1' and restart_n='1' and add='0'
	report "failure in state ADDING"
	severity failure;
	wait for 5 ns;
	
	clk<='1';
	wait for 5 ns;
	clk<='0';
	
	assert done_n ='1' and sh='0' and restart_n='1' and add='0'
	report "failure in state CHECK-return_from_RUN1"
	severity failure;
	wait for 5 ns;
	
	lsb<='0';
	wait for 5 ns;
	clk<='1';
	wait for 5 ns;
	
	assert done_n ='1' and sh='1' and restart_n='1' and add='0'
	report "failure in state RUN0"
	severity failure;
	clk<='0';
	wait for 5 ns;
	
	clk<='1';
	wait for 5 ns;
	clk<='0';
	wait for 5 ns;
	
	assert done_n ='1' and sh='0' and restart_n='1' and add='0'
	report "failure in state CHECK-return_from_RUN0"
	severity failure;
	wait for 5 ns;
	
	z<='1';
	wait for 5 ns;
	clk<='1';
	wait for 5 ns;
	
	assert done_n ='0' and sh='0' and restart_n='1' and add='0'
	report "failure in state FINISH"
	severity failure;
	clk<='0';
	wait for 5 ns;
	
	clk<='1';
	wait for 5 ns;
	clk<='0';
	
	init<='0';
	wait for 5 ns;
	clk<='1';
	wait for 5 ns;
	
	
	assert done_n ='1' and sh='0' and restart_n='0' and add='0'
	report "failure in state REST"
	severity failure;
	clk<='0';
	wait for 10 ns;
	
	assert false
	report "Test OK"
	severity failure;

end process;

END;
