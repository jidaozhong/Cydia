/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <ImageCapture/XXUnknownSuperclass.h>

@class NSMutableData, NSMutableArray;

@interface PTPDevicePropDescDataset : XXUnknownSuperclass {
	unsigned short _devicePropertyCode;	// 4 = 0x4
	unsigned short _dataTypeCode;	// 6 = 0x6
	unsigned char _readWriteAttribute;	// 8 = 0x8
	id _factoryDefaultValue;	// 12 = 0xc
	id _currentValue;	// 16 = 0x10
	unsigned char _formFlag;	// 20 = 0x14
	id _minimumValue;	// 24 = 0x18
	id _maximumValue;	// 28 = 0x1c
	id _stepSize;	// 32 = 0x20
	unsigned short _numberOfValues;	// 36 = 0x24
	NSMutableArray *_supportedValues;	// 40 = 0x28
	NSMutableData *_content;	// 44 = 0x2c
	BOOL _dirty;	// 48 = 0x30
	BOOL _readOnlyObject;	// 49 = 0x31
}
@property(retain) NSMutableData *content;	// G=0x255d9; S=0x265b5; converted property
@property(assign) unsigned short devicePropertyCode;	// G=0x25019; S=0x25029; converted property
@property(assign) unsigned short dataTypeCode;	// G=0x25049; S=0x25059; converted property
@property(assign) unsigned char readWriteAttribute;	// G=0x25079; S=0x25089; converted property
@property(retain) id factoryDefaultValue;	// G=0x250a9; S=0x253b1; converted property
@property(retain) id currentValue;	// G=0x250b9; S=0x25359; converted property
@property(assign) unsigned char formFlag;	// G=0x250c9; S=0x250d9; converted property
@property(retain) id minimumValue;	// G=0x250f9; S=0x25301; converted property
@property(retain) id maximumValue;	// G=0x25109; S=0x252a9; converted property
@property(retain) id stepSize;	// G=0x25119; S=0x25251; converted property
@property(assign) unsigned short numberOfValues;	// G=0x25129; S=0x25139; converted property
@property(retain) NSMutableArray *supportedValues;	// G=0x25159; S=0x251f9; converted property
- (id)init;	// 0x25169
// converted property setter: - (void)setContent:(id)content;	// 0x265b5
- (id)initWithData:(id)data;	// 0x264cd
- (id)initWithMutableData:(id)mutableData;	// 0x263fd
- (void)dealloc;	// 0x26339
- (void)updateContent;	// 0x25601
// converted property getter: - (id)content;	// 0x255d9
- (id)description;	// 0x25409
// converted property getter: - (unsigned short)devicePropertyCode;	// 0x25019
// converted property setter: - (void)setDevicePropertyCode:(unsigned short)code;	// 0x25029
// converted property getter: - (unsigned short)dataTypeCode;	// 0x25049
// converted property setter: - (void)setDataTypeCode:(unsigned short)code;	// 0x25059
// converted property getter: - (unsigned char)readWriteAttribute;	// 0x25079
// converted property setter: - (void)setReadWriteAttribute:(unsigned char)attribute;	// 0x25089
// converted property getter: - (id)factoryDefaultValue;	// 0x250a9
// converted property setter: - (void)setFactoryDefaultValue:(id)value;	// 0x253b1
// converted property getter: - (id)currentValue;	// 0x250b9
// converted property setter: - (void)setCurrentValue:(id)value;	// 0x25359
// converted property getter: - (unsigned char)formFlag;	// 0x250c9
// converted property setter: - (void)setFormFlag:(unsigned char)flag;	// 0x250d9
// converted property getter: - (id)minimumValue;	// 0x250f9
// converted property setter: - (void)setMinimumValue:(id)value;	// 0x25301
// converted property getter: - (id)maximumValue;	// 0x25109
// converted property setter: - (void)setMaximumValue:(id)value;	// 0x252a9
// converted property getter: - (id)stepSize;	// 0x25119
// converted property setter: - (void)setStepSize:(id)size;	// 0x25251
// converted property getter: - (unsigned short)numberOfValues;	// 0x25129
// converted property setter: - (void)setNumberOfValues:(unsigned short)values;	// 0x25139
// converted property getter: - (id)supportedValues;	// 0x25159
// converted property setter: - (void)setSupportedValues:(id)values;	// 0x251f9
@end