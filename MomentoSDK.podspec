Pod::Spec.new do |s|
  s.name             = 'MomentoSDK'
  s.version          = '1.0.32'
  s.summary          = 'Momento_iOS.xcframework'
  s.homepage         = 'https://github.com/momento-ads/momento-ios-sdk'

  s.description      = <<-DESC
	Momento_iOS.xcframework
	More details? Check our github page.
                       DESC

  s.license      = { :type => "Commercial",
:text => <<-LICENSE
https://github.com/momento-ads/momento-ios-sdk
LICENSE
}

  s.author           = { 'dev@cashwalk.io' => 'dev@cashwalk.io' }
  s.source           = { :git => 'https://github.com/momento-ads/momento-ios-sdk.git', :tag => s.version.to_s }

  s.ios.deployment_target = '11.0'
  s.platform     = :ios, "11.0"

  s.ios.vendored_frameworks = 'Momento_iOS.xcframework'
  s.frameworks = 'Foundation', 'CoreTelephony', 'UIKit', 'AdSupport','AVKit','StoreKit','WebKit', 'AppTrackingTransparency'

end
