library ieee;
use ieee.std_logic_1164.all;

entity watchdog_timer is
  port (clk : in std_logic; stall : out std_logic);
end entity watchdog_timer;

architecture rtl of watchdog_timer is
  -- Converts the stall counter. Implements SWR-06.
  function to_stall(count : integer) return std_logic is
  begin
    -- SWR-02 inside the body: never traced.
    if count > 200 then
      return '1';
    else
      return '0';
    end if;
  end function to_stall;
begin
  stall <= '0';
end architecture rtl;
