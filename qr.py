#import qrcode

#img = qrcode.make('test text')

#print(type(img))
#print(img.size)
# <class 'qrcode.image.pil.PilImage'>
# (290, 290)

#img.save('/home/mehak/Desktop/qr/qrcode_test.png')

#echo 'test' | qr

#qrcode.generate('This will be a QRCode, eh!');

import qrcode
qr = qrcode.QRCode(
    version=1,
    error_correction=qrcode.constants.ERROR_CORRECT_L,
    box_size=10,
    border=4,
)
qr.add_data('12')
qr.make(fit=True)

img = qr.make_image(fill_color="black", back_color="white")
#img.save('/home/mehak/Desktop/qr/qrcode_test.png')
img.show()
