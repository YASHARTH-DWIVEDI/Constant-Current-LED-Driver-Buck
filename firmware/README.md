## Firmware Overview

The firmware implements a simple closed-loop control system.

PWM output controls the MOSFET switching duty cycle.
ADC input monitors voltage across the current-sense resistor.
Duty cycle is adjusted to maintain target LED current.

The control logic prioritizes stability and simplicity over fast transient
response.
