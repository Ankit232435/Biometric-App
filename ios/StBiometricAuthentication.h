
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNStBiometricAuthenticationSpec.h"

@interface StBiometricAuthentication : NSObject <NativeStBiometricAuthenticationSpec>
#else
#import <React/RCTBridgeModule.h>

@interface StBiometricAuthentication : NSObject <RCTBridgeModule>
#endif

@end
