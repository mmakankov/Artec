//
//  Shop+CoreDataProperties.h
//  Artec
//
//  Created by Admin on 03.03.16.
//  Copyright © 2016 mmakankov. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Shop.h"

NS_ASSUME_NONNULL_BEGIN

@interface Shop (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *address;
@property (nullable, nonatomic, retain) NSString *workingTime;
@property (nullable, nonatomic, retain) NSString *name;
@property (nullable, nonatomic, retain) NSNumber *shopId;

@end

NS_ASSUME_NONNULL_END
