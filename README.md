# Momento iOS Guide

Guide Document Update date → **2023.09.18**        SDK version → **1.0.4**

Minimum iOS Development Target → **Ver.11.0**

# 공통 설정 사항 가이드

## AppDelegate

- AppDelegate의 아래 메서드에 디버그 모드 ON/OFF 정보를 추가해 주어야 합니다.
- True 일 경우 테스트 서버로 연결되며, False일 경우 상용 서버로 연결됩니다.
- ~~상용 배포에 사용하시는 경우, 파라미터에 **False**를 추가하셔야 합니다.~~
- **설정이 없을 경우 자동으로 상용에 연결됩니다. (default value = false)**
- **해당 가이드 문서는 참고용으로, Banner, Native, Video 그리고 VC의 예제 코드를 참고하실 수 있습니다. 단, 필수는 아니며, 단순히 원할한 적용을 돕기 위함입니다. 꼭 예제를 따라 구현해야 하는 것이 아닙니다.**

```swift
func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey: Any]?) -> Bool {
        // Override point for customization after application launch.
        
        MomentSDK.shared.isDebugMode(true) // <- 테스트서버 ?? 상용서버
        
        return true
}
```

## MomentAdsDelegate

- onAdLoaded(dspName: String)
    - 광고가 Load에 성공한 경우 호출되며, 해당 function에 원하는 동작을 정의하여 사용할 수 있습니다.
- onAdShowed(isShown: Bool)
    - 광고가 Show에 성공한 경우 호출되며, 해당 function에 원하는 동작을 정의하여 사용할 수 있습니다.
- onAdClicked()
    - 광고를 클릭한 경우 호출되며, 해당 function에 원하는 동작을 정의하여 사용할 수 있습니다.
- onAdFailed(error: Error)
    - 광고가 Load에 실패한 경우 호출되며, 해당 function에 원하는 동작을 정의하여 사용할 수 있습니다.
- onAdTimedout()
    - 광고의 Load중 타임아웃이 발생한 경우 호출되며, 해당 function에 원하는 동작을 정의하여 사용할 수 있습니다.
- onAdRemoved()
    - 광고가 제거된 경우 호출되며, 해당 function에 원하는 동작을 정의하여 사용할 수 있습니다.
- onImageLoaded(imgSize: CGSize)
    - 광고의 이미지 로드 이후에 호출되며, 원한다면 이미지의 사이즈값을 전달받아 사용할 수 있습니다.

## MomentVideoDelegate

- onVideoLoaded(dspName: String)
    - 광고 비디오가 Load에 성공한 경우 호출되며, 해당 function에 원하는 동작을 정의하여 사용할 수 있습니다.
- ~~onVideoStoped()~~ → **Duplicated(1.0.1)**
    - 광고 비디오가 중간에 Stop된 경우 호출되며, 해당 function에 원하는 동작을 정의하여 사용할 수 있습니다.
- onVideoComplete()
    - 광고 비디오를 끝까지 모두 시청한 경우 호출되며, 해당 function에 원하는 동작을 정의하여 사용할 수 있습니다.
- onVideoRewarded(state: Bool)
    - 리워드형 광고 비디오를 중간에 종료한 호출되며, 인터스티셜 광고 비디오의 경우 해당 delegate function이 불리지 않습니다. 해당 function에 원하는 동작을 정의하여 사용할 수 있습니다.
- onVideoTimedout()
    - 광고의 request가 타임아웃된 경우 호출되며, 해당 function에 원하는 동작을 정의하여 사용할 수 있습니다.
- onVideoShown()
    - 광고가 정상적으로 보여진 경우 호출되며, 해당 function에 원하는 동작을 정의하여 사용할 수 있습니다.
- onVideoClosed()
    - 광고가 종료된 경우 호출되며, 해당 function에 원하는 동작을 정의하여 사용할 수 있습니다.
- onVideoRemoved()
    - 광고가 제거된 경우 호출되며, 해당 function에 원하는 동작을 정의하여 사용할 수 있습니다.
- onVideoClicked(type: MomentSDK.videoClickType)
    - 광고가 클릭된 경우 호출되며, 해당 function에 원하는 동작을 정의하여 사용할 수 있습니다.
- onVideoLoadFailed(description: String)
    - 광고의 로드가 모종의 이유로 실패한 경우 호출되며, 해당 function에 원하는 동작을 정의하여 사용할 수 있습니다.
- onVideoShowFailed(description: String)
    - 광고의 Show가 모종의 이유로 실패한 경우 호출되며, 해당 function에 원하는 동작을 정의하여 사용할 수 있습니다.

# Banner/Native/Video 별 상세 설정 가이드

## Banner

- Banner 설정 요소
    - 50 / 100 / 250의 사이즈로 나뉘어 있습니다. enum으로 정의한 후 사용하면 편리합니다.
    
    ```swift
    enum bannerSizeEnum: Int {
        case small = 50
        case medium = 100
        case large = 250
    }
    ```
    
    - MomentBannerView(size: Int, unitID: String)을 파라미터로 초기화하여 사용할 수 있습니다.
    - MomentBannerView를 컨트롤할 VC를 View의 Delegate로 선언합니다.
    - MomentBannerView의 **loadAd()**로 서버를 통해 광고를 불러올 수 있습니다.
- MomentAdsDelegate
    - 상단에 설명된 Delegate의 함수들이 상황에 맞게 호출됩니다. 따라서 MomentAdsDelegate를 상속한 후 해당하는 메서드를 원하는 동작과 함께 구현하여 사용할 수 있습니다.
- MomentBannerView
    - MomentBannerView의 사용 Example
        
        ```swift
        var sizeEnum: bannerSizeEnum = .small // 50
        var moBanner: MomentBannerView?
        var getUnitID = ""
        ...
        if moBanner == nil {
            moBanner = MomentBannerView(size: sizeEnum.rawValue, unitId: getUnitID)
            guard let moBanner = moBanner else { return }
            moBanner.delegate = self
            getBannerView.addSubview(moBanner) //배너위치에다가 addsubview
            moBanner.loadAd()
        } else {
            moBanner?.loadAd()
        }
        ```
- setBannerWidth(value: CGFloat) { }
    - 배너의 width값을 변경하고 싶다면, 해당 함수를 사용하여 변경할 수 있습니다.
        

## Native

- Native 설정 요소
    - Xib를 사용한 UI구성과 Code를 사용한 UI구성 모두 사용할 수 있습니다.
    - Xib, Code를 사용하여 구성한 UI를 MomentNativeManager와 연결하는 각각의 View에 unitID를 삽입하여 초기화를 진행해야 합니다.
    - MomentNativeManager의 loadWithRendering()을 통해 UI구성 요소들을 연결해주어야 합니다.
- Xib를 통한 UI구성 Example
    
    ```swift
    class NativeXibView: UIView {
        @IBOutlet weak var imageView: UIImageView!
        @IBOutlet weak var button: UIButton!
        @IBOutlet weak var titleLabel: UILabel!
        @IBOutlet weak var descriptionLabel: UILabel!
        @IBOutlet weak var logoImageView: UIImageView!
        
        private var getUnitId = ""
        
        var manager: MomentNativeManager!
        @objc public weak var delegate: MomentAdsDelegate? {
            didSet {
                manager.delegate = delegate
            }
        }
        
        @objc public init(unitId: String) {
            let makeframe = CGRect(x: 0, y: 0, width: UIScreen.main.bounds.width, height: 300) // 모든 버튼, 사진, 텍스트 등을 담을 프레임의 사이즈
            super.init(frame: makeframe)
            getUnitId = unitId
            manager = MomentNativeManager(unitId: getUnitId)
            manager.delegate = delegate
            
            let adView = Bundle.main.loadNibNamed("NativeXibView", owner: self, options: nil)?.first as? UIView
            self.addSubview(adView!)
            self.backgroundColor = .clear
        }
        
        @objc public func loadAd() {
            manager.loadWithRendering(mainImageView: imageView, logoImageView: logoImageView, titleLabel: titleLabel, descriptionLabel: descriptionLabel, button: button, timeOut: 10)
        }
        
        required init?(coder: NSCoder) {
            fatalError("init(coder:) has not been implemented")
        }
        
        @objc public func destory() {
            delegate?.onAdRemoved()
        }
    }
    ```
    
- Code를 통한 UI구성 Example
    
    ```swift
    class NativeTestView: UIView {
        /* View를 구성하는 라이브러리를 사용하지 않는 경우 */
        var mainImageView = UIImageView()
        var stackH = UIStackView()
        var stackV = UIStackView()
        var logoImageView = UIImageView()
        var titleLabel = UILabel()
        var descriptionLabel = UILabel()
        var button = UIButton()
        
        /* SnapKit과 Then을 사용하여 View를 구성하는 경우, 아래의 With SnapKit + Then 주석을 참고하여 적용할 수 있습니다. */
        var mainImageView: UIImageView!
        var stackH: UIStackView!
        var stackV: UIStackView!
        var logoImageView: UIImageView!
        var titleLabel: UILabel!
        var descriptionLabel: UILabel!
        var button: UIButton!
        
        private var getUnitId = ""
        
        var manager: MomentNativeManager!
        @objc public weak var delegate: MomentAdsDelegate? {
            didSet {
                manager.delegate = delegate
            }
        }
        
        @objc public init(unitId: String) {
            let makeframe = CGRect(x: 0, y: 0, width: UIScreen.main.bounds.width, height: 300) // 모든 버튼, 사진, 텍스트 등을 담을 프레임의 사이즈
            super.init(frame: makeframe)
            getUnitId = unitId
            manager = MomentNativeManager(unitId: getUnitId)
            manager.delegate = delegate
        }
        
        @objc public func loadAd() {
    				if mainImageView == nil { setupWithLayout() } // With SnapKit + Then
            manager.loadWithRendering(mainImageView: mainImageView, logoImageView: logoImageView, titleLabel: titleLabel, descriptionLabel: descriptionLabel, button: button, timeOut: 10)
            setupView() // Without SnapKit + Then
            layout() // Without SnapKit + Then
        }
        
        @objc public func destory() {
            delegate?.onAdRemoved()
        }
        
        required init?(coder: NSCoder) {
            super.init(coder: coder)
        }
    
    		deinit {
            print("Deinit")
        }
    
    		//MARK: - Using SnapKit + Then
        private func setupWithLayout() {
            if titleLabel != nil {
                titleLabel.text = ""
            }
            mainImageView = UIImageView().then {
                $0.translatesAutoresizingMaskIntoConstraints = false
                $0.clipsToBounds = true
                $0.contentMode = .scaleAspectFit
                self.addSubview($0)
                $0.snp.makeConstraints {
                    $0.width.equalTo(300)
                    $0.height.equalTo(115)
                    $0.top.equalToSuperview()
                }
            }
    
            stackH = UIStackView().then {
                $0.translatesAutoresizingMaskIntoConstraints = false
                $0.clipsToBounds = true
                $0.axis = .horizontal
                $0.spacing = 8
                $0.distribution = .fill
                self.addSubview($0)
                $0.snp.makeConstraints {
                    $0.height.equalTo(40)
                    $0.top.equalTo(mainImageView.snp.bottom).offset(25)
                    $0.leading.trailing.equalTo(mainImageView).offset(12)
                }
            }
    
            logoImageView = UIImageView().then {
                $0.translatesAutoresizingMaskIntoConstraints = false
                $0.clipsToBounds = true
                $0.contentMode = .scaleAspectFit
                stackH.addArrangedSubview($0)
                $0.snp.makeConstraints {
                    $0.width.height.equalTo(40)
                }
            }
    
            stackV = UIStackView().then {
                $0.translatesAutoresizingMaskIntoConstraints = false
                $0.clipsToBounds = true
                $0.axis = .vertical
                $0.spacing = 2
                $0.distribution = .equalSpacing
                stackH.addArrangedSubview($0)
            }
    
            titleLabel = UILabel().then {
                $0.translatesAutoresizingMaskIntoConstraints = false
                $0.font = UIFont.boldSystemFont(ofSize: 13.0)
                $0.numberOfLines = 1
                stackV.addArrangedSubview($0)
            }
    
            descriptionLabel = UILabel().then {
                $0.translatesAutoresizingMaskIntoConstraints = false
                $0.font = UIFont.boldSystemFont(ofSize: 13.0)
                $0.numberOfLines = 1
                stackV.addArrangedSubview($0)
            }
    
            button = UIButton().then {
                $0.translatesAutoresizingMaskIntoConstraints = false
                $0.setTitle("보러가기", for: .normal)
                $0.clipsToBounds = true
                $0.backgroundColor = .blue
                self.addSubview($0)
                $0.snp.makeConstraints {
                    $0.width.equalTo(mainImageView.snp.width)
                    $0.height.equalTo(42)
                    $0.top.equalTo(stackH.snp.bottom).offset(25)
                }
            }
        }
        
    //MARK: - Using Swift Constraints
        func setupView() {
            backgroundColor = .clear
            
            mainImageView.translatesAutoresizingMaskIntoConstraints = false
            mainImageView.clipsToBounds = true
            mainImageView.contentMode = .scaleAspectFit
            self.addSubview(mainImageView)
            
            stackH.translatesAutoresizingMaskIntoConstraints = false
            stackH.clipsToBounds = true
            stackH.axis = .horizontal
            stackH.spacing = 8
            stackH.distribution = .fill
            self.addSubview(stackH)
            
            logoImageView.translatesAutoresizingMaskIntoConstraints = false
            logoImageView.clipsToBounds = true
            logoImageView.contentMode = .scaleAspectFit
            stackH.addArrangedSubview(logoImageView)
            
            stackV.translatesAutoresizingMaskIntoConstraints = false
            stackV.clipsToBounds = true
            stackV.axis = .vertical
            stackV.spacing = 2
            stackV.distribution = .equalSpacing
            stackH.addArrangedSubview(stackV)
            
            titleLabel.translatesAutoresizingMaskIntoConstraints = false
            titleLabel.font = UIFont.boldSystemFont(ofSize: 13.0)
            titleLabel.numberOfLines = 1
            stackV.addArrangedSubview(titleLabel)
            
            descriptionLabel.translatesAutoresizingMaskIntoConstraints = false
            descriptionLabel.font = UIFont.boldSystemFont(ofSize: 13.0)
            descriptionLabel.numberOfLines = 1
            stackV.addArrangedSubview(descriptionLabel)
            
            button.translatesAutoresizingMaskIntoConstraints = false
            button.setTitle("보러가기", for: .normal)
            button.clipsToBounds = true
            button.backgroundColor = .blue
            self.addSubview(button)
        }
        
        func layout() {
            guard let superview = self.superview else { return }
            mainImageView.widthAnchor.constraint(equalToConstant: 300).isActive = true
            mainImageView.heightAnchor.constraint(equalToConstant: 115).isActive = true
            mainImageView.topAnchor.constraint(equalTo: self.topAnchor).isActive = true
            
            stackH.heightAnchor.constraint(equalToConstant: 40).isActive = true
            stackH.topAnchor.constraint(equalTo: mainImageView.bottomAnchor, constant: 25).isActive = true
            stackH.leadingAnchor.constraint(equalTo: mainImageView.leadingAnchor, constant: 12).isActive = true
            stackH.trailingAnchor.constraint(equalTo: mainImageView.trailingAnchor, constant: -12).isActive = true
            
            logoImageView.widthAnchor.constraint(equalToConstant: 40).isActive = true
            logoImageView.heightAnchor.constraint(equalToConstant: 40).isActive = true
            
            button.widthAnchor.constraint(equalTo: mainImageView.widthAnchor).isActive = true
            button.heightAnchor.constraint(equalToConstant: 42).isActive = true
            button.topAnchor.constraint(equalTo: stackH.bottomAnchor, constant: 25).isActive = true
        }
    }
    ```
    
    - Code를 사용한 UI구성의 경우 SnapKit + Then을 이용한 예제코드도 존재합니다.
- MomentAdsDelegate
    - 상단에 설명된 Delegate의 함수들이 상황에 맞게 호출됩니다. 따라서 MomentAdsDelegate를 상속한 후 해당하는 메서드를 원하는 동작과 함께 구현하여 사용할 수 있습니다.
- MomentNativeManager
    - Xib, Code 방식 모두 MomentNativeManager 타입의 manager를 선언하여, loadWithRendering() 메서드를 호출해야 합니다.
    - loadWithRendering()의 파라미터에 버튼과 timeOut*을 제외한 구성 요소들은 Optional로, 개발자의 선택에 따라 nil을 할당하여 사용하지 않을 수 있습니다. 
    예를 들어 로고 이미지를 불러오는 UIImageView를 사용하지 않을 경우, nil을 할당하시면 됩니다.
    
    *timeOut의 경우 Default Value가 15초로 설정되어 있으며, 아무 값도 넣지 않은 경우 15초, 원하는 시간이 있을 경우 추가하시면 해당하는 시간동안 response가 날아오지 않는 경우 Delegate의 onAdTimedout()이 호출되게 됩니다.
    - 자세한 내용은 loadWithRendering의 퀵 헬프(opt + click)을 통해 확인하실 수 있습니다.
    
    ```swift
    class NativeTestVC: UIViewController {
        
        var size = 300
        var xibNative: NativeXibView?
        var moNative: NativeTestView?
        var getUnitID = ""
        ...
        switch sender.tag {
        case 21:
                if moNative != nil {
                    moNative?.removeFromSuperview()
                    moNative = nil
                }
                if xibNative == nil {
                    xibNative = NativeXibView(unitId: getUnitID)
                    guard let xibNative else { return }
                    xibNative.delegate = self
                    
                    getNativeView.addSubview(xibNative) // 메인뷰와 연결
                    xibNative.loadAd()
                } else {
                    xibNative?.loadAd()
                }
        case 22:
                if xibNative != nil {
                    xibNative?.removeFromSuperview()
                    xibNative = nil
                }
                if moNative == nil {
                    moNative = NativeTestView(unitId: getUnitID)
                    guard let moNative else { return }
                    moNative.delegate = self
                    
                    getNativeView.addSubview(moNative) // 메인뷰와 연결
                    moNative.loadAd()
                } else {
                    moNative?.loadAd()
                }
        default:
            break
        }
    }
    ```
    

## Video

- Video 설정 요소 및 MomentVideoManager
    - Video의 경우 loadVideo()와 showVideo()를 독립적으로 사용할 수 있습니다.
        - loadVideo()의 경우 동영상 광고를 미리 불러올 수 있으며, showVideo()로 로드한 광고를 유저에게 보여줄 수 있습니다.
        - showVideo()의 경우 동영상이 모두 끝난 후, 유저가 close 버튼을 눌러 이벤트를 발생시키면, **자동으로 하나의 광고를 load**합니다.
    - **VideoManager의 hasVideoAd() 메서드를 통해 광고의 유무를 확인하실 수 있습니다.**
    - ViewController에 MomentVideoManager를 상속받는 변수를 선언합니다. 선언한 변수를 초기화하는 타이밍에 unitID를 삽입합니다.
    - 해당 변수의 videoDelegate를 self로, 그 후 loadVideo()와 showVideo()를 원하는 타이밍에 호출합니다.
    - Example
    
    ```swift
    class VideoTestVC: UIViewController {
    		...
        var getUnitID: String = ""
        var moVideo: MomentVideoManager?
    		...
        @IBAction func bannerAct(_ sender: UIButton) {
            switch sender.tag {
            case 20:
                for subview in getStackView.arrangedSubviews {
                    subview.removeFromSuperview()
                }
            case 21:
                if moVideo == nil {
                    moVideo = MomentVideoManager(unitID: getUnitID) <-
                    guard let moVideo = moVideo else { return }
                    moVideo.videoDelegate = self <-
                    moVideo.loadVideo() <-
                } else {
                    moVideo?.loadVideo()
                }
                
            case 22:
                guard let moVideo = moVideo else { return }
                moVideo.videoDelegate = self
                moVideo.showVideo() <-
    				...
            default:
                break
            }
        }
    		...
    }
    ```
    
- MomentVideoDelegate
    - 상단에 설명된 Delegate의 함수들이 상황에 맞게 호출됩니다. 따라서 MomentVideoDelegate를 상속한 후 해당하는 메서드를 원하는 동작과 함께 구현하여 사용할 수 있습니다.

- MomentSDK.shared.rewardVideoSkippable(_: Bool)
    - 모멘토의 리워드 비디오는 사용자가 스킵버튼을 누를 수 있으며, 스킵버튼을 누를 시 `계속 시청하여 보상받기` 혹은 `보상을 포기하고 시청 종료하기` 중 하나를 선택하도록 되어있습니다. 하지만 이와같은 기능이 필요 없고, 리워드 비디오를 무조건 끝까지 시청하도록 원하는 경우 위 함수의 값을 `false`로 변경하여 해당 기능을 사용하지 않을 수 있습니다. `default value`는 `true`입니다.

# GDPR 준수 가이드

MomentoiOS SDK GDPR준수 Minimum Version → **0.1.32**

본 가이드는 GDPR을 준수해야하는 매체를 위해 제작되었습니다.

MomentSDK의 내부 메서드인 setTCString(:String)을 통해 TCString을 전달해야 합니다.

```swift
MomentSDK.shared.setTCString(TCSTring: "E1X2A3M4P5L6E7")
```

사용자의 GDPR 동의 여부에 따라 전달 받은 result value를 전달해 주시면 됩니다.

만약, 사용자가 동의하지 않는 경우, setTCString 파라미터에 “” ← 빈 값을 전달해 주시면 됩니다.
