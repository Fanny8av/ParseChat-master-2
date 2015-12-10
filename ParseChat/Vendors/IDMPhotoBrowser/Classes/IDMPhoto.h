//
//  IDMPhoto.h
//  IDMPhotoBrowser
//
//  Copyright (c) 2015 Fanny Ochoa
//

#import "IDMPhotoProtocol.h"

//-------------------------------------------------------------------------------------------------------------------------------------------------
@interface IDMPhoto : NSObject <IDMPhoto>
//-------------------------------------------------------------------------------------------------------------------------------------------------

@property (nonatomic, strong) NSURL *photoURL;

+ (IDMPhoto *)photoWithImage:(UIImage *)image;

+ (NSArray *)photosWithImages:(NSArray *)imagesArray;

- (id)initWithImage:(UIImage *)image;

@end

