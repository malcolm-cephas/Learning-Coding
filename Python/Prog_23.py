'''Aim: Use the structure of exception handling for all general-purpose exceptions.'''

def divider():
    try:
        x = int(input("Enter numerator: "))
        y = int(input("Enter denominator: "))
        print(f"Result: {x / y}")
    except ZeroDivisionError:
        print("Error: Cannot divide by zero!")
    except ValueError:
        print("Error: Please enter valid integers!")
    except Exception as e:
        print(f"An unexpected error occurred: {e}")
    finally:
        print("Execution finished.")

divider()
