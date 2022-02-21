//
//  CustomObject.h
//  BridgingObjC_Into_Swift
//
//  Created by Sai Ashish Darapureddy on 21/02/22.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CustomObject : NSObject

@property (strong, nonatomic) id someProperty;

- (void) someMethod;

@end

NS_ASSUME_NONNULL_END
