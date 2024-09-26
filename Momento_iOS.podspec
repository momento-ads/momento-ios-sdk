Pod::Spec.new do |s|
  s.name             = 'Momento_iOS'
  s.version          = '1.0.12'
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

  s.author           = { 'cho.minhyun@cashwalk.io' => 'cho.minhyun@cashwalk.io' }
  s.source           = { :git => 'https://github.com/momento-ads/momento-ios-sdk.git', :tag => s.version.to_s }

  s.ios.deployment_target = '11.0'
  s.platform     = :ios, "11.0"

  s.ios.vendored_frameworks = 'Momento_iOS.xcframework'
  s.frameworks = 'Foundation', 'CoreTelephony', 'UIKit', 'AdSupport','AVKit','StoreKit','WebKit', 'AppTrackingTransparency'

end
