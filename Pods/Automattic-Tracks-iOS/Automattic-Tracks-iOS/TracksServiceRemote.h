#import <Foundation/Foundation.h>
#import "TracksEvent.h"

@interface TracksServiceRemote : NSObject

@property (nonatomic, strong) NSString *tracksUserAgent;

- (void)sendBatchOfEvents:(NSArray *)events withSharedProperties:(NSDictionary *)properties completionHandler:(void (^)(NSError *error))completion;

@end
