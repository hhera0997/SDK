// BidRequest.h
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class BRImp, BRNative, BRPmp, BRDeal, BRMetric, BRBanner, BRVideo, BRAudio;
@class BRApp, BRDevice, BRGeo, BRUser, BRRegs, BRSource, BRSourceExt, BRSchain, BRSchainNode;
@class BRSite, BRPublisher, BRContent, BRData, BRSegment, BRProducer;

@interface BidRequest : NSObject
@property (nonatomic, copy, nullable)   NSString *id;
@property (nonatomic, copy)             NSArray<BRImp *> *imp;
@property (nonatomic, strong, nullable) BRSite *site;
@property (nonatomic, strong, nullable) BRApp *app;
@property (nonatomic, strong, nullable) BRDevice *device;
@property (nonatomic, strong, nullable) BRUser *user;
@property (nonatomic, strong, nullable) NSNumber *bidTest;   // -> JSON "test"
@property (nonatomic, strong, nullable) NSNumber *at;
@property (nonatomic, strong, nullable) NSNumber *tmax;
@property (nonatomic, copy, nullable)   NSArray<NSString *> *wseat;
@property (nonatomic, copy, nullable)   NSArray<NSString *> *bseat;
@property (nonatomic, strong, nullable) NSNumber *allimps;
@property (nonatomic, copy, nullable)   NSArray<NSString *> *cur;
@property (nonatomic, copy, nullable)   NSArray<NSString *> *wlang;
@property (nonatomic, copy, nullable)   NSArray<NSString *> *bcat;
@property (nonatomic, copy, nullable)   NSArray<NSString *> *badv;
@property (nonatomic, copy, nullable)   NSArray<NSString *> *bapp;
@property (nonatomic, strong, nullable) BRSource *source;
@property (nonatomic, strong, nullable) BRRegs *regs;
@property (nonatomic, copy, nullable)   NSDictionary<NSString*, id> *ext;

- (instancetype)initWithDictionary:(NSDictionary *)dict;
- (NSDictionary *)toJSONDictionary;
@end

@interface BRImp : NSObject
@property (nonatomic, copy, nullable)   NSString *id;
@property (nonatomic, copy, nullable)   NSArray<BRMetric *> *metric;
@property (nonatomic, strong, nullable) BRBanner *banner;
@property (nonatomic, strong, nullable) BRVideo *video;
@property (nonatomic, strong, nullable) BRAudio *audio;
@property (nonatomic, strong, nullable) BRNative *nativeObj; // -> JSON "native"
@property (nonatomic, strong, nullable) BRPmp *pmp;
@property (nonatomic, copy, nullable)   NSString *displaymanager;
@property (nonatomic, copy, nullable)   NSString *displaymanagerver;
@property (nonatomic, strong, nullable) NSNumber *instl;
@property (nonatomic, copy, nullable)   NSString *tagid;
@property (nonatomic, strong, nullable) NSNumber *bidfloor;
@property (nonatomic, copy, nullable)   NSString *bidfloorcur;
@property (nonatomic, strong, nullable) NSNumber *clickbrowser;
@property (nonatomic, strong, nullable) NSNumber *secure;
@property (nonatomic, copy, nullable)   NSArray<NSString *> *iframebuster;
@property (nonatomic, strong, nullable) NSNumber *exp;
@property (nonatomic, copy, nullable)   NSDictionary<NSString*, id> *ext;

- (instancetype)initWithDictionary:(NSDictionary *)dict;
- (NSDictionary *)toJSONDictionary;
@end

@interface BRNative : NSObject
@property (nonatomic, copy, nullable)   NSString *request;
@property (nonatomic, copy, nullable)   NSString *ver;
@property (nonatomic, copy, nullable)   NSArray<NSNumber *> *api;
@property (nonatomic, copy, nullable)   NSArray<NSNumber *> *battr;
@property (nonatomic, copy, nullable)   NSDictionary<NSString*, id> *ext;

- (instancetype)initWithDictionary:(NSDictionary *)dict;
- (NSDictionary *)toJSONDictionary;
@end

@interface BRPmp : NSObject
@property (nonatomic, strong, nullable) NSNumber *private_auction;
@property (nonatomic, copy, nullable)   NSArray<BRDeal *> *deals;
@property (nonatomic, copy, nullable)   NSDictionary<NSString*, id> *ext;

- (instancetype)initWithDictionary:(NSDictionary *)dict;
- (NSDictionary *)toJSONDictionary;
@end

@interface BRDeal : NSObject
@property (nonatomic, copy, nullable)   NSString *id;
@property (nonatomic, strong, nullable) NSNumber *bidfloor;
@property (nonatomic, copy, nullable)   NSString *bidfloorcur;
@property (nonatomic, strong, nullable) NSNumber *at;
@property (nonatomic, copy, nullable)   NSArray<NSString *> *wseat;
@property (nonatomic, copy, nullable)   NSArray<NSString *> *wadomain;
@property (nonatomic, copy, nullable)   NSDictionary<NSString*, id> *ext;

- (instancetype)initWithDictionary:(NSDictionary *)dict;
- (NSDictionary *)toJSONDictionary;
@end

@interface BRMetric : NSObject
@property (nonatomic, copy, nullable)   NSString *type;
@property (nonatomic, strong, nullable) NSNumber *value;
@property (nonatomic, copy, nullable)   NSString *vendor;
@property (nonatomic, copy, nullable)   NSDictionary<NSString*, id> *ext;

- (instancetype)initWithDictionary:(NSDictionary *)dict;
- (NSDictionary *)toJSONDictionary;
@end

@interface BRBanner : NSObject
@property (nonatomic, copy, nullable)   NSArray<NSDictionary *> *format;
@property (nonatomic, strong, nullable) NSNumber *w;
@property (nonatomic, strong, nullable) NSNumber *h;
@property (nonatomic, strong, nullable) NSNumber *wmax;
@property (nonatomic, strong, nullable) NSNumber *hmax;
@property (nonatomic, strong, nullable) NSNumber *wmin;
@property (nonatomic, strong, nullable) NSNumber *hmin;
@property (nonatomic, copy, nullable)   NSArray<NSNumber *> *btype;
@property (nonatomic, copy, nullable)   NSArray<NSNumber *> *battr;
@property (nonatomic, copy, nullable)   NSString *id;
@property (nonatomic, strong, nullable) NSNumber *pos;
@property (nonatomic, copy, nullable)   NSArray<NSString *> *mimes;
@property (nonatomic, strong, nullable) NSNumber *topframe;
@property (nonatomic, copy, nullable)   NSArray<NSNumber *> *expdir;
@property (nonatomic, copy, nullable)   NSArray<NSNumber *> *api;
@property (nonatomic, copy, nullable)   NSArray<NSString *> *iframebuster;
@property (nonatomic, strong, nullable) NSNumber *vcm;
@property (nonatomic, copy, nullable)   NSDictionary<NSString*, id> *ext;

- (instancetype)initWithDictionary:(NSDictionary *)dict;
- (NSDictionary *)toJSONDictionary;
@end

@interface BRVideo : NSObject
@property (nonatomic, copy, nullable)   NSArray<NSString *> *mimes;
@property (nonatomic, strong, nullable) NSNumber *minduration;
@property (nonatomic, strong, nullable) NSNumber *maxduration;
@property (nonatomic, copy, nullable)   NSArray<NSNumber *> *protocols;
@property (nonatomic, strong, nullable) NSNumber *protocol;
@property (nonatomic, strong, nullable) NSNumber *w;
@property (nonatomic, strong, nullable) NSNumber *h;
@property (nonatomic, strong, nullable) NSNumber *startdelay;
@property (nonatomic, strong, nullable) NSNumber *placement;
@property (nonatomic, strong, nullable) NSNumber *linearity;
@property (nonatomic, strong, nullable) NSNumber *skip;
@property (nonatomic, strong, nullable) NSNumber *skipmin;
@property (nonatomic, strong, nullable) NSNumber *skipafter;
@property (nonatomic, strong, nullable) NSNumber *sequence;
@property (nonatomic, copy, nullable)   NSArray<NSNumber *> *battr;
@property (nonatomic, strong, nullable) NSNumber *maxextended;
@property (nonatomic, strong, nullable) NSNumber *minbitrate;
@property (nonatomic, strong, nullable) NSNumber *maxbitrate;
@property (nonatomic, strong, nullable) NSNumber *boxingallowed;
@property (nonatomic, copy, nullable)   NSArray<NSNumber *> *playbackmethod;
@property (nonatomic, strong, nullable) NSNumber *playbackend;
@property (nonatomic, copy, nullable)   NSArray<NSNumber *> *delivery;
@property (nonatomic, strong, nullable) NSNumber *pos;
@property (nonatomic, copy, nullable)   NSArray<BRBanner *> *companionad;
@property (nonatomic, copy, nullable)   NSDictionary<NSString*, id> *ext;

- (instancetype)initWithDictionary:(NSDictionary *)dict;
- (NSDictionary *)toJSONDictionary;
@end

@interface BRAudio : NSObject
@property (nonatomic, copy, nullable)   NSArray<NSString *> *mimes;
@property (nonatomic, strong, nullable) NSNumber *minduration;
@property (nonatomic, strong, nullable) NSNumber *maxduration;
@property (nonatomic, copy, nullable)   NSArray<NSNumber *> *protocols;
@property (nonatomic, strong, nullable) NSNumber *startdelay;
@property (nonatomic, strong, nullable) NSNumber *sequence;
@property (nonatomic, copy, nullable)   NSArray<NSNumber *> *battr;
@property (nonatomic, strong, nullable) NSNumber *maxextended;
@property (nonatomic, strong, nullable) NSNumber *minbitrate;
@property (nonatomic, strong, nullable) NSNumber *maxbitrate;
@property (nonatomic, copy, nullable)   NSArray<NSNumber *> *delivery;
@property (nonatomic, copy, nullable)   NSArray<BRBanner *> *companionad;
@property (nonatomic, copy, nullable)   NSArray<NSNumber *> *api;
@property (nonatomic, copy, nullable)   NSArray<NSNumber *> *companiontype;
@property (nonatomic, copy, nullable)   NSDictionary<NSString*, id> *ext;

- (instancetype)initWithDictionary:(NSDictionary *)dict;
- (NSDictionary *)toJSONDictionary;
@end

@interface BRApp : NSObject
@property (nonatomic, copy, nullable)   NSString *id;
@property (nonatomic, copy, nullable)   NSString *name;
@property (nonatomic, copy, nullable)   NSString *bundle;
@property (nonatomic, copy, nullable)   NSString *domain;
@property (nonatomic, copy, nullable)   NSString *storeurl;
@property (nonatomic, copy, nullable)   NSArray<NSString *> *cat;
@property (nonatomic, copy, nullable)   NSArray<NSString *> *sectioncat;
@property (nonatomic, copy, nullable)   NSArray<NSString *> *pagecat;
@property (nonatomic, copy, nullable)   NSString *ver;
@property (nonatomic, strong, nullable) NSNumber *privacypolicy;
@property (nonatomic, strong, nullable) NSNumber *paid;
@property (nonatomic, strong, nullable) BRPublisher *publisher;
@property (nonatomic, strong, nullable) BRContent *content;
@property (nonatomic, copy, nullable)   NSString *keywords;
@property (nonatomic, copy, nullable)   NSDictionary<NSString*, id> *ext;

- (instancetype)initWithDictionary:(NSDictionary *)dict;
- (NSDictionary *)toJSONDictionary;
@end

@interface BRDevice : NSObject
@property (nonatomic, copy, nullable)   NSString *ua;
@property (nonatomic, strong, nullable) BRGeo *geo;
@property (nonatomic, strong, nullable) NSNumber *dnt;
@property (nonatomic, strong, nullable) NSNumber *lmt;
@property (nonatomic, copy, nullable)   NSString *ip;
@property (nonatomic, copy, nullable)   NSString *ipv6;
@property (nonatomic, strong, nullable) NSNumber *devicetype;
@property (nonatomic, copy, nullable)   NSString *make;
@property (nonatomic, copy, nullable)   NSString *model;
@property (nonatomic, copy, nullable)   NSString *os;
@property (nonatomic, copy, nullable)   NSString *osv;
@property (nonatomic, copy, nullable)   NSString *hwv;
@property (nonatomic, strong, nullable) NSNumber *w;
@property (nonatomic, strong, nullable) NSNumber *h;
@property (nonatomic, strong, nullable) NSNumber *ppi;
@property (nonatomic, strong, nullable) NSNumber *pxratio;
@property (nonatomic, strong, nullable) NSNumber *js;
@property (nonatomic, strong, nullable) NSNumber *geofetch;
@property (nonatomic, copy, nullable)   NSString *flashver;
@property (nonatomic, copy, nullable)   NSString *language;
@property (nonatomic, copy, nullable)   NSString *carrier;
@property (nonatomic, copy, nullable)   NSString *mccmnc;
@property (nonatomic, strong, nullable) NSNumber *connectiontype;
@property (nonatomic, copy, nullable)   NSString *ifa;
@property (nonatomic, copy, nullable)   NSString *didsha1;
@property (nonatomic, copy, nullable)   NSString *didmd5;
@property (nonatomic, copy, nullable)   NSString *dpidsha1;
@property (nonatomic, copy, nullable)   NSString *dpidmd5;
@property (nonatomic, copy, nullable)   NSString *macsha1;
@property (nonatomic, copy, nullable)   NSString *macmd5;
@property (nonatomic, copy, nullable)   NSDictionary<NSString*, id> *ext;

- (instancetype)initWithDictionary:(NSDictionary *)dict;
- (NSDictionary *)toJSONDictionary;
@end

@interface BRGeo : NSObject
@property (nonatomic, strong, nullable) NSNumber *lat;
@property (nonatomic, strong, nullable) NSNumber *lon;
@property (nonatomic, strong, nullable) NSNumber *type;
@property (nonatomic, strong, nullable) NSNumber *accuracy;
@property (nonatomic, strong, nullable) NSNumber *lastfix;
@property (nonatomic, strong, nullable) NSNumber *ipservice;
@property (nonatomic, copy, nullable)   NSString *country;
@property (nonatomic, copy, nullable)   NSString *region;
@property (nonatomic, copy, nullable)   NSString *regionfips104;
@property (nonatomic, copy, nullable)   NSString *metro;
@property (nonatomic, copy, nullable)   NSString *city;
@property (nonatomic, copy, nullable)   NSString *zip;
@property (nonatomic, strong, nullable) NSNumber *utcoffset;
@property (nonatomic, copy, nullable)   NSDictionary<NSString*, id> *ext;

- (instancetype)initWithDictionary:(NSDictionary *)dict;
- (NSDictionary *)toJSONDictionary;
@end

@interface BRUser : NSObject
@property (nonatomic, copy, nullable)   NSString *id;
@property (nonatomic, copy, nullable)   NSString *buyeruid;
@property (nonatomic, strong, nullable) NSNumber *yob;
@property (nonatomic, copy, nullable)   NSString *gender;
@property (nonatomic, copy, nullable)   NSString *keywords;
@property (nonatomic, copy, nullable)   NSString *customdata;
@property (nonatomic, strong, nullable) BRGeo *geo;
@property (nonatomic, copy, nullable)   NSArray<BRData *> *data;
@property (nonatomic, copy, nullable)   NSDictionary<NSString*, id> *ext;

- (instancetype)initWithDictionary:(NSDictionary *)dict;
- (NSDictionary *)toJSONDictionary;
@end

@interface BRRegs : NSObject
@property (nonatomic, strong, nullable) NSNumber *coppa;
@property (nonatomic, copy, nullable)   NSDictionary<NSString*, id> *ext;

- (instancetype)initWithDictionary:(NSDictionary *)dict;
- (NSDictionary *)toJSONDictionary;
@end

@interface BRSource : NSObject
@property (nonatomic, strong, nullable) NSNumber *fd;
@property (nonatomic, copy, nullable)   NSString *tid;
@property (nonatomic, copy, nullable)   NSString *pchain;
@property (nonatomic, strong, nullable) BRSourceExt *ext;

- (instancetype)initWithDictionary:(NSDictionary *)dict;
- (NSDictionary *)toJSONDictionary;
@end

@interface BRSourceExt : NSObject
@property (nonatomic, strong, nullable) BRSchain *schain;

- (instancetype)initWithDictionary:(NSDictionary *)dict;
- (NSDictionary *)toJSONDictionary;
@end

@interface BRSchain : NSObject
@property (nonatomic, copy, nullable)   NSString *ver;
@property (nonatomic, strong, nullable) NSNumber *complete;
@property (nonatomic, copy, nullable)   NSArray<BRSchainNode *> *nodes;

- (instancetype)initWithDictionary:(NSDictionary *)dict;
- (NSDictionary *)toJSONDictionary;
@end

@interface BRSchainNode : NSObject
@property (nonatomic, copy, nullable)   NSString *asi;
@property (nonatomic, copy, nullable)   NSString *sid;
@property (nonatomic, strong, nullable) NSNumber *hp;
@property (nonatomic, copy, nullable)   NSString *name;

- (instancetype)initWithDictionary:(NSDictionary *)dict;
- (NSDictionary *)toJSONDictionary;
@end

@interface BRSite : NSObject
@property (nonatomic, copy, nullable)   NSString *id;
@property (nonatomic, copy, nullable)   NSString *name;
@property (nonatomic, copy, nullable)   NSString *domain;
@property (nonatomic, copy, nullable)   NSArray<NSString *> *cat;
@property (nonatomic, copy, nullable)   NSArray<NSString *> *sectioncat;
@property (nonatomic, copy, nullable)   NSArray<NSString *> *pagecat;
@property (nonatomic, copy, nullable)   NSString *page;
@property (nonatomic, copy, nullable)   NSString *ref;
@property (nonatomic, copy, nullable)   NSString *search;
@property (nonatomic, strong, nullable) NSNumber *mobile;
@property (nonatomic, strong, nullable) NSNumber *privacypolicy;
@property (nonatomic, strong, nullable) BRPublisher *publisher;
@property (nonatomic, strong, nullable) BRContent *content;
@property (nonatomic, copy, nullable)   NSString *keywords;
@property (nonatomic, copy, nullable)   NSDictionary<NSString*, id> *ext;

- (instancetype)initWithDictionary:(NSDictionary *)dict;
- (NSDictionary *)toJSONDictionary;
@end

@interface BRPublisher : NSObject
@property (nonatomic, copy, nullable)   NSString *id;
@property (nonatomic, copy, nullable)   NSString *name;
@property (nonatomic, copy, nullable)   NSArray<NSString *> *cat;
@property (nonatomic, copy, nullable)   NSString *domain;
@property (nonatomic, copy, nullable)   NSDictionary<NSString*, id> *ext;

- (instancetype)initWithDictionary:(NSDictionary *)dict;
- (NSDictionary *)toJSONDictionary;
@end

@interface BRContent : NSObject
@property (nonatomic, copy, nullable)   NSString *id;
@property (nonatomic, strong, nullable) NSNumber *episode;
@property (nonatomic, copy, nullable)   NSString *title;
@property (nonatomic, copy, nullable)   NSString *series;
@property (nonatomic, copy, nullable)   NSString *season;
@property (nonatomic, copy, nullable)   NSString *artist;
@property (nonatomic, copy, nullable)   NSString *genre;
@property (nonatomic, copy, nullable)   NSString *album;
@property (nonatomic, copy, nullable)   NSString *isrc;
@property (nonatomic, strong, nullable) BRProducer *producer;
@property (nonatomic, copy, nullable)   NSString *url;
@property (nonatomic, copy, nullable)   NSArray<NSString *> *cat;
@property (nonatomic, strong, nullable) NSNumber *prodq;
@property (nonatomic, strong, nullable) NSNumber *videoquality;
@property (nonatomic, strong, nullable) NSNumber *context;
@property (nonatomic, copy, nullable)   NSString *contentrating;
@property (nonatomic, copy, nullable)   NSString *userrating;
@property (nonatomic, strong, nullable) NSNumber *qagmediarating;
@property (nonatomic, copy, nullable)   NSString *keywords;
@property (nonatomic, strong, nullable) NSNumber *livestream;
@property (nonatomic, strong, nullable) NSNumber *sourcerelationship;
@property (nonatomic, strong, nullable) NSNumber *len;
@property (nonatomic, copy, nullable)   NSString *language;
@property (nonatomic, strong, nullable) NSNumber *embeddable;
@property (nonatomic, copy, nullable)   NSArray<BRData *> *data;
@property (nonatomic, copy, nullable)   NSDictionary<NSString*, id> *ext;

- (instancetype)initWithDictionary:(NSDictionary *)dict;
- (NSDictionary *)toJSONDictionary;
@end

@interface BRData : NSObject
@property (nonatomic, copy, nullable)   NSString *id;
@property (nonatomic, copy, nullable)   NSString *name;
@property (nonatomic, copy, nullable)   NSArray<BRSegment *> *segment;
@property (nonatomic, copy, nullable)   NSDictionary<NSString*, id> *ext;

- (instancetype)initWithDictionary:(NSDictionary *)dict;
- (NSDictionary *)toJSONDictionary;
@end

@interface BRSegment : NSObject
@property (nonatomic, copy, nullable)   NSString *id;
@property (nonatomic, copy, nullable)   NSString *name;
@property (nonatomic, copy, nullable)   NSString *value;
@property (nonatomic, copy, nullable)   NSDictionary<NSString*, id> *ext;

- (instancetype)initWithDictionary:(NSDictionary *)dict;
- (NSDictionary *)toJSONDictionary;
@end

@interface BRProducer : NSObject
@property (nonatomic, copy, nullable)   NSString *id;
@property (nonatomic, copy, nullable)   NSString *name;
@property (nonatomic, copy, nullable)   NSArray<NSString *> *cat;
@property (nonatomic, copy, nullable)   NSString *domain;
@property (nonatomic, copy, nullable)   NSDictionary<NSString*, id> *ext;

- (instancetype)initWithDictionary:(NSDictionary *)dict;
- (NSDictionary *)toJSONDictionary;
@end

NS_ASSUME_NONNULL_END
