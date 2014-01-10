--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   02:06:19 01/10/2014
-- Design Name:   
-- Module Name:   C:/Users/Guss/Documents/GitHub/MULTIPLICADOR_Nbits/MULTIPLICADOR_Nbits/ACC_tb.vhd
-- Project Name:  MULTIPLICADOR_Nbits
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: ACC
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
 
ENTITY ACC_tb IS
END ACC_tb;
 
ARCHITECTURE behavior OF ACC_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT ACC
	 GENERIC(
				nbits: positive
				);
    PORT(
         sumando : IN  std_logic_vector(2*nbits-1 DOWNTO 0);
         reset_n : IN  std_logic;
         add : IN  std_logic;
			clk : IN  std_logic;
         suma : OUT  std_logic_vector(2*nbits-1 DOWNTO 0)
        );
    END COMPONENT;
    
	--signal nbits: positive;
   --Inputs
   signal sumando : std_logic_vector(3 DOWNTO 0) := (others => '0');
   signal reset_n : std_logic := '0';
   signal add : std_logic := '0';
   signal clk : std_logic := '0';
 	--Outputs
   signal suma : std_logic_vector(3 DOWNTO 0);
  
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: ACC 
			GENERIC MAP(
				nbits=>2
				)
			PORT MAP (
          sumando => sumando,
          reset_n => reset_n,
          add => add,
			 clk=>clk,
          suma => suma
        );
	
	clk <= not clk after 5 ns;
 

   -- Stimulus process
   stim_proc: process
   begin	
			reset_n <= '0';
			
			wait for 20 ns;
			ASSERT suma="0000"
			REPORT "Error en el reset_n"
			SEVERITY failure;
			wait for 20 ns;
			
			reset_n<='1';
			sumando<="0101";
			
			wait for 20 ns;
			ASSERT suma="0000"
			REPORT "Suma no espera a add"
			SEVERITY failure;
			wait for 20 ns;
			
			add<='1';
			wait for 10 ns;
			add<='0';
			
			wait for 20 ns;
			ASSERT suma= "0101"
			REPORT "No suma correctamente despues de reset"
			SEVERITY failure;
			wait for 20 ns;
				
			add<='1';
			wait for 10 ns;
			add<='0';
			
			wait for 20 ns;
			ASSERT suma= "1010"
			REPORT "No suma adecuadamente con suma != 0"
			SEVERITY failure;
			wait for 20 ns;
			
			reset_n <= '0';
			
			wait for 20 ns;
			ASSERT suma="0000"
			REPORT "Error en el segundo reset_n"
			SEVERITY failure;
			wait for 20 ns;
			
			ASSERT false;
			REPORT "TEST FINALIZADO CON EXITO"
			SEVERITY failure;			
   
   end process;

END;
