### Android

#### 项目 `minSdkVersion` 为 23 ，屏幕方向为竖屏


#### 项目中添加 aar 文件，在 `AppActivity onCreate` 中初始化 SDK，修改渠道

```
import com.next.nova.ins.*;
protected void onCreate(Bundle savedInstanceState) {
    BootNova BN = BootNova.start(this, Channel.GOOGLE.value);
}
```

#### 需要提供下PackageName跟versionCode, 出现 initialized 初始化成功

### IOS
#### 程序入口处调用
```
#import "BootNova.h"

[BootNova start];
```
#### 需要提供下BundleID跟BundleVersion, 出现 initialized 初始化成功
