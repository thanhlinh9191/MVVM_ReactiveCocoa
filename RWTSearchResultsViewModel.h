//
//  RWTSearchResultsViewModel.h
//  RWTFlickrSearch
//
//  Created by ThanhLinh on 9/16/14.
//  Copyright (c) 2014 Colin Eberhardt. All rights reserved.
//

@import Foundation;
#import "RWTViewModelServices.h"
#import "RWTFlickrSearchResults.h"

@interface RWTSearchResultsViewModel : NSObject
- (instancetype)initWithSearchResults:(RWTFlickrSearchResults *)results services:(id<RWTViewModelServices>)services;

@property (strong, nonatomic) NSString *title;
@property (strong, nonatomic) NSArray *searchResults;
@end
