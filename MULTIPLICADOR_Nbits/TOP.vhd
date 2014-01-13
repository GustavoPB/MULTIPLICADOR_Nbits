----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:11:28 01/13/2014 
-- Design Name: 
-- Module Name:    TOP - Estructural 
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

entity TOP is
	GENERIC(
				NBITS: positive:=4
				);
	PORT(
			START, RESET_N, CLK: IN std_logic;
			A, B: IN std_logic_vector(NBITS-1 DOWNTO 0);
			DONE_N: OUT std_logic;
			RESULT: OUT std_logic_vector(2*NBITS-1 DOWNTO 0)
			);
end TOP;

architecture Estructural of TOP is

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
	 
	COMPONENT SINGLE_ADAPT_C2
		GENERIC (nbits: positive);
		PORT(
				num : IN  std_logic_vector(nbits-1 downto 0);
				revert: IN std_logic;
				num_c2 : OUT  std_logic_vector(nbits-1 downto 0)
				);
    END COMPONENT;
		 
	COMPONENT LSR
		GENERIC (nbits: positive);
		PORT(
				factor_in : IN  std_logic_vector(nbits-1 downto 0);
				load : IN  std_logic;
				clk : IN std_logic;
				factor_out : OUT  std_logic_vector(2*nbits-1 downto 0)
				);
    END COMPONENT;
	 
	COMPONENT RSR
		GENERIC(
					nbits: positive
					);
		PORT(
				factor_in : IN  std_logic_vector(nbits-1 DOWNTO 0);
				load : IN  std_logic;
				clk : IN  std_logic;
				factor_out : OUT  std_logic_vector(nbits-1 DOWNTO 0)
				);
		END COMPONENT;
	 
	COMPONENT COMPARATOR
		GENERIC(
					nbits: positive
					);
		PORT(
				num : IN  std_logic_vector(nbits-1 DOWNTO 0);
				z : OUT  std_logic;
				lsb : OUT  std_logic
				);
    END COMPONENT;
	 
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
	 -- SE AÑADEN LAS SEÑALES DE INTERCONEXION
	 signal z_i: std_logic:='0';
	 signal lsb_i: std_logic;
	 signal sh_i: std_logic;
	 signal restart_i:std_logic;
	 signal add_i:std_logic;
	 signal a_c2i: std_logic_vector (NBITS-1 DOWNTO 0);--(A'range);
	 signal b_c2i: std_logic_vector (NBITS-1 DOWNTO 0);--(B'range);
	 signal suma_i: std_logic_vector (2*NBITS-1 DOWNTO 0);--(RESULT'range);
	 signal lsr_out: std_logic_vector (2*NBITS-1 DOWNTO 0);--(RESULT'range);
	 signal rsr_out: std_logic_vector (NBITS-1 DOWNTO 0);--(B'range);
	 signal revert_i: std_logic;
	 
begin

	CPU: CONTROLLER 
		PORT MAP(
				init=> START,
				z => z_i,
				lsb => lsb_i,
				clk => CLK,
				reset_n => RESET_N,
				sh => sh_i,
				done_n => DONE_N,
				restart_n => restart_i,
				add => add_i
				);
				
	ADAPT_LSR: SINGLE_ADAPT_C2
		GENERIC MAP (nbits => NBITS
						)
		PORT MAP(
				num => A,
				revert=> '0',
				num_c2 => a_c2i
				);
	
	ADAPT_RSR: SINGLE_ADAPT_C2
		GENERIC MAP (nbits => NBITS
						)
		PORT MAP(
				num => B,
				revert=> '0',
				num_c2 => b_c2i
				);
	
	ADAPT_RESULT: SINGLE_ADAPT_C2
		GENERIC MAP (nbits => 2*NBITS
						)
		PORT MAP(
				num => suma_i,
				revert=> revert_i,
				num_c2 => RESULT
				);
	
	MULTIPLICANT_LSR: LSR
		GENERIC MAP(nbits => NBITS
					)
		PORT MAP(
				factor_in  => a_c2i,
				load  => restart_i,
				clk  => sh_i,
				factor_out  => lsr_out
				);
    
	 
	 MULTIPLICATOR_RSR: RSR
		GENERIC MAP(nbits => NBITS
					)
		PORT MAP(
				factor_in  => b_c2i,
				load  => restart_i,
				clk  => sh_i,
				factor_out  => rsr_out
				);
	
	COMP: COMPARATOR
		GENERIC MAP(
					nbits => NBITS
					)
		PORT MAP(
				num => rsr_out,
				z => z_i,
				lsb => lsb_i
				);
				
	ACUMULATOR: ACC
		GENERIC MAP(
					nbits => NBITS
					)
		PORT MAP(
				sumando => lsr_out,
				reset_n => restart_i,
				add => add_i,
				clk => CLK,
				suma => suma_i
				);
				
	revert_i<='1' WHEN (A(NBITS-1) xor B(NBITS-1))='1' ELSE '0';

end Estructural;

