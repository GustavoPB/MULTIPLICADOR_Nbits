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
				num : IN  std_logic_vector(3 downto 0);
				revert: IN std_logic;
				num_c2 : OUT  std_logic_vector(3 downto 0)
				);
    END COMPONENT;
		 
	COMPONENT LSR
		GENERIC (nbits: positive);
		PORT(
				factor_in : IN  std_logic_vector(3 downto 0);
				load : IN  std_logic;
				clk : IN std_logic;
				factor_out : OUT  std_logic_vector(7 downto 0)
				);
    END COMPONENT;
	 
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
	 
begin

	CPU: CONTROLLER 
		PORT MAP(
				init=> ,
				z => ,
				lsb => ,
				clk => ,
				reset_n => ,
				sh => ,
				done_n => ,
				restart_n => ,
				add => 
				);
				
	ADAPT_LSR: SINGLE_ADAPT_C2
		GENERIC MAP (nbits =>
						)
		PORT MAP(
				num => ,
				revert=> ,
				num_c2 => 
				);
	
	ADAPT_RSR: SINGLE_ADAPT_C2
		GENERIC MAP (nbits =>
						)
		PORT MAP(
				num => ,
				revert=> ,
				num_c2 => 
				);
	
	ADAPT_RESULT: SINGLE_ADAPT_C2
		GENERIC MAP (nbits =>
						)
		PORT MAP(
				num => ,
				revert=> ,
				num_c2 => 
				);
	
	MULTIPLICANT_LSR: LSR
		GENERIC MAP(nbits => 
					)
		PORT MAP(
				factor_in  => ,
				load  => ,
				clk  => ,
				factor_out  => 
				);
    
	 
	 MULTIPLICATOR_RSR: RSR
		GENERIC MAP(nbits => 
					)
		PORT MAP(
				factor_in  => ,
				load  => ,
				clk  => ,
				factor_out  => 
				);
	
	COMP: COMPARATOR
		GENERIC MAP(
					nbits => 
					)
		PORT MAP(
				num => ,
				z => ,
				lsb => 
				);
				
	ACUMULATOR: ACC
		GENERIC(
					nbits => 
					)
		PORT(
				sumando => ,
				reset_n => ,
				add => ,
				clk => ,
				suma => ,
				);

end Estructural;

