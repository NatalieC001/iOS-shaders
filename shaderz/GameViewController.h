//
//  GameViewController.h
//  shaderz
//

//  Copyright (c) 2016 Nicholas Shelton. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <SceneKit/SceneKit.h>
@import CoreMotion;


@interface GameViewController<SCNSceneRendererDelegate> : UIViewController

{
    float _rotation;
    GLKMatrix4 _rotMatrix;
    GLKVector3 _anchor_position;
    GLKVector3 _current_position;
    GLKQuaternion _quatStart;
    GLKQuaternion _quat;
    
    BOOL _slerping;
    float _slerpCur;
    float _slerpMax;
    GLKQuaternion _slerpStart;
    GLKQuaternion _slerpEnd;
    
    GLKVector3 _translation;
    float _camDistance;
}




@property (strong, nonatomic) IBOutlet UISlider *scaleSlider;

@property (nonatomic, weak) SCNView*        scnView;
@property (nonatomic, strong) NSArray*      techniques;
@property (nonatomic, weak) SCNNode*        cameraNode;
@property (nonatomic) GLKMatrix4            cameraView;



//
- (IBAction)sliderChanged:(id)sender;
//
@end
