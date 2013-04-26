//
//  Wallpaper.h
//  Pic-folio
//
//  Created by Oski on 9/20/12.
//  Copyright (c) 2012 Oscar Edmond. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Wallpaper : NSManagedObject

@property (nonatomic, retain) NSString * title;
@property (nonatomic, retain) NSNumber * isFavorite;

@end
