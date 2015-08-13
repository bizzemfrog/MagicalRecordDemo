//
//  MSGContact+CoreDataProperties.h
//  MagicalRecordDemo
//
//  Created by John Donley on 8/13/15.
//  Copyright © 2015 john. All rights reserved.
//
//  Delete this file and regenerate it using "Create NSManagedObject Subclass…"
//  to keep your implementation up to date with your model.
//

#import "MSGContact.h"

NS_ASSUME_NONNULL_BEGIN

@interface MSGContact (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *name;
@property (nullable, nonatomic, retain) NSDate *timestamp;
@property (nullable, nonatomic, retain) MSGContactPhone *contactPhones;

@end

NS_ASSUME_NONNULL_END
