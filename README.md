
# Speech_recognition with esp32s3 (Machine Learning)

You will need is an ESP32S3 and Microphone INMP 441

You can watch a video Here about how the tensorflow works [here (YouTube)](https://www.youtube.com/watch?v=cp2qRrhaZRA):

[![Demo Video](https://img.youtube.com/vi/cp2qRrhaZRA/0.jpg)](https://www.youtube.com/watch?v=cp2qRrhaZRA)

I am using an I2S microphone if you have one as they have a lot better noise characteristics.

The voice recognition is carried out using a model trained with TensorFlow and runs on the ESP32 using TensorFlow Lite. A pre-trained model is included in the Firmware folder so you can get up and running straight away.

There are two folders in this repo `model` and `firmware` check the `README.md` file in each one for complete details.

## Model

Jupyter notebooks for creating a TensorFlow Lite model for "wake word" recognition.

A pre-trained model has already been generated and added to the firmware folder.

If you want to train your own, I added a couple of extra folders to the training data they are available here:

## Firmware

ESP32 firmware built using Platform.io. This runs the neural network trying to detect the words `Left`, `Right`, `Forward` and `Backward`. (if you want to add more words train the word)
