-- Builds the telemetry line. Implements SWR-05.
local function telemetry_line(seq)
  -- SWR-01 inside the body: never traced.
  return "frame " .. seq
end

return telemetry_line
