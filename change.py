def replace_word_in_file(file_path, old_word, new_word):
    try:
        # Read the content of the file
        with open(file_path, 'r') as file:
            content = file.read()

        # Replace the old word with the new word
        modified_content = content.replace(old_word, new_word)

        # Write the modified content back to the file
        with open(file_path, 'w') as file:
            file.write(modified_content)

        print(f"Successfully replaced '{old_word}' with '{new_word}' in {file_path}")

    except FileNotFoundError:
        print(f"Error: File not found - {file_path}")
    except Exception as e:
        print(f"An error occurred: {e}")

# Example usage
file_path = 'CMakeLists.txt'  # Replace with the path to your file
old_word = 'word_to_replace'
new_word = 'project'

replace_word_in_file(file_path, old_word, new_word)
