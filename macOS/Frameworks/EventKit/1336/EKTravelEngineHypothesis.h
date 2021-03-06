//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <EventKit/NSCopying-Protocol.h>
#import <EventKit/NSMutableCopying-Protocol.h>
#import <EventKit/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

@interface EKTravelEngineHypothesis : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    int _transportType;
    NSDate *_conservativeDepartureDate;
    double _conservativeTravelTime;
    NSDate *_suggestedDepartureDate;
    double _estimatedTravelTime;
    NSDate *_aggressiveDepartureDate;
    double _aggressiveTravelTime;
    NSString *_routeName;
    BOOL _supportsLiveTraffic;
    unsigned long long _currentTrafficDensity;
    NSString *_trafficDensityDescription;
    long long _travelState;
}

+ (id)syntheticHypothesisWithStartDate:(id)arg1 conservativeTravelTime:(double)arg2 estimatedTravelTime:(double)arg3 aggressiveTravelTime:(double)arg4;
+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) long long travelState; // @synthesize travelState=_travelState;
@property(readonly, copy, nonatomic) NSString *trafficDensityDescription; // @synthesize trafficDensityDescription=_trafficDensityDescription;
@property(readonly, nonatomic) unsigned long long currentTrafficDensity; // @synthesize currentTrafficDensity=_currentTrafficDensity;
@property(readonly, nonatomic) BOOL supportsLiveTraffic; // @synthesize supportsLiveTraffic=_supportsLiveTraffic;
@property(readonly, copy, nonatomic) NSString *routeName; // @synthesize routeName=_routeName;
@property(readonly, nonatomic) double aggressiveTravelTime; // @synthesize aggressiveTravelTime=_aggressiveTravelTime;
@property(readonly, copy, nonatomic) NSDate *aggressiveDepartureDate; // @synthesize aggressiveDepartureDate=_aggressiveDepartureDate;
@property(readonly, nonatomic) double estimatedTravelTime; // @synthesize estimatedTravelTime=_estimatedTravelTime;
@property(readonly, copy, nonatomic) NSDate *suggestedDepartureDate; // @synthesize suggestedDepartureDate=_suggestedDepartureDate;
@property(readonly, nonatomic) double conservativeTravelTime; // @synthesize conservativeTravelTime=_conservativeTravelTime;
@property(readonly, copy, nonatomic) NSDate *conservativeDepartureDate; // @synthesize conservativeDepartureDate=_conservativeDepartureDate;
@property(readonly, nonatomic) int transportType; // @synthesize transportType=_transportType;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqualToHypothesis:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithTransportType:(int)arg1 conservativeDepartureDate:(id)arg2 conservativeTravelTime:(double)arg3 suggestedDepartureDate:(id)arg4 estimatedTravelTime:(double)arg5 aggressiveDepartureDate:(id)arg6 aggressiveTravelTime:(double)arg7 routeName:(id)arg8 supportsLiveTraffic:(BOOL)arg9 currentTrafficDensity:(unsigned long long)arg10 trafficDensityDescription:(id)arg11 travelState:(long long)arg12;

@end

