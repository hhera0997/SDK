### Android

#### 设置项目 `minSdkVersion` 为 23 ，屏幕方向为竖屏

#### 项目中添加 aar 文件，在 `AppActivity onCreate` 中初始化 SDK
```
com.next.nova.ins.BootNova.start(this);
```
#### 不同的渠道使用相同的安装包名上架，需要传递一个自定义的渠道名，并通知运营添加渠道名
```
com.next.nova.ins.BootNova.start(this, "channel");
```
#### LOG 中搜索BootNova，出现 initialized 初始化成功
