// 函数: sub_45a350
// 地址: 0x45a350
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg5 == 0)
    if (arg4 == 0)
        void* var_c_15 = &data_12dc554
        return sub_4c84d0(arg3, "%s")
    
    int32_t eax_89 = data_12dc4c8
    
    if (eax_89 == 1)
        void* var_c_19 = arg4 + 0x9c
        uint32_t var_10_18 = zx.d(*(arg4 + 0x12))
        uint32_t var_14_16 = zx.d(*(arg4 + 0x10))
        uint32_t var_18_18 = zx.d(*(arg4 + 0xe))
        uint32_t var_1c_14 = zx.d(*(arg4 + 0xa))
        return sub_4c84d0(arg3, "%02d/%02d(%02d:%02d) %s")
    
    if (eax_89 == 2)
        uint32_t var_c_18 = zx.d(*(arg4 + 0x12))
        uint32_t var_10_17 = zx.d(*(arg4 + 0x10))
        uint32_t var_14_15 = zx.d(*(arg4 + 0xe))
        uint32_t var_18_17 = zx.d(*(arg4 + 0xa))
        uint32_t var_1c_13 = zx.d(*(arg4 + 8))
        return sub_4c84d0(arg3, "%04d/%02d/%02d(%02d:%02d)")
    
    if (eax_89 != 3)
        uint32_t var_c_16 = zx.d(*(arg4 + 0x12))
        uint32_t var_10_15 = zx.d(*(arg4 + 0x10))
        uint32_t var_14_13 = zx.d(*(arg4 + 0xe))
        uint32_t var_18_15 = zx.d(*(arg4 + 0xa))
        return sub_4c84d0(arg3, "%02d/%02d(%02d:%02d)")
    
    void* var_c_17 = arg4 + 0x9c
    uint32_t var_10_16 = zx.d(*(arg4 + 0x12))
    uint32_t var_14_14 = zx.d(*(arg4 + 0x10))
    uint32_t var_18_16 = zx.d(*(arg4 + 0xe))
    uint32_t var_1c_12 = zx.d(*(arg4 + 0xa))
    uint32_t var_20_10 = zx.d(*(arg4 + 8))
    return sub_4c84d0(arg3, "%04d/%02d/%02d(%02d:%02d) %s")

int32_t eax = data_12dc4d0

if (eax s< 0xa)
    if (arg4 != 0)
        int32_t eax_2 = data_12dc4c8
        
        if (eax_2 == 1)
            void* var_c_4 = arg4 + 0x9c
            uint32_t var_10_4 = zx.d(*(arg4 + 0x12))
            uint32_t var_14_3 = zx.d(*(arg4 + 0x10))
            uint32_t var_18_4 = zx.d(*(arg4 + 0xe))
            uint32_t var_1c_3 = zx.d(*(arg4 + 0xa))
            int32_t var_20_2 = arg2
            return sub_4c84d0(arg3, "[%d] %02d/%02d(%02d:%02d) %s")
        
        if (eax_2 == 2)
            uint32_t var_c_3 = zx.d(*(arg4 + 0x12))
            uint32_t var_10_3 = zx.d(*(arg4 + 0x10))
            uint32_t var_14_2 = zx.d(*(arg4 + 0xe))
            uint32_t var_18_3 = zx.d(*(arg4 + 0xa))
            uint32_t var_1c_2 = zx.d(*(arg4 + 8))
            int32_t var_20_1 = arg2
            return sub_4c84d0(arg3, "[%d] %04d/%02d/%02d(%02d:%02d)")
        
        if (eax_2 != 3)
            uint32_t var_c_1 = zx.d(*(arg4 + 0x12))
            uint32_t var_10_1 = zx.d(*(arg4 + 0x10))
            uint32_t var_14 = zx.d(*(arg4 + 0xe))
            uint32_t var_18_1 = zx.d(*(arg4 + 0xa))
            int32_t var_1c = arg2
            return sub_4c84d0(arg3, "[%d] %02d/%02d(%02d:%02d)")
        
        void* var_c_2 = arg4 + 0x9c
        uint32_t var_10_2 = zx.d(*(arg4 + 0x12))
        uint32_t var_14_1 = zx.d(*(arg4 + 0x10))
        uint32_t var_18_2 = zx.d(*(arg4 + 0xe))
        uint32_t var_1c_1 = zx.d(*(arg4 + 0xa))
        uint32_t var_20 = zx.d(*(arg4 + 8))
        int32_t var_24_1 = arg2
        return sub_4c84d0(arg3, "[%d] %04d/%02d/%02d(%02d:%02d) %s")
    
    void* var_c = &data_12dc554
    int32_t var_10 = arg2
    return sub_4c84d0(arg3, "[%d] %s")

if (eax s>= 0x64)
    if (arg4 == 0)
        void* var_c_10 = &data_12dc554
        int32_t var_10_10 = arg2
        return sub_4c84d0(arg3, "[%03d] %s")
    
    int32_t eax_60 = data_12dc4c8
    
    if (eax_60 == 1)
        void* var_c_14 = arg4 + 0x9c
        uint32_t var_10_14 = zx.d(*(arg4 + 0x12))
        uint32_t var_14_11 = zx.d(*(arg4 + 0x10))
        uint32_t var_18_14 = zx.d(*(arg4 + 0xe))
        uint32_t var_1c_11 = zx.d(*(arg4 + 0xa))
        int32_t var_20_8 = arg2
        return sub_4c84d0(arg3, "[%03d] %02d/%02d(%02d:%02d) %s")
    
    if (eax_60 == 2)
        uint32_t var_c_13 = zx.d(*(arg4 + 0x12))
        uint32_t var_10_13 = zx.d(*(arg4 + 0x10))
        uint32_t var_14_10 = zx.d(*(arg4 + 0xe))
        uint32_t var_18_13 = zx.d(*(arg4 + 0xa))
        uint32_t var_1c_10 = zx.d(*(arg4 + 8))
        int32_t var_20_7 = arg2
        return sub_4c84d0(arg3, "[%03d] %04d/%02d/%02d(%02d:%02d)")
    
    if (eax_60 != 3)
        uint32_t var_c_11 = zx.d(*(arg4 + 0x12))
        uint32_t var_10_11 = zx.d(*(arg4 + 0x10))
        uint32_t var_14_8 = zx.d(*(arg4 + 0xe))
        uint32_t var_18_11 = zx.d(*(arg4 + 0xa))
        int32_t var_1c_8 = arg2
        return sub_4c84d0(arg3, "[%03d] %02d/%02d(%02d:%02d)")
    
    void* var_c_12 = arg4 + 0x9c
    uint32_t var_10_12 = zx.d(*(arg4 + 0x12))
    uint32_t var_14_9 = zx.d(*(arg4 + 0x10))
    uint32_t var_18_12 = zx.d(*(arg4 + 0xe))
    uint32_t var_1c_9 = zx.d(*(arg4 + 0xa))
    uint32_t var_20_6 = zx.d(*(arg4 + 8))
    int32_t var_24_5 = arg2
    return sub_4c84d0(arg3, "[%03d] %04d/%02d/%02d(%02d:%02d) %s")

if (arg4 == 0)
    void* var_c_5 = &data_12dc554
    int32_t var_10_5 = arg2
    return sub_4c84d0(arg3, "[%02d] %s")

int32_t eax_31 = data_12dc4c8

if (eax_31 == 1)
    void* var_c_9 = arg4 + 0x9c
    uint32_t var_10_9 = zx.d(*(arg4 + 0x12))
    uint32_t var_14_7 = zx.d(*(arg4 + 0x10))
    uint32_t var_18_9 = zx.d(*(arg4 + 0xe))
    uint32_t var_1c_7 = zx.d(*(arg4 + 0xa))
    int32_t var_20_5 = arg2
    return sub_4c84d0(arg3, "[%02d] %02d/%02d(%02d:%02d) %s")

if (eax_31 == 2)
    uint32_t var_c_8 = zx.d(*(arg4 + 0x12))
    uint32_t var_10_8 = zx.d(*(arg4 + 0x10))
    uint32_t var_14_6 = zx.d(*(arg4 + 0xe))
    uint32_t var_18_8 = zx.d(*(arg4 + 0xa))
    uint32_t var_1c_6 = zx.d(*(arg4 + 8))
    int32_t var_20_4 = arg2
    return sub_4c84d0(arg3, "[%02d] %04d/%02d/%02d(%02d:%02d)")

if (eax_31 != 3)
    uint32_t var_c_6 = zx.d(*(arg4 + 0x12))
    uint32_t var_10_6 = zx.d(*(arg4 + 0x10))
    uint32_t var_14_4 = zx.d(*(arg4 + 0xe))
    uint32_t var_18_6 = zx.d(*(arg4 + 0xa))
    int32_t var_1c_4 = arg2
    return sub_4c84d0(arg3, "[%02d] %02d/%02d(%02d:%02d)")

void* var_c_7 = arg4 + 0x9c
uint32_t var_10_7 = zx.d(*(arg4 + 0x12))
uint32_t var_14_5 = zx.d(*(arg4 + 0x10))
uint32_t var_18_7 = zx.d(*(arg4 + 0xe))
uint32_t var_1c_5 = zx.d(*(arg4 + 0xa))
uint32_t var_20_3 = zx.d(*(arg4 + 8))
int32_t var_24_3 = arg2
return sub_4c84d0(arg3, "[%02d] %04d/%02d/%02d(%02d:%02d) %s")
