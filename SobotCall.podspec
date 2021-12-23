
Pod::Spec.new do |s|

  s.name         = "SobotCall"
  s.version      = "0.0.1"
  s.summary      = "sobot_call_sdk."
  s.description      = <<-DESC
 sobot_call_sdk for voip call.
DESC

  s.homepage     = "https://github.com/ZCSDK/SobotCall"

  s.license      = "MIT"

  s.author       = { 'zhangxy' => 'app_dev@sobot.com' }

  s.platform     = :ios, "9.0"

  s.source       = { :git => "https://github.com/ZCSDK/SobotCall.git", :tag => s.version }

  s.resources = 'SobotCall.bundle'
  s.ios.vendored_frameworks = 'SobotCall.framework','Frameworks/bctoolbox.framework','Frameworks/belcard.framework','Frameworks/belr.framework','Frameworks/linphone.framework','Frameworks/linphonetester.framework','Frameworks/mediastreamer2.framework','Frameworks/msamr.framework','Frameworks/mscodec2.framework','Frameworks/msopenh264.framework','Frameworks/mssilk.framework','Frameworks/mswebrtc.framework','Frameworks/msx264.framework','Frameworks/ortp.framework'

end
