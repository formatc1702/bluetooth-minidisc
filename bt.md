# BT Tests

# BTX_... Amazon

- First try:
  - AirPods Pro: not connecting
  - Anker SoundCore 2: not connecting
    :-(

# Scosche Flytunes

- First try:
  - AirPods: connected after a few tries, then auto-reconnects after power cycling :-)
  - Anker SoundCore 2: TBD

- Seems to work OK with 3.3V on battery terminal
- Unidentified voltage regulator (?) IC `U4`, labeled either `S2R`, `S2R1` or `S2RI`....
- Might take 5V from the USB C port? -> but additional regulator probably means lower overall efficiency

- Button seems to be pulled up to BAT+ (TBC), via 10k resistor `R6`, into GPIO on third pin of short side of blue moudle, counting from the corner where Audio In L/R is.

- LEDs go from BAT+ via 1k resistors to pins 5 and 6 on the long side of blue module near the 8 test pads

- Does not auto-turn on upon applying power to battery terminals -> good or bad? -> optional RC circuit to virtually hold button for 3 < x < 5 sec. on startup -> comparator circuit

- Max current draw (as displayed by benchtop power supply)
   - 20 ~ 30 mA @ 3.3V connected and transmitting
   -  > 1 mA when searching

- USB C connector desoldered with hot air gun @350 °C
- Push button and LEDs need to be desoldered for flush mounting using 1x Kapton tape + 2x double-sided adhesive tape

# The third one

- Waiting for delivery
