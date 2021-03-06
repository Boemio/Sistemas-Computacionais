state = 0
button = 0
sensor = 0
alarm = 0
light = 0

print('Welcome to my state machine simulation! Write -1 to exit the simulation')
print('-='*50)

while True:
  button = int(input('Button: '))
  sensor = int(input('Sensor: '))

  # Transition logic

  if state == 0 and button == 1:
    state = 1
    alarm = 0
    light = 1
  elif state == 1 and sensor == 1:
    state = 2
    alarm = 1
    light = 1
  elif state == 2 and button == 1:
    e = 0
    alarm = 0
    light = 0
  elif button == -1 or sensor == -1:
    break
  
  # Action logic
  
  print('-='*50)
  print('Current state: {}'.format(state))
  if alarm == 1:
    print('Alarm on')
  elif alarm == 0:
    print('Alarm off')
  
  if light == 0:
    print('Light off')
  elif light == 1:
    print('Light on')
  print('-='*50)
