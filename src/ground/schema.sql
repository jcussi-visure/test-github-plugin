-- Returns the flight log of a drone. Implements SYS-006 and SWR-05.
CREATE FUNCTION flight_log(drone_id INTEGER) RETURNS TEXT
  AS 'SELECT ''SWR-06 in a string: never traced'''
  LANGUAGE SQL;
