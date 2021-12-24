
Pod::Spec.new do |s|

  s.name         = "SobotCall"
  s.version      = "0.0.2.1"
  s.summary      = "sobot_call_sdk."
  s.description      = <<-DESC
 sobot_call_sdk for voip call.
DESC

  s.homepage     = "https://github.com/ZCSDK/SobotCall"

  s.license      = "MIT"

  s.author       = { 'zhangxy' => 'app_dev@sobot.com' }

  s.platform     = :ios, "9.0"
  
  #依赖库不支持i386
  s.pod_target_xcconfig = { 'VALID_ARCHS' => 'arm64 armv7 x86_64' }

  s.source       = { :git => "https://github.com/ZCSDK/SobotCall.git", :tag => s.version }

  s.resources = 'SobotCall.bundle'
  s.ios.vendored_frameworks = 'SobotCall.framework','Dependent/bctoolbox.framework','Dependent/belcard.framework','Dependent/belr.framework','Dependent/linphone.framework','Dependent/linphonetester.framework','Dependent/mediastreamer2.framework','Dependent/msamr.framework','Dependent/mscodec2.framework','Dependent/msopenh264.framework','Dependent/mssilk.framework','Dependent/mswebrtc.framework','Dependent/msx264.framework','Dependent/ortp.framework'

end
