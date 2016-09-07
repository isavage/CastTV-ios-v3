// Copyright 2016 Google Inc. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#import <UIKit/UIKit.h>
#import "MediaItem.h"

#define LOADING_IMAGE_URL @"http://9to5animations.com/wp-content/uploads/2016/03/loading-gif.gif"

#define EDIGITALPLACE_URL_POST @"login=arun07&pass=atyachar&products=any&url="
#define EDIGITALPLACE_URL @"http://247tvstream.com/amember-remote/"

@class GCKMediaInformation;

@interface MediaViewController : UIViewController<UIGestureRecognizerDelegate>

// The media to play.
@property(nonatomic, strong, readwrite) GCKMediaInformation *mediaInfo;
@property (weak, nonatomic) IBOutlet UIWebView *mediaWebView;
@property (nonatomic, retain) UIWebView *loadingImageView;
@property (nonatomic, strong) NSURL *streamURL;
@property (weak, nonatomic) IBOutlet UIButton *stream_1;
@property (weak, nonatomic) IBOutlet UIButton *stream_2;
@property (weak, nonatomic) IBOutlet UIButton *stream_3;
@property (weak, nonatomic) IBOutlet UILabel *fetchLabel;

@property(nonatomic, strong, readwrite) MediaItem *media;
@property(nonatomic, strong, readwrite) GCKMediaInformation *mediaInfoNew;
@end
