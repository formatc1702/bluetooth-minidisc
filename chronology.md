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
  - too weak! Collapses under small load
- Look for alternative source + boost converter
  - `VA` net looks good, but many test pads etc. are on "wrong" side of PCB
  - Use `IC901` pin 41 (`VA`) @2.4 V for `+`
  - Use `C314` cathode at `IC302` pin 14 (`GND`) for `-`
  - It works! Stable under load
  - Not sure why tapping anode of `C314` does not work
  - Not sure why tapping `AP908` (should be equivalent to `IC302` `VCC` before `L303` and `R303`) does not work

### Bluetooth

- Noise coupled back from BT module via power rail into audio
  - 2x 470u electrolytic cap on 3.3V BT supply line helps (a bit)

### MiniDisc audio

- short circuit between audio ground and VG ground? -> nope, all good


### Button

- Photograph button PCB against white screen -> good contrast of traces
  - Single layer board
  - Lots of `000` 0 Ohm resistors as bridges
  - Multiplexed? Resistor ladder? No idea
- Trace nets from `End Search` button down to FFC
  - Pin 2: `DGND`
  - Pin 6: `SET KEY 1`
- Try scraping off soldermask on marking in corner -> works
- Scrape off soldermask on trace of button ring

- Remove protective foil around test point of trace of button center
- Cut traces to rest of button PCB

## Ideas for 0.2

- Bluetooth auto-connect using LM393 comparator + RC circuit
- Bluetooth LEDs visible through translucent rear casing
- Reduce Bluetooth noise
- Use Pololu Step-Up converter U1V11F3 instead of S7V8A
- Tap a different power rail?
  - New step-up converter can work with voltages as low as 0.5 V
  - Maybe using a rail further away from the audio / DAC gives lower noise
