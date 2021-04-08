# Project chronology

## How it started

- Reference to Vengaboys' "Going to Ibiza" in company chat
- Start posting lyrics
- 90s YouTube playlist rabbithole
- Bomfunk MC's "Freestyler" music video -> kid with MiniDisc player
- Want one too
- Order multiple ones

## Reverse engineering

### MiniDisc power

- Miraculously find full service manual online
  - AWESOME Schematics
    - Thicker traces for power rails
    - Expected voltage levels on power rails
    - Full traces, straightforward jumps from page to page
    - Font unsuitable for A4 printing (6 looks like 8)
    - No schematic for button PCB (single layer)
  - PCB layout (outer 2 layers only)
  - System level block diagram
  - Component level block diagram (main ICs)
  - Pinouts (main ICs)

- BT chips will probably need 5V or 3.3V... what's the system voltage?
- Most systems running at 2.3V :-(
- 7V rail from power IC to spindle + stepper motor driver
  - Find it on schematic using IC pin references
  - Find suitable points to tap

### Bluetooth



### MiniDisc audio



### Button
