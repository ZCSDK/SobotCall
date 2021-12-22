#
#  Be sure to run `pod spec lint SobotCall.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see https://guides.cocoapods.org/syntax/podspec.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |spec|

  # ―――  Spec Metadata  ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #

  spec.name         = "SobotCall"
  spec.version      = "0.0.1"
  spec.summary      = "A short description of SobotCall."
  spec.description      = <<-DESC
It is marquee view used on iOS, which implement by Objective-C.
DESC

  spec.homepage     = "https://github.com/ZCSDK/SobotCall"
  # spec.screenshots  = "www.example.com/screenshots_1.gif", "www.example.com/screenshots_2.gif"


  spec.license      = "MIT"

  spec.author             = { "Zh li" => "app_dev@sobot.com" }

  spec.platform     = :ios, "9.0"


  spec.source       = { :git => "https://github.com/ZCSDK/SobotCall.git", :tag => spec.version.to_s }


  #spec.source_files  = "Classes", "Classes/**/*.{h,m}"
  #spec.exclude_files = "Classes/Exclude"
  # spec.public_header_files = "Classes/**/*.h"
  
  

  spec.resources = 'SobotCall.bundle'
  spec.ios.vendored_frameworks = 'SobotCall.framework'
 

#依赖的第三方库
    spec.vendored_frameworks = 'Frameworks/bctoolbox.framework','Frameworks/belcard.framework','Frameworks/belr.framework','Frameworks/linphone.framework','Frameworks/linphonetester.framework','Frameworks/mediastreamer2.framework','Frameworks/msamr.framework','Frameworks/mscodec2.framework','Frameworks/msopenh264.framework','Frameworks/mssilk.framework','Frameworks/mswebrtc.framework','Frameworks/msx264.framework','Frameworks/ortp.framework'


  # 下面这两项是依赖苹果的动态库或者静态库添加方式
  #s.library   = 'z.1.2.5'
  #spec.frameworks =  "AudioToolbox","AssetsLibrary","SystemConfiguration","AVFoundation","MobileCoreServices","WebKit"
end
