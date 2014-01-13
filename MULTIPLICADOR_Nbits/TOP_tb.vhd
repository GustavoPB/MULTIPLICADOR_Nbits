--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   20:06:13 01/13/2014
-- Design Name:   
-- Module Name:   C:/Users/Guss/Desktop/TRABAJO SED/MULTIPLICADOR_Nbits/TOP_tb.vhd
-- Project Name:  MULTIPLICADOR_Nbits
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: TOP
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
 
ENTITY TOP_tb IS
END TOP_tb;
 
ARCHITECTURE behavior OF TOP_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT TOP
	 GENERIC( NBITS: positive
				);
    PORT(
         START : IN  std_logic;
         RESET_N : IN  std_logic;
         CLK : IN  std_logic;
         A : IN  std_logic_vector(3 DOWNTO 0);
         B : IN  std_logic_vector(3 DOWNTO 0);
         DONE_N : OUT  std_logic;
         RESULT : OUT  std_logic_vector(7 DOWNTO 0)
        );
    END COMPONENT;
    

   --Inputs
   signal START : std_logic := '0';
   signal RESET_N : std_logic := '0';
   signal CLK : std_logic := '0';
   signal A : std_logic_vector(3 DOWNTO 0) := (others => '0');
   signal B : std_logic_vector(3 DOWNTO 0) := (others => '0');

 	--Outputs
   signal DONE_N : std_logic;
   signal RESULT : std_logic_vector(7 DOWNTO 0);

   -- Clock period definitions
   constant CLK_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: TOP 
	GENERIC MAP(
					NBITS=> 4
					)
	PORT MAP (
          START => START,
          RESET_N => RESET_N,
          CLK => CLK,
          A => A,
          B => B,
          DONE_N => DONE_N,
          RESULT => RESULT
        );

   -- Clock process definitions
   CLK_process :process
   begin
		CLK <= '0';
		wait for CLK_period/2;
		CLK <= '1';
		wait for CLK_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
		
		A<="0001";
		B<="0101";
		START<='0';
		wait for CLK_period;
		RESET_N<='0';
		wait for CLK_period;
		RESET_N<='1';
		START<='1';
		wait for CLK_period*10;
		
		ASSERT DONE_N='0' and RESULT="00000101"
		REPORT "ERROR EN PRODUCTO DE POSITIVOS"
		SEVERITY failure;
		wait for 20 ns;
		
		
		START<='0';
		A<="1011";
		B<="0001";
		START<='0';
		wait for CLK_period;
		RESET_N<='0';
		wait for CLK_period;
		RESET_N<='1';
		START<='1';
		wait for CLK_period*10;
		
		ASSERT DONE_N='0' and RESULT="11111011"
		REPORT "ERROR EN PRODUCTO DE A NEGATIVOVO"
		SEVERITY failure;
		wait for 20 ns;
		
		START<='0';
		A<="0001";
		B<="1011";
		START<='0';
		wait for CLK_period;
		RESET_N<='0';
		wait for CLK_period;
		RESET_N<='1';
		START<='1';
		wait for CLK_period*10;
		
		ASSERT DONE_N='0' and RESULT="11111011"
		REPORT "ERROR EN PRODUCTO B NEGATIVO"
		SEVERITY failure;
		wait for 20 ns;
		
		START<='0';
		A<="1101";
		B<="1011";
		START<='0';
		wait for CLK_period;
		RESET_N<='0';
		wait for CLK_period;
		RESET_N<='1';
		START<='1';
		wait for CLK_period*10;
		
		ASSERT DONE_N='0' and RESULT="00001111"
		REPORT "ERROR EN PRODUCTO DE 2 NEGATIVOS"
		SEVERITY failure;
		wait for 20 ns;
		
		
		ASSERT false
		REPORT "TEST OK"
		SEVERITY failure;
     

      
   end process;

END;
