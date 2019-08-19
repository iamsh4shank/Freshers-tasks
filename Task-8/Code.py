from PIL import Image #calling Image from Pillow==6.1.0 by using from we can call whole library by using imporrt
import pytesseract #calling pytesseract==0.2.7 by import

image_captcha = pytesseract.image_to_string(Image.open('ncaptcha.png'), config='--psm 7')
print(image_captcha)
print(eval(image_captcha))
