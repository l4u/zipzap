//
//  ZZZipEntryWriter.h
//  zipzap
//
//  Created by Glen Low on 6/10/12.
//  Copyright (c) 2012, Pixelglow Software. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol ZZChannelOutput;

@protocol ZZArchiveEntryWriter

- (uint32_t)offsetToLocalFileEnd;
- (BOOL)writeLocalFileToChannelOutput:(id<ZZChannelOutput>)channelOutput;
- (void)writeCentralFileHeaderToChannelOutput:(id<ZZChannelOutput>)channelOutput;

@end
