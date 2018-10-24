/*
 *
 * Copyright 2018 gRPC authors.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */
#import "GRPCChannelFactory.h"

@class GRPCChannel;
typedef struct stream_engine stream_engine;

NS_ASSUME_NONNULL_BEGIN

@interface GRPCCronetChannelFactory : NSObject<GRPCChannelFactory>

+ (instancetype _Nullable)sharedInstance;

- (grpc_channel * _Nullable)createChannelWithHost:(NSString *)host
                                               channelArgs:(NSDictionary * _Nullable)args;

- (instancetype _Nullable)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
