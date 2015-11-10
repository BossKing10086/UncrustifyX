// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to UXOption.h instead.

#import <CoreData/CoreData.h>
#import "UXBaseManagedObject.h"

extern const struct UXOptionAttributes {
	__unsafe_unretained NSString *code;
	__unsafe_unretained NSString *createdAt;
	__unsafe_unretained NSString *defaultValue;
	__unsafe_unretained NSString *name;
	__unsafe_unretained NSString *optionDescription;
	__unsafe_unretained NSString *updatedAt;
} UXOptionAttributes;

extern const struct UXOptionRelationships {
	__unsafe_unretained NSString *category;
	__unsafe_unretained NSString *configOption;
	__unsafe_unretained NSString *languages;
	__unsafe_unretained NSString *subcategory;
	__unsafe_unretained NSString *valueType;
} UXOptionRelationships;

@class UXCategory;
@class UXPersistentConfigOption;
@class UXLanguage;
@class UXSubcategory;
@class UXValueType;

@interface UXOptionID : NSManagedObjectID {}
@end

@interface _UXOption : UXBaseManagedObject {}
+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_;
+ (NSString*)entityName;
+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
@property (nonatomic, readonly, strong) UXOptionID* objectID;

@property (nonatomic, strong) NSString* code;

//- (BOOL)validateCode:(id*)value_ error:(NSError**)error_;

@property (nonatomic, strong) NSDate* createdAt;

//- (BOOL)validateCreatedAt:(id*)value_ error:(NSError**)error_;

@property (nonatomic, strong) NSString* defaultValue;

//- (BOOL)validateDefaultValue:(id*)value_ error:(NSError**)error_;

@property (nonatomic, strong) NSString* name;

//- (BOOL)validateName:(id*)value_ error:(NSError**)error_;

@property (nonatomic, strong) NSString* optionDescription;

//- (BOOL)validateOptionDescription:(id*)value_ error:(NSError**)error_;

@property (nonatomic, strong) NSDate* updatedAt;

//- (BOOL)validateUpdatedAt:(id*)value_ error:(NSError**)error_;

@property (nonatomic, strong) UXCategory *category;

//- (BOOL)validateCategory:(id*)value_ error:(NSError**)error_;

@property (nonatomic, strong) UXPersistentConfigOption *configOption;

//- (BOOL)validateConfigOption:(id*)value_ error:(NSError**)error_;

@property (nonatomic, strong) NSSet *languages;

- (NSMutableSet*)languagesSet;

@property (nonatomic, strong) UXSubcategory *subcategory;

//- (BOOL)validateSubcategory:(id*)value_ error:(NSError**)error_;

@property (nonatomic, strong) UXValueType *valueType;

//- (BOOL)validateValueType:(id*)value_ error:(NSError**)error_;

@end

@interface _UXOption (LanguagesCoreDataGeneratedAccessors)
- (void)addLanguages:(NSSet*)value_;
- (void)removeLanguages:(NSSet*)value_;
- (void)addLanguagesObject:(UXLanguage*)value_;
- (void)removeLanguagesObject:(UXLanguage*)value_;

@end

@interface _UXOption (CoreDataGeneratedPrimitiveAccessors)

- (NSString*)primitiveCode;
- (void)setPrimitiveCode:(NSString*)value;

- (NSDate*)primitiveCreatedAt;
- (void)setPrimitiveCreatedAt:(NSDate*)value;

- (NSString*)primitiveDefaultValue;
- (void)setPrimitiveDefaultValue:(NSString*)value;

- (NSString*)primitiveName;
- (void)setPrimitiveName:(NSString*)value;

- (NSString*)primitiveOptionDescription;
- (void)setPrimitiveOptionDescription:(NSString*)value;

- (NSDate*)primitiveUpdatedAt;
- (void)setPrimitiveUpdatedAt:(NSDate*)value;

- (UXCategory*)primitiveCategory;
- (void)setPrimitiveCategory:(UXCategory*)value;

- (UXPersistentConfigOption*)primitiveConfigOption;
- (void)setPrimitiveConfigOption:(UXPersistentConfigOption*)value;

- (NSMutableSet*)primitiveLanguages;
- (void)setPrimitiveLanguages:(NSMutableSet*)value;

- (UXSubcategory*)primitiveSubcategory;
- (void)setPrimitiveSubcategory:(UXSubcategory*)value;

- (UXValueType*)primitiveValueType;
- (void)setPrimitiveValueType:(UXValueType*)value;

@end
