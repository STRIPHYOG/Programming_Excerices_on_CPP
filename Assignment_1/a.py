from gtts import gTTS
import os

def text_to_audio(text, lang='en'):
    tts = gTTS(text=text, lang=lang, slow=False)
    
    audio_file = "SACHI.mp3"
    tts.save(audio_file)
    
    os.system(f"start {audio_file}")  

text = "I am soumya sagar rath"
text_to_audio(text)