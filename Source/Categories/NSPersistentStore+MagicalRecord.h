//
//  NSPersistentStore+MagicalRecord.h
//
//  Created by Saul Mora on 3/11/10.
//  Copyright 2010 Magical Panda Software, LLC All rights reserved.
//

#import "MagicalRecordHelpers.h"

//#define kMagicalRecordDefaultStoreFileName @"CoreDataStore.sqlite"
extern NSString * const kMagicalRecordDefaultStoreFileName;

@interface NSPersistentStore (MagicalRecord)

+ (NSURL *) MR_defaultLocalStoreUrl;

+ (NSPersistentStore *) MR_defaultPersistentStore;
+ (void) MR_setDefaultPersistentStore:(NSPersistentStore *) store;

+ (NSURL *) MR_urlForStoreName:(NSString *)storeFileName;

@end


#ifdef MR_SHORTHAND

#define defaultLocalStoreUrl            MR_defaultLocalStoreUrl
#define defaultPersistentStore          MR_defaultPersistentStore
#define setDefaultPersistentStore       MR_setDefaultPersistentStore
#define urlForStoreName                 MR_urlForStoreName

#endif