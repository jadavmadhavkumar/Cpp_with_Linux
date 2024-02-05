import re
import os

# Get the current folder name
current_folder = os.path.basename(os.getcwd())

# Set the input file path
input_file = "CMakeLists.txt"

# Read content from the input file
with open(input_file, 'r') as file:
    content = file.read()

# Use regular expression to replace the placeholder
pattern = re.compile(r'__your_project_name__')
modified_content = pattern.sub(current_folder, content)

# Write the modified content back to the input file
with open(input_file, 'w') as file:
    file.write(modified_content)

print(f"Placeholder replaced with {current_folder} in {input_file}")
