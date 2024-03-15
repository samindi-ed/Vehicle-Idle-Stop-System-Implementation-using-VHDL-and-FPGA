----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    10:16:53 12/08/2023 
-- Design Name: 
-- Module Name:    MEALY_M - Behavioral 
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

entity MEALY_M is
    Port ( clk : in  STD_LOGIC;
				I : in  STD_LOGIC;
           B : in  STD_LOGIC;
           V : in  STD_LOGIC;
           A : in  STD_LOGIC;
           S : in  STD_LOGIC;
			  
           E : out  STD_LOGIC_VECTOR (1 downto 0));
end MEALY_M;

architecture Behavioral of MEALY_M is
	type MEALY_TYPE is (ST0, ST1, ST2);
	signal P_STATE, N_STATE: MEALY_TYPE;

begin

	seq_part:process(clk)
	begin
		if(clk = '1' and clk'event) then
			P_STATE <= N_STATE;
		end if;
	end process seq_part;
	
	comb_part:process(P_STATE,I,B,V,A,S) 
	begin
		case P_STATE is
			when ST0 =>
				if I='1'  then
					E <= "01"; 
					N_STATE <= ST1; 
				else 
					E <= "00";
				end if;
				
			when ST1 =>
				if (I='1' and B='1' and V = '1') then
					E <= "10"; 
					N_STATE <= ST2; 
				
				else if (I='1' and (B='0' and ( V = '0' or V ='1'))) then
					E <= "01"; 
					N_STATE <= ST1;  
					
				else if (I='1' and (V='0' and ( B = '0' or B ='1'))) then
					E <= "01"; 
					N_STATE <= ST1;  
					
				else if (I = '0') then 
					N_STATE <= ST0;
					E <= "00";
					
--				else 
--					E <= "01";
				end if;
				end if;
				end if;
				end if;
				
				
			when ST2 =>
				if (I='0' or B='0' or S='1' or A='1') then
					E <= "00"; 
					N_STATE <= ST0; 
--				else if (I='1' and ( B='0' or S='1' or A='0')) then
--					E <= "01";
--					N_STATE <= ST0;
					
				else if  (I='1' and  B='1' and S='0' and A='0') then
					E <= "10";
				end if;
				end if;
				
		end case;
	end process comb_part;
		
end Behavioral;

