----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    13:12:16 01/12/2014 
-- Design Name: 
-- Module Name:    CONTROLLER - Behavioral 
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

entity CONTROLLER is
-- generic(nbits:=positive);
	port(
		init		: in std_logic;
		z			: in std_logic;
		lsb		: in std_logic;
		clk		: in std_logic;
		reset_n	: in std_logic;
		sh			: out std_logic;
		done		: out std_logic;
		restart_n	: out std_logic;
		add		: out std_logic
	);
	
end CONTROLLER;

architecture dataflow of CONTROLLER is

type ESTADO is (REST,CHECK,RUN0,RUN1,FINISH);
signal actual: ESTADO;

begin
	process(clk)
	begin
	if clk'event and clk='1' then
		if actual=REST and init='1' then
			actual<=CHECK;
		end if;
		if actual=CHECK and z='0' and lsb='1' then
			actual<= RUN1;
		end if;
		if actual=CHECK and z='0' and lsb='0' then
			actual<=RUN0;
		end if;
		if actual=CHECK and z='1' then
			actual<=FINISH;
		end if;
		if actual=FINISH and init='0' then
			actual<=REST;
		end if;
		if actual=RUN0 then 
			actual<=CHECK;
		end if;
		if actual=RUN1 then 
			actual<=CHECK;
		end if;	
	end if;	
	end process;
	
	process(actual)
	begin
	if actual=REST then
			done<='1';
			sh<='0';
			restart_n<='0';
			add<='0';
	end if;
	if actual=CHECK then
			done<='0';
			sh<='0';
			restart_n<='1';
			add<='0';
	end if;
	if actual=RUN0 then
			done<='0';
			sh<='1';
			restart_n<='1';
			add<='0';
	end if;
	if actual=RUN1 then
			done<='0';
			sh<='1';
			restart_n<='1';
			add<='1';
	end if;
	if actual =FINISH then
			done<='0';
			sh<='0';
			restart_n<='1';
			add<='0';
	end if;

	end process;
	


end dataflow;

