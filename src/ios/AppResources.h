#import <Cordova/CDVPlugin.h>

@interface AppResources : CDVPlugin

- (void)getAppName:(CDVInvokedUrlCommand*)command;

- (void)getPackageName:(CDVInvokedUrlCommand*)command;

- (void)getVersionNumber:(CDVInvokedUrlCommand*)command;

- (void)getVersionCode:(CDVInvokedUrlCommand*)command;

- (void)getResources:(CDVInvokedUrlCommand*)command;

@end
