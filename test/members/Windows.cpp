#include "Common.hpp"

#ifdef GEODE_IS_WINDOWS

using namespace geode::prelude;

GEODE_SIZE_CHECK(GJBaseGameLayer, 0x36b0);
GEODE_MEMBER_CHECK(GJBaseGameLayer, m_gameState, 0x1a8);
GEODE_MEMBER_CHECK(GJBaseGameLayer, m_level, 0x870);
GEODE_MEMBER_CHECK(GJBaseGameLayer, m_player1, 0xd98);
GEODE_MEMBER_CHECK(GJBaseGameLayer, m_player2, 0xda0);
GEODE_MEMBER_CHECK(GJBaseGameLayer, m_isPlatformer, 0x3096);
GEODE_MEMBER_CHECK(GJBaseGameLayer, m_unk2a50, 0x3160);
GEODE_MEMBER_CHECK(GJBaseGameLayer, m_unk2a84, 0x31f0);
GEODE_MEMBER_CHECK(GJBaseGameLayer, m_startPosObject, 0x3180);
GEODE_MEMBER_CHECK(GJBaseGameLayer, m_isPracticeMode, 0x31e8);
GEODE_MEMBER_CHECK(GJBaseGameLayer, m_endPortal, 0x3220);
GEODE_MEMBER_CHECK(GJBaseGameLayer, m_uiLayer, 0x3468);
GEODE_MEMBER_CHECK(GJBaseGameLayer, m_queuedButtons, 0x32f8);

GEODE_SIZE_CHECK(PlayLayer, 0x3998);
GEODE_MEMBER_CHECK(PlayLayer, m_checkpointArray, 0x37a0);
GEODE_MEMBER_CHECK(PlayLayer, m_circleWaveArray, 0x37d0);
GEODE_MEMBER_CHECK(PlayLayer, m_attemptLabel, 0x37f0);
GEODE_MEMBER_CHECK(PlayLayer, m_progressBar, 0x3808);
GEODE_MEMBER_CHECK(PlayLayer, m_hasCompletedLevel, 0x3895);
GEODE_MEMBER_CHECK(PlayLayer, m_isPaused, 0x38ff);
GEODE_MEMBER_CHECK(PlayLayer, m_tryPlaceCheckpoint, 0x3974);
GEODE_MEMBER_CHECK(PlayLayer, m_triggeredCheckpointGameObject, 0x3978);

GEODE_SIZE_CHECK(LevelEditorLayer, 0x39e8);
GEODE_MEMBER_CHECK(LevelEditorLayer, m_coinCount, 0x3754);
GEODE_MEMBER_CHECK(LevelEditorLayer, m_drawGridLayer, 0x37d8);

GEODE_SIZE_CHECK(DrawGridLayer, 0x280);
GEODE_MEMBER_CHECK(DrawGridLayer, m_editorLayer, 0x208);
GEODE_MEMBER_CHECK(DrawGridLayer, m_gridSize, 0x27c);

GEODE_SIZE_CHECK(GJGameState, 0x6C8);
GEODE_MEMBER_CHECK(GJGameState, m_cameraZoom, 0x0);
GEODE_MEMBER_CHECK(GJGameState, m_targetCameraZoom, 0x4);
GEODE_MEMBER_CHECK(GJGameState, m_cameraOffset, 0x8);
GEODE_MEMBER_CHECK(GJGameState, m_unkPoint1, 0x10);
GEODE_MEMBER_CHECK(GJGameState, m_unkPoint2, 0x18);
GEODE_MEMBER_CHECK(GJGameState, m_unkPoint3, 0x20);
GEODE_MEMBER_CHECK(GJGameState, m_unkPoint4, 0x28);
GEODE_MEMBER_CHECK(GJGameState, m_unkPoint5, 0x30);
GEODE_MEMBER_CHECK(GJGameState, m_unkPoint6, 0x38);
GEODE_MEMBER_CHECK(GJGameState, m_unkPoint7, 0x40);
GEODE_MEMBER_CHECK(GJGameState, m_unkPoint8, 0x48);
GEODE_MEMBER_CHECK(GJGameState, m_unkPoint9, 0x50);
GEODE_MEMBER_CHECK(GJGameState, m_unkPoint10, 0x58);
GEODE_MEMBER_CHECK(GJGameState, m_unkPoint11, 0x60);
GEODE_MEMBER_CHECK(GJGameState, m_unkPoint12, 0x68);
GEODE_MEMBER_CHECK(GJGameState, m_unkPoint13, 0x70);
GEODE_MEMBER_CHECK(GJGameState, m_unkPoint14, 0x78);
GEODE_MEMBER_CHECK(GJGameState, m_unkPoint15, 0x80);
GEODE_MEMBER_CHECK(GJGameState, m_unkPoint16, 0x88);
GEODE_MEMBER_CHECK(GJGameState, m_unkPoint17, 0x90);
GEODE_MEMBER_CHECK(GJGameState, m_unkPoint18, 0x98);
GEODE_MEMBER_CHECK(GJGameState, m_unkPoint19, 0xa0);
GEODE_MEMBER_CHECK(GJGameState, m_unkPoint20, 0xa8);
GEODE_MEMBER_CHECK(GJGameState, m_unkPoint21, 0xb0);
GEODE_MEMBER_CHECK(GJGameState, m_unkPoint22, 0xb8);
GEODE_MEMBER_CHECK(GJGameState, m_unkPoint23, 0xc0);
GEODE_MEMBER_CHECK(GJGameState, m_unkPoint24, 0xc8);
GEODE_MEMBER_CHECK(GJGameState, m_unkPoint25, 0xd0);
GEODE_MEMBER_CHECK(GJGameState, m_unkPoint26, 0xd8);
GEODE_MEMBER_CHECK(GJGameState, m_unkPoint27, 0xe0);
GEODE_MEMBER_CHECK(GJGameState, m_unkPoint28, 0xe8);
GEODE_MEMBER_CHECK(GJGameState, m_unkPoint29, 0xf0);
GEODE_MEMBER_CHECK(GJGameState, m_unkBool1, 0xf8);
GEODE_MEMBER_CHECK(GJGameState, m_unkInt1, 0xfc);
GEODE_MEMBER_CHECK(GJGameState, m_unkBool2, 0x100);
GEODE_MEMBER_CHECK(GJGameState, m_unkInt2, 0x104);
GEODE_MEMBER_CHECK(GJGameState, m_unkBool3, 0x108);
GEODE_MEMBER_CHECK(GJGameState, m_unkPoint30, 0x10c);
GEODE_MEMBER_CHECK(GJGameState, m_middleGroundOffsetY, 0x114);
GEODE_MEMBER_CHECK(GJGameState, m_unkInt3, 0x118);
GEODE_MEMBER_CHECK(GJGameState, m_unkInt4, 0x11c);
GEODE_MEMBER_CHECK(GJGameState, m_unkBool4, 0x120);
GEODE_MEMBER_CHECK(GJGameState, m_unkBool5, 0x121);
GEODE_MEMBER_CHECK(GJGameState, m_unkFloat2, 0x124);
GEODE_MEMBER_CHECK(GJGameState, m_unkFloat3, 0x128);
GEODE_MEMBER_CHECK(GJGameState, m_unkInt5, 0x12c);
GEODE_MEMBER_CHECK(GJGameState, m_unkInt6, 0x130);
GEODE_MEMBER_CHECK(GJGameState, m_unkInt7, 0x134);
GEODE_MEMBER_CHECK(GJGameState, m_unkInt8, 0x138);
GEODE_MEMBER_CHECK(GJGameState, m_unkInt9, 0x13c);
GEODE_MEMBER_CHECK(GJGameState, m_unkInt10, 0x140);
GEODE_MEMBER_CHECK(GJGameState, m_unkInt11, 0x144);
GEODE_MEMBER_CHECK(GJGameState, m_unkFloat4, 0x148);
GEODE_MEMBER_CHECK(GJGameState, m_unkUint1, 0x14c);
GEODE_MEMBER_CHECK(GJGameState, m_portalY, 0x150);
GEODE_MEMBER_CHECK(GJGameState, m_unkBool6, 0x154);
GEODE_MEMBER_CHECK(GJGameState, m_gravityRelated, 0x155);
GEODE_MEMBER_CHECK(GJGameState, m_unkInt12, 0x158);
GEODE_MEMBER_CHECK(GJGameState, m_unkInt13, 0x15c);
GEODE_MEMBER_CHECK(GJGameState, m_unkInt14, 0x160);
GEODE_MEMBER_CHECK(GJGameState, m_unkInt15, 0x164);
GEODE_MEMBER_CHECK(GJGameState, m_unkBool7, 0x168);
GEODE_MEMBER_CHECK(GJGameState, m_unkBool8, 0x169);
GEODE_MEMBER_CHECK(GJGameState, m_unkBool9, 0x16a);
GEODE_MEMBER_CHECK(GJGameState, m_unkFloat5, 0x16c);
GEODE_MEMBER_CHECK(GJGameState, m_unkFloat6, 0x170);
GEODE_MEMBER_CHECK(GJGameState, m_unkFloat7, 0x174);
GEODE_MEMBER_CHECK(GJGameState, m_unkFloat8, 0x178);
GEODE_MEMBER_CHECK(GJGameState, m_cameraAngle, 0x17c);
GEODE_MEMBER_CHECK(GJGameState, m_targetCameraAngle, 0x180);
GEODE_MEMBER_CHECK(GJGameState, m_unk184, 0x184);
GEODE_MEMBER_CHECK(GJGameState, m_timeWarp, 0x188);
GEODE_MEMBER_CHECK(GJGameState, m_timeWarpRelated, 0x18c);
GEODE_MEMBER_CHECK(GJGameState, m_currentChannel, 0x190);
GEODE_MEMBER_CHECK(GJGameState, m_unkInt17, 0x194);
GEODE_MEMBER_CHECK(GJGameState, m_spawnChannelRelated0, 0x198);
GEODE_MEMBER_CHECK(GJGameState, m_spawnChannelRelated1, 0x1d8);
GEODE_MEMBER_CHECK(GJGameState, m_unkDouble1, 0x218);
GEODE_MEMBER_CHECK(GJGameState, m_unkDouble2, 0x220);
GEODE_MEMBER_CHECK(GJGameState, m_unkDouble3, 0x228);
GEODE_MEMBER_CHECK(GJGameState, m_unkUint2, 0x230);
GEODE_MEMBER_CHECK(GJGameState, m_unkUint3, 0x234);
GEODE_MEMBER_CHECK(GJGameState, m_currentProgress, 0x238);
GEODE_MEMBER_CHECK(GJGameState, m_unkUint4, 0x23c);
GEODE_MEMBER_CHECK(GJGameState, m_unkUint5, 0x240);
GEODE_MEMBER_CHECK(GJGameState, m_unkUint6, 0x244);
GEODE_MEMBER_CHECK(GJGameState, m_unkUint7, 0x248);
GEODE_MEMBER_CHECK(GJGameState, m_unkGameObjPtr1, 0x250);
GEODE_MEMBER_CHECK(GJGameState, m_unkGameObjPtr2, 0x258);
GEODE_MEMBER_CHECK(GJGameState, m_cameraPosition, 0x260);
GEODE_MEMBER_CHECK(GJGameState, m_unkBool10, 0x268);
GEODE_MEMBER_CHECK(GJGameState, m_levelFlipping, 0x26c);
GEODE_MEMBER_CHECK(GJGameState, m_unkBool11, 0x270);
GEODE_MEMBER_CHECK(GJGameState, m_unkBool12, 0x271);
GEODE_MEMBER_CHECK(GJGameState, m_isDualMode, 0x272);
GEODE_MEMBER_CHECK(GJGameState, m_unkFloat9, 0x274);
GEODE_MEMBER_CHECK(GJGameState, m_tweenActions, 0x278);
GEODE_MEMBER_CHECK(GJGameState, m_cameraEdgeValue0, 0x2b8);
GEODE_MEMBER_CHECK(GJGameState, m_cameraEdgeValue1, 0x2bc);
GEODE_MEMBER_CHECK(GJGameState, m_cameraEdgeValue2, 0x2c0);
GEODE_MEMBER_CHECK(GJGameState, m_cameraEdgeValue3, 0x2c4);
GEODE_MEMBER_CHECK(GJGameState, m_gameObjectPhysics, 0x2c8);
GEODE_MEMBER_CHECK(GJGameState, m_unkVecFloat1, 0x308);
GEODE_MEMBER_CHECK(GJGameState, m_unkUint10, 0x320);
GEODE_MEMBER_CHECK(GJGameState, m_unkUint11, 0x324);
GEODE_MEMBER_CHECK(GJGameState, m_unkUint12, 0x328);
GEODE_MEMBER_CHECK(GJGameState, m_unkPoint31, 0x32c);
GEODE_MEMBER_CHECK(GJGameState, m_unkFloat10, 0x334);
GEODE_MEMBER_CHECK(GJGameState, m_timeModRelated, 0x338);
GEODE_MEMBER_CHECK(GJGameState, m_timeModRelated2, 0x33c);
GEODE_MEMBER_CHECK(GJGameState, m_unkMapPairIntIntInt, 0x340);
GEODE_MEMBER_CHECK(GJGameState, m_unkUint13, 0x350);
GEODE_MEMBER_CHECK(GJGameState, m_unkPoint32, 0x354);
GEODE_MEMBER_CHECK(GJGameState, m_unkPoint33, 0x35c);
GEODE_MEMBER_CHECK(GJGameState, m_unkBool20, 0x364);
GEODE_MEMBER_CHECK(GJGameState, m_unkBool21, 0x365);
GEODE_MEMBER_CHECK(GJGameState, m_unkBool22, 0x366);
GEODE_MEMBER_CHECK(GJGameState, m_unkUint14, 0x368);
GEODE_MEMBER_CHECK(GJGameState, m_unkBool26, 0x36c);
GEODE_MEMBER_CHECK(GJGameState, m_cameraShakeEnabled, 0x36d);
GEODE_MEMBER_CHECK(GJGameState, m_cameraShakeFactor, 0x370);
GEODE_MEMBER_CHECK(GJGameState, m_unkUint15, 0x374);
GEODE_MEMBER_CHECK(GJGameState, m_unkUint16, 0x378);
GEODE_MEMBER_CHECK(GJGameState, m_unkUint64_1, 0x380);
GEODE_MEMBER_CHECK(GJGameState, m_unkPoint34, 0x388);
GEODE_MEMBER_CHECK(GJGameState, dualRelated, 0x390);
GEODE_MEMBER_CHECK(GJGameState, m_stateObjects, 0x398);
GEODE_MEMBER_CHECK(GJGameState, m_unkMapPairGJGameEventIntVectorEventTriggerInstance, 0x3d8);
GEODE_MEMBER_CHECK(GJGameState, m_unkMapPairGJGameEventIntInt, 0x3e8);
GEODE_MEMBER_CHECK(GJGameState, m_unorderedMapEnterEffectInstanceVectors1, 0x3f8);
GEODE_MEMBER_CHECK(GJGameState, m_unorderedMapEnterEffectInstanceVectors2, 0x438);
GEODE_MEMBER_CHECK(GJGameState, m_unkVecInt1, 0x478);
GEODE_MEMBER_CHECK(GJGameState, m_unkVecInt2, 0x490);
GEODE_MEMBER_CHECK(GJGameState, m_enterEffectInstances1, 0x4a8);
GEODE_MEMBER_CHECK(GJGameState, m_enterEffectInstances2, 0x4c0);
GEODE_MEMBER_CHECK(GJGameState, m_enterEffectInstances3, 0x4d8);
GEODE_MEMBER_CHECK(GJGameState, m_enterEffectInstances4, 0x4f0);
GEODE_MEMBER_CHECK(GJGameState, m_enterEffectInstances5, 0x508);
GEODE_MEMBER_CHECK(GJGameState, m_unkUnorderedSet1, 0x520);
GEODE_MEMBER_CHECK(GJGameState, m_unkBool27, 0x560);
GEODE_MEMBER_CHECK(GJGameState, m_advanceFollowInstances, 0x568);
GEODE_MEMBER_CHECK(GJGameState, m_dynamicObjActions1, 0x580);
GEODE_MEMBER_CHECK(GJGameState, m_dynamicObjActions2, 0x598);
GEODE_MEMBER_CHECK(GJGameState, m_unkBool28, 0x5b0);
GEODE_MEMBER_CHECK(GJGameState, m_unkBool29, 0x5b1);
GEODE_MEMBER_CHECK(GJGameState, m_unkUint17, 0x5b4);
GEODE_MEMBER_CHECK(GJGameState, m_unkUMap8, 0x5b8);
GEODE_MEMBER_CHECK(GJGameState, m_proximityVolumeRelated, 0x5f8);
GEODE_MEMBER_CHECK(GJGameState, m_songChannelStates, 0x608);
GEODE_MEMBER_CHECK(GJGameState, m_songTriggerStateVectors, 0x648);
GEODE_MEMBER_CHECK(GJGameState, m_sfxTriggerStates, 0x688);
GEODE_MEMBER_CHECK(GJGameState, m_unkBool30, 0x6a0);
GEODE_MEMBER_CHECK(GJGameState, m_unkUint18, 0x6a4);
GEODE_MEMBER_CHECK(GJGameState, m_ground, 0x6a8);
GEODE_MEMBER_CHECK(GJGameState, m_unkUint19, 0x6ac);
GEODE_MEMBER_CHECK(GJGameState, m_unkBool31, 0x6b0);
GEODE_MEMBER_CHECK(GJGameState, m_unkUint20, 0x6b4);
GEODE_MEMBER_CHECK(GJGameState, m_unkBool32, 0x6b8);
GEODE_MEMBER_CHECK(GJGameState, m_unkUint21, 0x6bc);
GEODE_MEMBER_CHECK(GJGameState, m_unkUint22, 0x6c0);

GEODE_SIZE_CHECK(GameObject, 0x550);
GEODE_MEMBER_CHECK(GameObject, m_particleString, 0x310);

GEODE_SIZE_CHECK(EnhancedGameObject, 0x5b8);

GEODE_SIZE_CHECK(EffectGameObject, 0x740);
GEODE_MEMBER_CHECK(EffectGameObject, m_hasCenterEffect, 0x5d2);
GEODE_MEMBER_CHECK(EffectGameObject, m_times360, 0x61c);
GEODE_MEMBER_CHECK(EffectGameObject, m_fadeOutDuration, 0x650);
GEODE_MEMBER_CHECK(EffectGameObject, m_isDualMode, 0x680);
GEODE_MEMBER_CHECK(EffectGameObject, m_collectiblePoints, 0x6b0);
GEODE_MEMBER_CHECK(EffectGameObject, m_isSinglePTouch, 0x6dc);
GEODE_MEMBER_CHECK(EffectGameObject, m_secretCoinID, 0x710);
GEODE_MEMBER_CHECK(EffectGameObject, m_ignoreGroupParent, 0x738);

GEODE_SIZE_CHECK(PlayerObject, 0xc48);
GEODE_MEMBER_CHECK(PlayerObject, m_mainLayer, 0x558);
GEODE_MEMBER_CHECK(PlayerObject, m_unk4e4, 0x5a8);
GEODE_MEMBER_CHECK(PlayerObject, m_particleSystems, 0x690);
GEODE_MEMBER_CHECK(PlayerObject, m_ghostTrail, 0x730);
GEODE_MEMBER_CHECK(PlayerObject, m_swingFireMiddle, 0x780);
GEODE_MEMBER_CHECK(PlayerObject, m_waveTrail, 0x7b0);
GEODE_MEMBER_CHECK(PlayerObject, m_playEffects, 0x7e4);
GEODE_MEMBER_CHECK(PlayerObject, m_gv0096, 0x82a);
GEODE_MEMBER_CHECK(PlayerObject, m_gv0100, 0x82b);
GEODE_MEMBER_CHECK(PlayerObject, m_robotSprite, 0x8a0);
GEODE_MEMBER_CHECK(PlayerObject, m_spiderSprite, 0x8a8);
GEODE_MEMBER_CHECK(PlayerObject, m_playerStreak, 0x920);
GEODE_MEMBER_CHECK(PlayerObject, m_isLocked, 0xa2a);
GEODE_MEMBER_CHECK(PlayerObject, m_lastGroundedPos, 0xa2c);
GEODE_MEMBER_CHECK(PlayerObject, m_robotFire, 0xc10);
GEODE_MEMBER_CHECK(PlayerObject, m_gameLayer, 0xc20);
GEODE_MEMBER_CHECK(PlayerObject, m_actionManager, 0xc30);

GEODE_SIZE_CHECK(TableViewCell, 0x230);
GEODE_SIZE_CHECK(ChallengeNode, 0x168);
GEODE_SIZE_CHECK(LeaderboardsLayer, 0x1f8);
GEODE_SIZE_CHECK(MoreSearchLayer, 0x2c8);
GEODE_SIZE_CHECK(GJUserScore, 0x310);
GEODE_SIZE_CHECK(BoomScrollLayer, 0x270);
GEODE_SIZE_CHECK(ButtonSprite, 0x2c0);
GEODE_SIZE_CHECK(CheckpointObject, 0x1258);
GEODE_SIZE_CHECK(EditorPauseLayer, 0x270);
GEODE_SIZE_CHECK(GJAccountSettingsLayer, 0x320);
//GEODE_SIZE_CHECK(GJDropDownLayer, 0x260);
GEODE_SIZE_CHECK(OptionsLayer, 0x298);
GEODE_SIZE_CHECK(LevelPage, 0x240);
GEODE_SIZE_CHECK(LevelBrowserLayer, 0x320);
GEODE_SIZE_CHECK(LevelListLayer, 0x3d8);
GEODE_SIZE_CHECK(SelectListIconLayer, 0x290);
GEODE_SIZE_CHECK(GJGarageLayer, 0x260);
GEODE_SIZE_CHECK(DemonFilterSelectLayer, 0x298);

GEODE_MEMBER_CHECK(EditorUI, m_transformState, 0x210);

GEODE_MEMBER_CHECK(TableViewCell, m_tableView, 0x1a0);
GEODE_MEMBER_CHECK(TableViewCell, m_indexPath, 0x1a8);
GEODE_MEMBER_CHECK(TableViewCell, m_unknownString, 0x1f0);
GEODE_MEMBER_CHECK(TableViewCell, m_mainLayer, 0x220);

GEODE_MEMBER_CHECK(CCScrollLayerExt, m_verticalScrollbar, 0x1c0);
GEODE_MEMBER_CHECK(CCScrollLayerExt, m_contentLayer, 0x1d8);

GEODE_SIZE_CHECK(FMODAudioEngine, 0x888);
GEODE_MEMBER_CHECK(FMODAudioEngine, m_musicChannels, 0x140);
GEODE_MEMBER_CHECK(FMODAudioEngine, m_system, 0x230);
GEODE_MEMBER_CHECK(FMODAudioEngine, m_audioState, 0x270);
GEODE_MEMBER_CHECK(FMODAudioEngine, m_channelIDToChannel, 0x648);

GEODE_MEMBER_CHECK(FMODAudioState, m_unkMapIntFloat7, 0x1b8);
GEODE_MEMBER_CHECK(FMODAudioState, m_unkMapIntFloat8, 0x1f8);
GEODE_MEMBER_CHECK(FMODAudioState, m_unkMapIntFloat9, 0x238);

GEODE_SIZE_CHECK(CCTextInputNode, 0x268);

GEODE_SIZE_CHECK(Slider, 0x1c8);
GEODE_MEMBER_CHECK(Slider, m_touchLogic, 0x198);

GEODE_MEMBER_CHECK(SliderTouchLogic, m_activateThumb, 0x1d8);

GEODE_SIZE_CHECK(CheckpointObject, 0x1258);
GEODE_MEMBER_CHECK(CheckpointObject, m_gameState, 0x140);
GEODE_MEMBER_CHECK(CheckpointObject, m_shaderState, 0x808);
GEODE_MEMBER_CHECK(CheckpointObject, m_audioState, 0xad0);
GEODE_MEMBER_CHECK(CheckpointObject, m_physicalCheckpointObject, 0xe50);
GEODE_MEMBER_CHECK(CheckpointObject, m_player1Checkpoint, 0xe58);
GEODE_MEMBER_CHECK(CheckpointObject, m_player2Checkpoint, 0xe60);
GEODE_MEMBER_CHECK(CheckpointObject, m_maybeAPointer1, 0xe68);
GEODE_MEMBER_CHECK(CheckpointObject, m_unkInt1, 0xe70);
GEODE_MEMBER_CHECK(CheckpointObject, m_unkShort1, 0xe74);
GEODE_MEMBER_CHECK(CheckpointObject, m_maybeAPointer2, 0xe78);
GEODE_MEMBER_CHECK(CheckpointObject, m_vectorDynamicSaveObjects, 0xe80);
GEODE_MEMBER_CHECK(CheckpointObject, m_vectorActiveSaveObjects1, 0xe98);
GEODE_MEMBER_CHECK(CheckpointObject, m_vectorActiveSaveObjects2, 0xeb0);
GEODE_MEMBER_CHECK(CheckpointObject, m_effectManagerState, 0xec8);
GEODE_MEMBER_CHECK(CheckpointObject, m_gradientTriggerObjectArray, 0x1200);
GEODE_MEMBER_CHECK(CheckpointObject, m_unkBool1, 0x1208);
GEODE_MEMBER_CHECK(CheckpointObject, m_sequenceTriggerStateUnorderedMap, 0x1210);
GEODE_MEMBER_CHECK(CheckpointObject, m_maybeAPointer3, 0x1250);

GEODE_SIZE_CHECK(FMODAudioState, 0x380);

GEODE_SIZE_CHECK(GroupCommandObject2, 0x208);

GEODE_SIZE_CHECK(KeyframeObject, 0x1c0);
#endif