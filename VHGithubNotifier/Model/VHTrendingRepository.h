//
//  VHTrendingRepository.h
//  VHGithubNotifier
//
//  Created by viktorhuang on 2017/2/21.
//  Copyright © 2017年 黄伟平. All rights reserved.
//

@interface VHTrendingRepository : NSObject

@property (nonatomic, strong) NSString *url;
@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *ownerAccount;
@property (nonatomic, strong) NSString *repositoryDescription;
@property (nonatomic, strong) NSString *languageName;
@property (nonatomic, strong) NSColor *languageColor;
@property (nonatomic, strong) NSString *starNumber;
@property (nonatomic, strong) NSString *forkNumber;
@property (nonatomic, strong) NSArray<NSString *> *contributorAvatars;
@property (nonatomic, strong) NSString *trendingTip;

- (BOOL)isValid;

@end
