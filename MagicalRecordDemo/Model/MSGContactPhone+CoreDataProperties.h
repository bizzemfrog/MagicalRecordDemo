//
//  MSGContactPhone+CoreDataProperties.h
//  MagicalRecordDemo
//
//  Created by John Donley on 8/13/15.
//  Copyright © 2015 john. All rights reserved.
//
//  Delete this file and regenerate it using "Create NSManagedObject Subclass…"
//  to keep your implementation up to date with your model.
//

#import "MSGContactPhone.h"

NS_ASSUME_NONNULL_BEGIN

@interface MSGContactPhone (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *phoneNumber;
@property (nullable, nonatomic, retain) MSGContact *contact;

@end

NS_ASSUME_NONNULL_END
