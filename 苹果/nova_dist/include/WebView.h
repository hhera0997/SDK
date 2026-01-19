//
//  WebView.h
//  (Copyright 注释同 .mm)
//

#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>

NS_ASSUME_NONNULL_BEGIN

// =======================
// WeakScriptMessageDelegate
// =======================

@interface WeakScriptMessageDelegate : NSObject<WKScriptMessageHandler>

@property (nonatomic, weak) id<WKScriptMessageHandler> scriptDelegate;

- (instancetype)initWithDelegate:(id<WKScriptMessageHandler>)scriptDelegate;

@end


// =======================
// WebViewProtocol
// =======================

@protocol WebViewProtocol <NSObject>
@property (nonatomic, getter=isOpaque) BOOL opaque;
@property (nullable, nonatomic, copy) UIColor *backgroundColor UI_APPEARANCE_SELECTOR;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (nonatomic) CGRect frame;
@property (nullable, nonatomic, weak) id <WKNavigationDelegate> navigationDelegate;
@property (nullable, nonatomic, weak) id <WKUIDelegate> UIDelegate;
@property (nullable, nonatomic, readonly, copy) NSURL *URL;
- (void)load:(NSURLRequest *)request;
- (void)loadHTML:(NSString *)html baseURL:(NSURL *)baseUrl;
- (void)evaluateJavaScript:(NSString *)javaScriptString completionHandler:(void (^ __nullable)(__nullable id, NSError * __nullable error))completionHandler;
@property (nonatomic, readonly) BOOL canGoBack;
@property (nonatomic, readonly) BOOL canGoForward;
- (void)goBack;
- (void)goForward;
- (void)reload;
- (void)stopLoading;
- (void)setScrollbarsVisibility:(BOOL)visibility;
- (void)setScrollBounce:(BOOL)enable;
@end

// =======================
// CWebViewPlugin
// =======================

@interface CWebViewPlugin : NSObject<WKUIDelegate, WKNavigationDelegate, WKScriptMessageHandler,UIScrollViewDelegate,UIGestureRecognizerDelegate>
{
    UIView <WebViewProtocol> *webView;
    NSString *gameObjectName;
    NSMutableDictionary *customRequestHeader;
    BOOL alertDialogEnabled;
    NSRegularExpression *allowRegex;
    NSRegularExpression *denyRegex;
    NSRegularExpression *hookRegex;
    NSString *basicAuthUserName;
    NSString *basicAuthPassword;
    UIView *parentView;
}

// 初始化
- (instancetype)initWithGameObjectName:(const char *)gameObjectName
                          transparent:(BOOL)transparent
                                 zoom:(BOOL)zoom
                                   ua:(const char *)ua
                      enableWKWebView:(BOOL)enableWKWebView
                          contentMode:(WKContentMode)contentMode
                    allowsLinkPreview:(BOOL)allowsLinkPreview
      allowsBackForwardNavigationGestures:(BOOL)allowsBackForwardNavigationGestures
                               radius:(int)radius
                                 view:(UIView *)view;

// 释放资源
- (void)dispose;

// 通用设置
- (void)setMargins:(float)left top:(float)top right:(float)right bottom:(float)bottom relative:(BOOL)relative;
- (void)setVisibility:(BOOL)visibility;
- (void)setInteractionEnabled:(BOOL)enabled;
- (void)setAlertDialogEnabled:(BOOL)enabled;
- (void)setScrollbarsVisibility:(BOOL)visibility;
- (void)setScrollBounceEnabled:(BOOL)enabled;

// URL/HTML 加载与操作
- (void)loadURL:(const char *)url;
- (void)loadHTML:(const char *)html baseURL:(const char *)baseUrl;
- (void)evaluateJS:(NSString *)js;

- (int)progress;
- (BOOL)canGoBack;
- (BOOL)canGoForward;
- (void)goBack;
- (void)goForward;
- (void)reload;

// Cookie & Header
- (void)getCookies:(const char *)url;
- (void)addCustomRequestHeader:(const char *)headerKey value:(const char *)headerValue;
- (void)removeCustomRequestHeader:(const char *)headerKey;
- (void)clearCustomRequestHeader;
- (const char *)getCustomRequestHeaderValue:(const char *)headerKey;
- (void)setBasicAuthInfo:(const char *)userName password:(const char *)password;
- (void)clearCache:(BOOL)includeDiskFiles;
- (void)setAllMediaPlaybackSuspended:(BOOL)suspended;

// Pattern
- (BOOL)setURLPattern:(const char *)allowPattern and:(const char *)denyPattern and:(const char *)hookPattern;

// 其他静态方法
+ (void)resetSharedProcessPool;
+ (void)clearCookies;
+ (void)saveCookies;

@property (nonatomic, copy) BOOL (^statusMessageBlock)(NSString * objectName, NSString *status, NSString *message);
- (void)statusMessage:(NSString *) objectName status:(NSString *) status message:(NSString *) message ;

- (void)simulateScroll:(float)scrollX scrollY:(float)scrollY duration:(float)duration;
- (void)simulateClick:(CGFloat)x y:(CGFloat)y;

- (void)setViewLayer:(BOOL)top isTestMode:(BOOL)isTestMode;

@end

NS_ASSUME_NONNULL_END
