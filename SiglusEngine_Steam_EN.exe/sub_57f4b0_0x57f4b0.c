// 函数: sub_57f4b0
// 地址: 0x57f4b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg3

if (data_1311174 != 0)
    data_1311174 = 0
    sub_57fb20()
    arg3 = var_8

if (arg3 u> 0x3f || *(arg3 * 0x3920 + 0xf89b0c) s< 0 || *(arg3 * 0x3920 + &data_f89b10) s< 0)
    return 

int32_t edx = *(arg3 * 0x2d0 + 0x8fcb04)
int32_t var_1c_1 = edx

if (edx == 0xffffffff || data_1313c88 == 0)
    edx = *(arg3 * 0x2d0 + 0x8fcae8)
    var_1c_1 = edx

int32_t eax_1 = 0xffffffff
int32_t var_c_1 = 0xffffffff
int32_t ecx_1 = var_8

if (*(arg3 * 0x1d4 + 0x1090c08) != 0)
    eax_1 = *(arg3 * 0x2d0 + &data_8fcb08)
    var_c_1 = eax_1
    
    if (eax_1 == 0xffffffff || data_1313c88 == 0)
        eax_1 = *(arg3 * 0x2d0 + &data_8fcaec)
        var_c_1 = eax_1

char* var_18_2

if (edx u> 0xff)
    var_18_2 = &data_12a2990
else
    var_18_2 = &(&data_12a2990)[edx * 2]
    ecx_1 = var_8

char* var_14_1

if (eax_1 u> 0xff)
    var_14_1 = nullptr
else
    var_14_1 = &(&data_12a2990)[eax_1 * 2]
    ecx_1 = var_8

if (arg8 != 0)
    int32_t var_28_1 = 1
    int32_t var_34_1
    int32_t var_30_1
    int32_t var_2c_1
    
    if (data_131923c == 0)
        var_2c_1 = 0xffffffff
        var_30_1 = 0xffffffff
        var_34_1 = 0xffffffff
    else
        var_2c_1 = 0
        var_30_1 = 0
        var_34_1 = 0
    
    sub_57f440(
        sub_4c6e40(eax_1, *(arg3 * 0x2d0 + &data_8fcadc), ecx_1, var_34_1, var_30_1, var_2c_1), 
        arg2, arg3 * 0x3920 + &data_f89afc, *(arg3 * 0x2d0 + &data_8fcadc), 
        *(arg3 * 0x2d0 + 0x8fcb0c), *(arg3 * 0x2d0 + 0x8fcb10), var_18_2, var_14_1, arg6, arg7)
    eax_1 = var_c_1
    ecx_1 = var_8
    edx = var_1c_1

if (arg9 != 0)
    int16_t var_34_3 = edx.w
    edx.w = *(arg3 * 0x2d0 + 0x8fcb0c)
    uint32_t eax_4 = zx.d(*(arg3 * 0x2d0 + 0x8fcb10))
    sub_5804f0(eax_4, edx.w, ecx_1, eax_4.w, 0, *(arg3 * 0x2d0 + &data_8fcadc), arg2.w, 0, 
        var_34_3, eax_1.w, arg6, arg7)
    
    if (arg5 != 0)
        uint32_t eax_5 = zx.d(*(arg3 * 0x2d0 + &data_8fcadc))
        sub_4200a0(eax_5, 0, var_8, eax_5.b, arg2.w, 0)

arg1 = *(arg3 * 0x3920 + 0xf8d2ec)

if (arg4 != 0)
    arg1 s>>= 1

*(arg3 * 0x2d0 + 0x8fcb0c) += arg1
