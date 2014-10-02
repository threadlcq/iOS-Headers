//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NEConfigurationLegacySupport.h"
#import "NEPrettyDescription.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface NEProfileIngestionPayloadInfo : NSObject <NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying>
{
    BOOL _isSetAside;
    BOOL _applicationCreated;
    NSString *_payloadProtocolType;
    NSString *_payloadUUID;
    NSString *_payloadOrganization;
    NSString *_profileOrganization;
    NSString *_profileIdentifier;
    NSString *_profileUUID;
}

+ (BOOL)supportsSecureCoding;
@property BOOL applicationCreated; // @synthesize applicationCreated=_applicationCreated;
@property BOOL isSetAside; // @synthesize isSetAside=_isSetAside;
@property(copy) NSString *profileUUID; // @synthesize profileUUID=_profileUUID;
@property(copy) NSString *profileIdentifier; // @synthesize profileIdentifier=_profileIdentifier;
@property(copy) NSString *profileOrganization; // @synthesize profileOrganization=_profileOrganization;
@property(copy) NSString *payloadOrganization; // @synthesize payloadOrganization=_payloadOrganization;
@property(copy) NSString *payloadUUID; // @synthesize payloadUUID=_payloadUUID;
@property(copy) NSString *payloadProtocolType; // @synthesize payloadProtocolType=_payloadProtocolType;
- (void).cxx_destruct;
- (id)copyLegacyDictionary;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)descriptionWithIndent:(int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
