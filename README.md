##BUILT FROM XMPPFramework a88e5803f9dd36d31f7fc6f7c109f583d6d460f3

###Wanted to combine ios device and simulator frameworks

lipo Release-iphoneos/XMPPKit.framework/XMPPKit Release-iphonesimulator/XMPPKit.framework/XMPPKit  -create -output XMPPKit
