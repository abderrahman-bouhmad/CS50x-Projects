# 📁 volume

## what it does
This program modifies the volume of a .wav audio file by scaling each audio sample by a given factor. It works specifically with 16-bit WAV files and retains the original file's header while adjusting the volume of the audio data.

## How It Works

- Reads the first 44 bytes (the WAV file header) and copies them to a new file.
- Reads each 16-bit audio sample from the original file.
- Multiplies each sample by a given floating-point factor.
- Writes the adjusted sample to the output file.

## 🛠️ Usage <img width="1081" alt="demo" src="https://github.com/user-attachments/assets/0839ec4d-e40c-4d29-9ae7-fa0ab94c8e00" />
