
Pod::Spec.new do |spec|

  spec.name         = "SobotCall"
  spec.version      = "0.0.1"
  spec.summary      = "sobot_call_sdk."
  spec.description      = <<-DESC
 sobot_call_sdk for voip call.
DESC

  spec.homepage     = "https://github.com/ZCSDK/SobotCall"

  spec.license      = "MIT"

  spec.author       = { "Zh li" => "app_dev@sobot.com" }

  spec.platform     = :ios, "9.0"

  spec.source       = { :git => "https://github.com/ZCSDK/SobotCall.git", :tag => spec.version.to_s }

  spec.resources = 'SobotCall.bundle'
  spec.ios.vendored_frameworks = 'SobotCall.framework','Frameworks/bctoolbox.framework','Frameworks/belcard.framework','Frameworks/belr.framework','Frameworks/linphone.framework','Frameworks/linphonetester.framework','Frameworks/mediastreamer2.framework','Frameworks/msamr.framework','Frameworks/mscodec2.framework','Frameworks/msopenh264.framework','Frameworks/mssilk.framework','Frameworks/mswebrtc.framework','Frameworks/msx264.framework','Frameworks/ortp.framework'
 

#依赖的第三方库
    #spec.vendored_frameworks =


  # 下面这两项是依赖苹果的动态库或者静态库添加方式
  #s.library   = 'z.1.2.5'
  #spec.frameworks =  "AudioToolbox","AssetsLibrary","SystemConfiguration","AVFoundation","MobileCoreServices","WebKit"
  
  #spec.source_files  = "Classes", "Classes/**/*.{h,m}"
  #spec.exclude_files = "Classes/Exclude"
  # spec.public_header_files = "Classes/**/*.h"
  
end
