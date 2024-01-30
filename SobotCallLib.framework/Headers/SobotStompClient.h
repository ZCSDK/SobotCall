//
//  SobotStompClient.h
//  SobotStompClient
//
//  Created by Jeff Mesnil on 09/10/2013.
//  Modified by Robin Guldener on 17/03/2015
//  Copyright (c) 2013 Jeff Mesnil & Robin Guldener. All rights reserved.
//

#import <Foundation/Foundation.h>

#pragma mark Frame headers

#define SobotkHeaderAcceptVersion @"accept-version"
#define SobotkHeaderAck           @"ack"
#define SobotkHeaderContentLength @"content-length"
#define SobotkHeaderDestination   @"destination"
#define SobotkHeaderHeartBeat     @"heart-beat"
#define SobotkHeaderHost          @"host"
#define SobotkHeaderID            @"id"
#define SobotkHeaderLogin         @"login"
#define SobotkHeaderMessage       @"message"
#define SobotkHeaderPasscode      @"passcode"
#define SobotkHeaderReceipt       @"receipt"
#define SobotkHeaderReceiptID     @"receipt-id"
#define SobotkHeaderSession       @"session"
#define SobotkHeaderSubscription  @"subscription"
#define SobotkHeaderTransaction   @"transaction"

#pragma mark Ack Header Values

#define kSobotAckAuto             @"auto"
#define kSobotAckClient           @"client"
#define kSobotAckClientIndividual @"client-individual"

@class SobotStompFrame;
@class SobotStompMessage;

typedef void (^SobotStompFrameHandler)(SobotStompFrame *frame);
typedef void (^SobotStompMessageHandler)(SobotStompMessage *message);

#pragma mark SobotStomp Frame

@interface SobotStompFrame : NSObject

@property (nonatomic, copy, readonly) NSString *command;
@property (nonatomic, copy, readonly) NSDictionary *headers;
@property (nonatomic, copy, readonly) NSString *body;

@end

#pragma mark SobotStomp Message

@interface SobotStompMessage : SobotStompFrame

- (void)ack;
- (void)ack:(NSDictionary *)theHeaders;
- (void)nack;
- (void)nack:(NSDictionary *)theHeaders;

@end

#pragma mark SobotStomp Subscription

@interface SobotStompSubscription : NSObject

@property (nonatomic, copy, readonly) NSString *identifier;

- (void)unsubscribe;

@end

#pragma mark SobotStomp Transaction

@interface SobotStompTransaction : NSObject

@property (nonatomic, copy, readonly) NSString *identifier;

- (void)commit;
- (void)abort;

@end

@protocol SobotStompClientDelegate

@optional
- (void) websocketDidDisconnect: (NSError *)error;
@end

#pragma mark SobotStomp Client

@interface SobotStompClient : NSObject

@property (nonatomic, copy) SobotStompFrameHandler receiptHandler;
@property (nonatomic, copy) void (^errorHandler)(NSError *error);
@property (nonatomic, assign) BOOL connected;
@property (nonatomic, readonly) BOOL heartbeatActivated;
@property (nonatomic, weak) NSObject<SobotStompClientDelegate> *delegate;

- (id)initWithURL:(NSURL *)theUrl webSocketHeaders:(NSDictionary *)headers useHeartbeat:(BOOL)heartbeat;

- (void)connectWithLogin:(NSString *)login
                passcode:(NSString *)passcode
       completionHandler:(void (^)(SobotStompFrame *connectedFrame, NSError *error))completionHandler;
- (void)connectWithHeaders:(NSDictionary *)headers
         completionHandler:(void (^)(SobotStompFrame *connectedFrame, NSError *error))completionHandler;

- (void)sendTo:(NSString *)destination
          body:(NSString *)body;
- (void)sendTo:(NSString *)destination
       headers:(NSDictionary *)headers
          body:(NSString *)body;

- (SobotStompSubscription *)subscribeTo:(NSString *)destination
                    messageHandler:(SobotStompMessageHandler)handler;
- (SobotStompSubscription *)subscribeTo:(NSString *)destination
                           headers:(NSDictionary *)headers
                    messageHandler:(SobotStompMessageHandler)handler;

- (SobotStompTransaction *)begin;
- (SobotStompTransaction *)begin:(NSString *)identifier;

- (void)disconnect;
- (void)disconnect:(void (^)(NSError *error))completionHandler;

@end
