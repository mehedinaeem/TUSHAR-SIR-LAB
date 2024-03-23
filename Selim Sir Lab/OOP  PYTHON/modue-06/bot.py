import time
import random
from telegram import Bot

# Your Telegram Bot API token
TOKEN = 'YOUR_TELEGRAM_BOT_TOKEN'

# ID of the Telegram group you want to send messages to
GROUP_ID = 'https://t.me/ged_179_note'

# List of messages to choose from
MESSAGES = [
    "Message 1",
    "Message 2",
    "Message 3",
    # Add more messages as needed
]

# Create a bot instance
bot = Bot(token=TOKEN)

# Function to send message to the group
def send_message(message):
    try:
        bot.send_message(chat_id=GROUP_ID, text=message)
    except Exception as e:
        print(f"An error occurred: {e}")

# Function to generate a random message from the list
def generate_random_message():
    return random.choice(MESSAGES)

# Loop to send message every 30 seconds
while True:
    message = generate_random_message()
    send_message(message)
    time.sleep(30)
