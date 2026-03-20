### Android

#### 项目 `minSdkVersion` 为 23 ，屏幕方向为竖屏

#### 项目中添加添加库，导入 aar 文件，在 `AppActivity onCreate` 中初始化 SDK，修改渠道
```
implementation("com.google.android.gms:play-services-ads:24.8.0")
```
```
import com.next.nova.ins.*;
protected void onCreate(Bundle savedInstanceState) {
    BootNova BN = BootNova.start(this, Channel.GOOGLE.value);
}
```

#### 需要提供下PackageName跟versionCode, 出现 initialized 初始化成功

### IOS

- 打开项目的 Podfile，并将下面这行代码添加到应用的 target build 配置中：

```ruby
pod 'Google-Mobile-Ads-SDK'
```

- 在终端运行：

```ruby
pod install --repo-update
```

- Info.plist 已配置 GADApplicationIdentifier 忽略下方配置
  Info.plist 未配置 GADApplicationIdentifier 需要添加以下键值

```xml
<key>GADIntegrationManager</key>
<string>webview</string>
```

#### 程序入口处调用

```
#import "BootNova.h"

[BootNova start];
```

#### 需要提供下BundleID跟BundleVersion, 出现 initialized 初始化成功
