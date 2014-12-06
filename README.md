##BUILT FROM TwilioClient-1.2.0-705f421

###Had to Strip Out Duplicate Symbols From the static library

lipo libTwilioClient.a -info

lipo libTwilioClient.a -thin arm64 -output libTwilioClient.arm64

lipo libTwilioClient.a -thin armv7 -output libTwilioClient.armv7

lipo libTwilioClient.a -thin armv7s -output libTwilioClient.armv7s

lipo libTwilioClient.a -thin i386  -output libTwilioClient.i386

lipo libTwilioClient.a -thin x86_64  -output libTwilioClient.x86_64

ar -d -sv libTwilioClient.arm64 srtp_hmac.o

ar -d -sv libTwilioClient.armv7 srtp_hmac.o

ar -d -sv libTwilioClient.armv7s srtp_hmac.o

ar -d -sv libTwilioClient.arm64 srtp_hmac.o

ar -d -sv libTwilioClient.i386 srtp_hmac.o

ar -d -sv libTwilioClient.x86_64 srtp_hmac.o

ar -d -sv libTwilioClient.arm64 srtp_aes_cbc.o

ar -d -sv libTwilioClient.armv7 srtp_aes_cbc.o

ar -d -sv libTwilioClient.armv7s srtp_aes_cbc.o

ar -d -sv libTwilioClient.arm64 srtp_aes_cbc.o

ar -d -sv libTwilioClient.i386 srtp_aes_cbc.o

ar -d -sv libTwilioClient.x86_64 srtp_aes_cbc.o

ar -d -sv libTwilioClient.arm64 srtp_err.o

ar -d -sv libTwilioClient.armv7 srtp_err.o

ar -d -sv libTwilioClient.armv7s srtp_err.o

ar -d -sv libTwilioClient.arm64 srtp_err.o

ar -d -sv libTwilioClient.i386 srtp_err.o

ar -d -sv libTwilioClient.x86_64 srtp_err.o

lipo libTwilioClient.arm64 libTwilioClient.armv7 libTwilioClient.armv7s libTwilioClient.i386 libTwilioClient.x86_64 -create -output libTwilioClient.a

###Wanted to combine ios device and simulator frameworks

lipo TwilioClientKit.device TwilioClientKit.simulator  -create -output TwilioClientKit
