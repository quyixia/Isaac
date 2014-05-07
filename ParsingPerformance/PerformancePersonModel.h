// © [2014] LinkedIn Corp. All rights reserved.
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at  http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.

#import <Foundation/Foundation.h>

@interface PerformancePersonModel : NSObject

@property (nonatomic, strong) NSString *personID;
@property (nonatomic, strong) NSString *guid;
@property (nonatomic) BOOL isActive;
@property (nonatomic) int age;
@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *about;
@property (nonatomic, strong) NSArray *tags;
@property (nonatomic, strong) NSArray *friends;

// Used as a comparison
// Not necessary for this library to work, but used for testing
- (void)setupWithData:(NSDictionary *)data;

@end