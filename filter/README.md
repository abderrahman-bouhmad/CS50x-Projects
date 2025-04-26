# 🖼️ Filters

## Overview
A C program that applies simple image filters (grayscale, sepia, reflect, blur) to a BMP file. Focuses on understanding how digital images are represented as pixel arrays and how to manipulate pixel values.

## How It Works

- Loads a BMP file into memory
- Applies the selected filter to each pixel:
  - Grayscale: Averages the RGB values
  - Sepia: Adjusts colors using a weighted formula
  - Reflect: Flips image horizontally
  - Blur: Averages RGB values of neighboring pixels
- Saves the updated image as a new BMP file

## 📸 Screenshot of the app 

| Original | Grayscale | Sepia | Reflect | Blur |
|:--------:|:---------:|:-----:|:-------:|:----:|
| ![courtyard](https://github.com/user-attachments/assets/f1f217a3-d519-4c8b-b92a-38c70efbc4be) | ![out](https://github.com/user-attachments/assets/eecd14a2-6055-4f64-a4ef-3fbafb4643ac) | ![out2](https://github.com/user-attachments/assets/b05f9acc-c1f8-4deb-b69d-12011654791d) | ![out3](https://github.com/user-attachments/assets/493a8006-e4f7-487a-9db3-c8381377d321) | ![out4](https://github.com/user-attachments/assets/8a36e7c1-c82e-4627-8810-45022cc559c8) |
