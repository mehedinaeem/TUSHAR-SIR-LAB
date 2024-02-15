import csv

# Function to create CSV file with numbers from 1 to 100 and blank name and email columns
def create_csv_file(file_path):
    with open(file_path, mode='w', newline='') as file:
        writer = csv.writer(file)
        writer.writerow(['Number', 'Name', 'Email'])  # Header row
        for i in range(1, 101):
            writer.writerow([i, '', ''])

# Main function
def main():
    file_path = "participants.csv"  # Change this to your desired file path
    create_csv_file(file_path)
    print(f"CSV file created successfully: {file_path}")

if __name__ == "__main__":
    main()
