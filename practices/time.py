#SP 6th Time of day 

import datetime

current = datetime.datetime.now()
hour = current.hour

if hour >= 18:
    print(f"Hello the time is {hour}, good evening!")
elif hour > 12 and hour < 18:
    print(f"Hello The time is {hour}, good afternoon!")
elif hour >= 6 and hour < 12:
    print(f"Hello the time is {hour}, good morning!")


