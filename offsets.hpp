namespace offsets {
    inline std::string ClientVersion = "version-0f5223fb6e7e4955";

    // AnimationTrack offsets
    inline constexpr uintptr_t Animation = 0xD0;
    inline constexpr uintptr_t Animator = 0x118;
    inline constexpr uintptr_t IsPlaying = 0x518;
    inline constexpr uintptr_t Looped = 0xF5;
    inline constexpr uintptr_t Speed = 0xE4;

    // BasePart offsets
    inline constexpr uintptr_t AssemblyAngularVelocity = 0xFC;
    inline constexpr uintptr_t AssemblyLinearVelocity = 0xF0;
    inline constexpr uintptr_t CFrame = 0xC0;
    inline constexpr uintptr_t Color3 = 0x194;
    inline constexpr uintptr_t Material = 0x246;
    inline constexpr uintptr_t Position = 0xE4;
    inline constexpr uintptr_t Primitive = 0x148;
    inline constexpr uintptr_t PrimitiveFlags = 0x1AE;
    inline constexpr uintptr_t PrimitiveOwner = 0x210;
    inline constexpr uintptr_t Rotation = 0xC0;
    inline constexpr uintptr_t Shape = 0x1B1;
    inline constexpr uintptr_t Size = 0x1B0;
    inline constexpr uintptr_t Transparency = 0xF0;
    inline constexpr uintptr_t ValidatePrimitive = 0x6;

    // PrimitiveFlags masks
    inline constexpr uintptr_t Anchored = 0x1AE;
    inline constexpr uintptr_t AnchoredMask = 0x2;
    inline constexpr uintptr_t CanCollide = 0x1AE;
    inline constexpr uintptr_t CanCollideMask = 0x8;
    inline constexpr uintptr_t CanTouch = 0x1AE;
    inline constexpr uintptr_t CanTouchMask = 0x10;

    // ByteCode offsets
    inline constexpr uintptr_t LocalScriptBytecodePointer = 0x10;
    inline constexpr uintptr_t ModuleScriptBytecodePointer = 0x10;
    inline constexpr uintptr_t BytecodeSize = 0x20;

    // Camera offsets
    inline constexpr uintptr_t Camera = 0x460;
    inline constexpr uintptr_t CameraSubject = 0xE8;
    inline constexpr uintptr_t CameraType = 0x158;
    inline constexpr uintptr_t FOV = 0x160;
    inline constexpr uintptr_t CameraPos = 0x11C;
    inline constexpr uintptr_t CameraRotation = 0xF8;

    // ClickDetector offsets
    inline constexpr uintptr_t ClickDetectorMaxActivationDistance = 0x100;
    inline constexpr uintptr_t MouseIcon = 0xE0;

    // DataModel offsets
    inline constexpr uintptr_t CreatorId = 0x188;
    inline constexpr uintptr_t GameId = 0x190;
    inline constexpr uintptr_t GameLoaded = 0x5F8;
    inline constexpr uintptr_t JobId = 0x138;
    inline constexpr uintptr_t PlaceId = 0x198;
    inline constexpr uintptr_t PlaceVersion = 0x1B4;
    inline constexpr uintptr_t DataModelPrimitiveCount = 0x438;
    inline constexpr uintptr_t ScriptContext = 0x3F0;
    inline constexpr uintptr_t ServerIP = 0x5E0;
    inline constexpr uintptr_t Workspace = 0x178;

    // FFlags
    inline constexpr uintptr_t DebugDisableTimeoutDisconnect = 0x67C2710;
    inline constexpr uintptr_t EnableLoadModule = 0x67B80C8;
    inline constexpr uintptr_t PartyPlayerInactivityTimeoutInSeconds = 0x6780A74;
    inline constexpr uintptr_t TaskSchedulerTargetFps = 0x74D464C;
    inline constexpr uintptr_t WebSocketServiceEnableClientCreation = 0x67CF4A8;

    // FakeDataModel
    inline constexpr uintptr_t FakeDataModelPointer = 0x7FA08E8;
    inline constexpr uintptr_t FakeDataModelToDataModel = 0x1C0;

    // GuiObject offsets
    inline constexpr uintptr_t BackgroundColor3 = 0x558;
    inline constexpr uintptr_t BorderColor3 = 0x564;
    inline constexpr uintptr_t Image = 0x9E8;
    inline constexpr uintptr_t LayoutOrder = 0x594;
    inline constexpr uintptr_t FramePositionX = 0x528;
    inline constexpr uintptr_t FramePositionY = 0x530;
    inline constexpr uintptr_t RichText = 0xAC8;
    inline constexpr uintptr_t FrameRotation = 0x188;
    inline constexpr uintptr_t ScreenGuiEnabled = 0x4DC;
    inline constexpr uintptr_t FrameSizeX = 0x548;
    inline constexpr uintptr_t FrameSizeY = 0x54C;
    inline constexpr uintptr_t Text = 0xE28;
    inline constexpr uintptr_t TextColor3 = 0xED8;
    inline constexpr uintptr_t FrameVisible = 0x5C1;

    // Humanoid offsets
    inline constexpr uintptr_t AutoRotate = 0x1D9;
    inline constexpr uintptr_t FloorMaterial = 0x190;
    inline constexpr uintptr_t Health = 0x194;
    inline constexpr uintptr_t HipHeight = 0x1A0;
    inline constexpr uintptr_t HumanoidState = 0x8D8;
    inline constexpr uintptr_t HumanoidStateId = 0x20;
    inline constexpr uintptr_t Jump = 0x1DD;
    inline constexpr uintptr_t JumpHeight = 0x1AC;
    inline constexpr uintptr_t JumpPower = 0x1B0;
    inline constexpr uintptr_t MaxHealth = 0x1B4;
    inline constexpr uintptr_t MaxSlopeAngle = 0x1B8;
    inline constexpr uintptr_t MoveDirection = 0x158;
    inline constexpr uintptr_t RigType = 0x1C8;
    inline constexpr uintptr_t WalkSpeed = 0x1D4;
    inline constexpr uintptr_t WalkSpeedCheck = 0x3C0;

    // Instance offsets
    inline constexpr uintptr_t InstanceAttributePointer1 = 0x48;
    inline constexpr uintptr_t InstanceAttributePointer2 = 0x18;
    inline constexpr uintptr_t AttributeToNext = 0x58;
    inline constexpr uintptr_t AttributeToValue = 0x18;
    inline constexpr uintptr_t ChildrenEnd = 0x8;
    inline constexpr uintptr_t Children = 0x70;
    inline constexpr uintptr_t ClassBase = 0x1400;
    inline constexpr uintptr_t ClassDescriptor = 0x18;
    inline constexpr uintptr_t ClassDescriptorToClassName = 0x8;
    inline constexpr uintptr_t Name = 0xB0;
    inline constexpr uintptr_t Parent = 0x68;

    // Lighting offsets
    inline constexpr uintptr_t Ambient = 0xD8;
    inline constexpr uintptr_t Brightness = 0x120;
    inline constexpr uintptr_t ClockTime = 0x1B8;
    inline constexpr uintptr_t ColorShift_Bottom = 0xF0;
    inline constexpr uintptr_t ColorShift_Top = 0xE4;
    inline constexpr uintptr_t ExposureCompensation = 0x12C;
    inline constexpr uintptr_t FogColor = 0xFC;
    inline constexpr uintptr_t FogEnd = 0x134;
    inline constexpr uintptr_t FogStart = 0x138;
    inline constexpr uintptr_t GeographicLatitude = 0x190;
    inline constexpr uintptr_t OutdoorAmbient = 0x108;

    // LocalScript offsets
    inline constexpr uintptr_t LocalScriptByteCode = 0x1A8;

    // MeshPart offsets
    inline constexpr uintptr_t MeshId = 0x2E8;
    inline constexpr uintptr_t MeshPartTexture = 0x318;

    // Misc offsets
    inline constexpr uintptr_t Adornee = 0x108;
    inline constexpr uintptr_t AnimationId = 0xD0;
    inline constexpr uintptr_t RequireLock = 0x0;
    inline constexpr uintptr_t StringLength = 0x10;
    inline constexpr uintptr_t Value = 0xD0;

    // Model offsets
    inline constexpr uintptr_t PrimaryPart = 0x278;
    inline constexpr uintptr_t Scale = 0x164;

    // ModuleScript offsets
    inline constexpr uintptr_t ModuleScriptByteCode = 0x150;

    // MouseService offsets
    inline constexpr uintptr_t InputObject = 0x110;
	inline constexpr uintptr_t Position = 0xEC;
    inline constexpr uintptr_t MouseSensitivity = 0x80008D0;

    // Player offsets
    inline constexpr uintptr_t CameraMode = 0x308;
    inline constexpr uintptr_t Country = 0x110;
    inline constexpr uintptr_t DisplayName = 0x130;
    inline constexpr uintptr_t Gender = 0xE78;
    inline constexpr uintptr_t LocalPlayer = 0x130;
    inline constexpr uintptr_t CameraMaxZoomDistance = 0x300;
    inline constexpr uintptr_t CameraMinZoomDistance = 0x304;
    inline constexpr uintptr_t ModelInstance = 0x370;
    inline constexpr uintptr_t PlayerMouse = 0xCE8;
    inline constexpr uintptr_t Team = 0x280;
    inline constexpr uintptr_t UserId = 0x2A8;

    // PlayerConfigurer
    inline constexpr uintptr_t PlayerConfigurerPointer = 0x7F7ECE0;
    inline constexpr uintptr_t OverrideDuration = 0x5894805;

    // PlayerMouse offsets
    inline constexpr uintptr_t Icon = 0xE0;
    inline constexpr uintptr_t MouseWorkspace = 0x168;

    // ProximityPrompt offsets
    inline constexpr uintptr_t ProximityPromptActionText = 0xD0;
    inline constexpr uintptr_t ProximityPromptEnabled = 0x156;
    inline constexpr uintptr_t ProximityPromptGamepadKeyCode = 0x13C;
    inline constexpr uintptr_t ProximityPromptHoldDuraction = 0x140;
    inline constexpr uintptr_t ProximityPromptMaxActivationDistance = 0x148;
    inline constexpr uintptr_t ObjectText = 0xF0;
    inline constexpr uintptr_t RequiresLineOfSight = 0x157;

    // RenderView offsets
    inline constexpr uintptr_t DeviceD3D11 = 0x8;
    inline constexpr uintptr_t VisualEngine = 0x10;

    // RunService offsets
    inline constexpr uintptr_t HeartbeatFPS = 0xB8;
    inline constexpr uintptr_t HeartbeatTask = 0xE8;

    // Sky offsets
    inline constexpr uintptr_t MoonAngularSize = 0x25C;
    inline constexpr uintptr_t MoonTextureId = 0xE0;
    inline constexpr uintptr_t SkyboxBk = 0x110;
    inline constexpr uintptr_t SkyboxDn = 0x140;
    inline constexpr uintptr_t SkyboxFt = 0x170;
    inline constexpr uintptr_t SkyboxLf = 0x1A0;
    inline constexpr uintptr_t SkyboxOrientation = 0x250;
    inline constexpr uintptr_t SkyboxRt = 0x1D0;
    inline constexpr uintptr_t SkyboxUp = 0x200;
    inline constexpr uintptr_t StarCount = 0x260;
    inline constexpr uintptr_t SunAngularSize = 0x254;
    inline constexpr uintptr_t SunTextureId = 0x230;

    // SpecialMesh offsets
    inline constexpr uintptr_t SpecialMeshId = 0x108;
    inline constexpr uintptr_t SpecialMeshScale = 0x164;

    // StatsItem offsets
    inline constexpr uintptr_t StatsValue = 0x1C8;

    // TaskScheduler offsets
    inline constexpr uintptr_t FakeDataModelToDataModel = 0x1B0;
    inline constexpr uintptr_t JobEnd = 0x1D8;
    inline constexpr uintptr_t Job_Name = 0x18;
    inline constexpr uintptr_t JobStart = 0x1D0;
    inline constexpr uintptr_t TaskSchedulerMaxFPS = 0x1B0;
    inline constexpr uintptr_t TaskSchedulerPointer = 0x8056DC8;
    inline constexpr uintptr_t RenderJobToFakeDataModel = 0x38;
    inline constexpr uintptr_t RenderJobToRenderView = 0x218;

    // Team offsets
    inline constexpr uintptr_t TeamColor = 0xD0;

    // Textures offsets
    inline constexpr uintptr_t DecalTexture = 0x198;
    inline constexpr uintptr_t TextureTexture = 0x198;

    // VisualEngine offsets
    inline constexpr uintptr_t Dimensions = 0x720;
    inline constexpr uintptr_t VisualEnginePointer = 0x7A7E950;
    inline constexpr uintptr_t VisualEngineToDataModel1 = 0x700;
    inline constexpr uintptr_t VisualEngineToDataModel2 = 0x1C0;
    inline constexpr uintptr_t viewmatrix = 0x4B0;

    // Workspace offsets
    inline constexpr uintptr_t CurrentCamera = 0x460;
    inline constexpr uintptr_t DistributedGameTime = 0x480;
    inline constexpr uintptr_t Gravity = 0x1D0;
    inline constexpr uintptr_t GravityContainer = 0x3D8;
    inline constexpr uintptr_t PrimitivesPointer1 = 0x3D8;
    inline constexpr uintptr_t PrimitivesPointer2 = 0x240;
    inline constexpr uintptr_t ReadOnlyGravity = 0x9B8;
}
