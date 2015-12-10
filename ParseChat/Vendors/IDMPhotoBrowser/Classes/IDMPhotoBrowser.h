//
//  IDMPhotoBrowser.h
//  IDMPhotoBrowser
//
//  Copyright (c) 2015 Fanny Ochoa
//

#import <UIKit/UIKit.h>
#import <MessageUI/MessageUI.h>

#import "IDMPhoto.h"
#import "IDMPhotoProtocol.h"

//-------------------------------------------------------------------------------------------------------------------------------------------------
@interface IDMPhotoBrowser : UIViewController <UIScrollViewDelegate>
//-------------------------------------------------------------------------------------------------------------------------------------------------

@property (nonatomic, weak) UIImage *scaleImage;

@property (nonatomic) float animationDuration;

- (id)initWithPhotos:(NSArray *)photosArray;

- (void)reloadData;

@end
