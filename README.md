### Android

#### 项目 `minSdkVersion` 为 23 ，屏幕方向为竖屏

#### 渠道名称
```
GOOGLE
SAMSUNG
AMAZON
HUAWEI
XIAOMI
OPPO
VIVO
TECNO
```
#### 项目中添加 aar 文件，在 `AppActivity onCreate` 中初始化 SDK，将channel替换成渠道名

```
com.next.nova.ins.BootNova.start(this, "channel");
```

#### 需要提供下PackageName跟versionCode, Logcat 中搜索BootNova，出现 initialized 初始化成功
