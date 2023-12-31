Pod::Spec.new do |spec|

  spec.name         = "SeelKitSLS"
  spec.version      = "3.0.8"
  spec.summary      = "Seel Kit for SLS"
  spec.license      = "MIT"

  spec.homepage     = "https://www.seel.com"
  spec.author       = { "winter" => "winter.ld@outlook.com" }

  spec.platform     = :ios, "12.0"

  spec.source       = { :git => "https://github.com/wlnter/SeelKitSLS.git", :tag => "#{spec.version}" }

  # spec.resource = 'SeelKitResource.bundle'
  spec.resource_bundle = { 'SeelKitResource' => 'Resource/**/*.png' }

  spec.vendored_frameworks  = 'SeelKit.xcframework'
  spec.frameworks = "Foundation", "UIKit"
  # spec.pod_target_xcconfig = { 'VALID_ARCHS' => 'x86_64 armv7 arm64' }

end

