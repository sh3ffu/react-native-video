//
//  RNPhotosFrameworkExtension.h
//  react-native-video
//
//  Created by Cristi Conecini on 21.02.22.
//
#import <Foundation/Foundation.h>
#import <React/RCTView.h>
#import <React/RCTConvert.h>

@import Photos;
@interface RNPhotosFrameworkExtension : NSObject
typedef void (^RNPFVIdeoLoadCompleteBlock) (NSDictionary *source, AVAsset *asset, PHImageRequestID imageRequestID);

-(NSString *)startLoadingPhotosAsset:(NSDictionary *)source bufferingCallback:(RCTBubblingEventBlock) onVideoBuffer andReactTag:(NSString *)reactTag andCompleteBlock:(RNPFVIdeoLoadCompleteBlock)completeBlock;

@property (nonatomic, strong) NSString *loadedPhotosLocalIdentifier;
@property (nonatomic) PHImageRequestID imageRequestID;

@end
