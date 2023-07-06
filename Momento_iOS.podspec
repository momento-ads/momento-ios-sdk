Pod::Spec.new do |s|
  s.name             = 'Momento_iOS'
  s.version          = '0.0.1'
  s.summary          = 'Momento_iOS.xcframework'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/cho.minhyun@cashwalk.io/Momento_iOS'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'cho.minhyun@cashwalk.io' => 'cho.minhyun@cashwalk.io' }
  s.source           = { :git => 'https://github.com/cho.minhyun@cashwalk.io/Momento_iOS.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '10.0'

  s.source_files = 'Momento_iOS/Classes/**/*'
  
  # s.resource_bundles = {
  #   'Momento_iOS' => ['Momento_iOS/Assets/*.png']
  # }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
  # s.dependency 'AFNetworking', '~> 2.3'
end
