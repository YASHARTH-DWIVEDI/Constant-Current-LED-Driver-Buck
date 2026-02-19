# Constant-Current LED Driver (Buck Converter)

## Overview
This project involves the design and implementation of a buck converter–based
constant-current LED driver. Unlike voltage regulators, LEDs require precise
current control to ensure reliability, efficiency, and longevity.

As a CSE (Data Science) student, this project was intentionally chosen to explore
non-deterministic, real-world engineering systems where theory, tolerance,
thermal effects, and noise all influence outcomes.

---

## Key Objectives
- Design a constant-current LED driver
- Improve efficiency compared to linear regulation
- Experience the full hardware lifecycle: 
---

## Working Principle
- A DC input is switched using a MOSFET
- An inductor smooths current flow
- A sense resistor provides real-time current feedback
- Duty cycle is adjusted to maintain constant LED current

This switching approach significantly reduces power loss and heat.

---

## Challenges Encountered
- Component tolerances caused current deviation
- Thermal drift affected long-term stability
- Switching noise impacted feedback accuracy
- Debugging required physical rework, not instant fixes

---

## Solutions Implemented
- Tested multiple resistor tolerances
- Observed behavior over extended operation
- Added feedback filtering for stability
- Improved soldering and layout discipline

---

## Results
- Stable constant-current operation achieved
- Improved efficiency vs linear drivers
- Strong alignment between simulation and real-world behavior (within limits)

---

## Lessons Learned
Engineering is not about perfect designs but about controlled compromises.
This project reshaped my understanding of reliability, patience, and
measurement-driven decision-making.

---

## Author
**Yasharth Dwivedi**  
CSE (Data Science), Undergraduate  
Independent Hardware Project (4 months)
