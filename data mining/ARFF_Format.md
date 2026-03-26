# ARFF Format Study (Exp 4 & 10)

The **Attribute-Relation File Format (ARFF)** is the main data format for WEKA. 

### 📝 Structure of an ARFF File
1.  **`@RELATION`**: Header defining the name of the dataset.
2.  **`@ATTRIBUTE`**: Definitions of features (numeric, string, nominal/categorical).
3.  **`@DATA`**: Separated by commas, each row represents an instance.

### 🔄 Text to ARFF Conversion
- In WEKA, use the **`TextDirectoryLoader`** if you have files sorted into folders by class.
- Or, manually format your text data into the ARFF `@DATA` section with a `STRING` attribute type for the text content.
