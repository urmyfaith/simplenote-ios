# Simplenote for iOS
A Simplenote client for iOS. Learn more about Simplenote at [Simplenote.com](https://simplenote.com).

## Development Requirements
* A Simperium account. [Sign up here](https://simperium.com/signup/)
* A Simperium Application ID and key. [Create a new app here](https://simperium.com/app/new/)

## Running

1. Clone the repo: `git clone https://github.com/Automattic/simplenote-ios.git`
2. Make a copy of `config.example.plist` and rename it to `config.plist`.
3. Edit `config.plist` and add your app id and key:

```
    <dict>
        <key>SPSimperiumAppID</key>
        <string>your-app-id</string>
        <key>SPSimperiumApiKey</key>
        <string>your-api-key</string>
    </dict>
```

3: Run `pod install` from the root directory, and then open `Simplenote.xcworkspace` file in Xcode.

_Note: Simplenote API features such as sharing and publishing will not work with development builds._

## Contributing

Follow the same guidelines as [WordPress for iOS](https://make.wordpress.org/mobile/handbook/pathways/ios/how-to-contribute/).

Happy noting!


## BUILD LOCAL

本地运行时,由于GoogleAnalytics被墙了,所以需要本地安装.

1) 下载GoogleAnalytics.
通过 `pod search GoogleAnalytics`,找出对应的 pod 地址.

![17DBA1F1-5EF5-41FC-9EB4-C43524ECF38D.png](http://ww3.sinaimg.cn/large/72f96cbagw1f6r0v2ct10j20i0032dh4.jpg)

2) 去 `https://github.com/CocoaPods/Specs`下载最新的podsec 文件:

`https://github.com/CocoaPods/Specs/blob/master/Specs/GoogleAnalytics/3.16.0/GoogleAnalytics.podspec.json`

3) 将 podsec 放入已经下载的 GoogleAnalytics 仓库代码.

4) 修改 podfile

```
pod 'GoogleAnalytics',  :path => '/Users/zx/Desktop/GoogleAnalytics'
```

5) `pod install`安装

6) 将GoogleAnalytics的头文件加入到工程中...

7) 填写 appid 和 apikey

8) 编译运行,解决一些签名问题

![Screenshot 2016.08.12 16.11.12.png](http://ww3.sinaimg.cn/large/72f96cbagw1f6r146l68xj20hs0vkjxa.jpg)

* 运行后发现图标颜色刚好相反
* 能够注册,但是不能用已有帐号登录
* 不能生成分享链接
* touchID ok.


