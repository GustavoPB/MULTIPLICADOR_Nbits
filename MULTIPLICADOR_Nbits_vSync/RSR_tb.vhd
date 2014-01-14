--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   11:28:58 01/12/2014
-- Design Name:   
-- Module Name:   C:/Users/Guss/Desktop/TRABAJO SED/MULTIPLICADOR_Nbits/RSR_tb.vhd
-- Project Name:  MULTIPLICADOR_Nbits
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: RSR
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
 
ENTITY RSR_tb IS
END RSR_tb;
 
ARCHITECTURE behavior OF RSR_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT RSR
	 GENERIC(
				nbits: positive
				);
    PORT(
         factor_in : IN  std_logic_vector(3 DOWNTO 0);
         load : IN  std_logic;
         clk : IN  std_logic;
         factor_out : OUT  std_logic_vector(3 DOWNTO 0)
        );
    END COMPONENT;
    

   --Inputs
   signal factor_in : std_logic_vector(3 DOWNTO 0) := (others => '0');
   signal load : std_logic := '0';
   signal clk : std_logic := '0';

 	--Outputs
   signal factor_out : std_logic_vector(3 DOWNTO 0);

 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: RSR 
	
		GENERIC MAP (
						nbits => 4
						)
		PORT MAP (
          factor_in => factor_in,
          load => load,
          clk => clk,
          factor_out => factor_out
        );


   -- Stimulus process
   stim_proc: process
   begin		
	
	load <='0';
	factor_in <= "1010";
	wait for 10 ns;
	load <='1';
	wait for 10 ns;
	
	ASSERT factor_out = "1010"
	REPORT "ERROR EN LA PROPAGACION DE LA ENTRADA A LA SALIDA. LOAD ERROR"
	SEVERITY failure;
	wait for 10 ns;
	
	clk <= '1';
	wait for 10 ns;
	clk <= '0';
	wait for 10 ns;
	
	ASSERT factor_out = "0101"
	REPORT "ERROR EN EL PRIMER DESPLAZAMIENTO"
	SEVERITY failure;
	wait for 10 ns;
	
	clk <= '1';
	wait for 10 ns;
	clk <= '0';
	wait for 10 ns;
	
	ASSERT factor_out = "0010"
	REPORT "ERROR EN EL SEGUNDO DESPLAZAMIENTO"
	SEVERITY failure;
	wait for 10 ns;
	
	clk <= '1';
	wait for 10 ns;
	clk <= '0';
	wait for 10 ns;
	
	ASSERT factor_out = "0001"
	REPORT "ERROR EN EL TERCER DESPLAZAMIENTO"
	SEVERITY failure;
	wait for 10 ns;
	
	clk <= '1';
	wait for 10 ns;
	clk <= '0';
	wait for 10 ns;
	
	ASSERT factor_out = "0000"
	REPORT "ERROR EN EL CUARTO DESPLAZAMIENTO"
	SEVERITY failure;
	wait for 20 ns;
	
	ASSERT false
	REPORT "TEST FINALIZADO CON EXITO"
	SEVERITY failure;
	
	

	
   end process;

END;
