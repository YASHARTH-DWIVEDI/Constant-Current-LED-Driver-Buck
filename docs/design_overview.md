## Design Overview

The project uses a buck (step-down) DC-DC converter topology configured for
constant-current operation rather than voltage regulation.

A current-sense resistor is placed in series with the LED load. The voltage
across this resistor is used as feedback to regulate the switching duty cycle.
By controlling the duty cycle, the average inductor current — and therefore
the LED current — is maintained at a desired level.

The buck topology was selected due to its higher efficiency compared to linear
regulators, particularly for applications requiring continuous operation.

<img width="1408" height="768" alt="Diagram" src="https://github.com/user-attachments/assets/52ce7fcd-9af4-4cac-8b2f-4071074c62a3" />
