'''Aim: 8. Audio to Text and Text to Audio.'''


def text_to_audio(text):
    print(f"Logic used: gTTS(text='{text}', lang='en').save('output.mp3')")
    print("Action: (Simulated) Text has been converted to 'output.mp3'.")

def audio_to_text(file):
    print(f"Logic used: speech_recognition.Recognizer().recognize_google(audio_data)")
    print("Action: (Simulated) Audio file transcribed to text.")

text_to_audio("Hello from NLP lab")
audio_to_text("sample.wav")
