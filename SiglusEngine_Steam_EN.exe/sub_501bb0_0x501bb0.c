// 函数: sub_501bb0
// 地址: 0x501bb0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result = data_1af4e84

if (result u> 3)
    return result

char var_34_1
char var_30_1
char var_2c_1
int16_t var_28_1
char var_24_1
int16_t var_20_1
char var_1c_1
int16_t var_18_1
int32_t var_14_1
enum MESSAGEBOX_RESULT eax

switch (result)
    case 0
        return sub_47e310(sub_4ef190(result, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720), 
            arg3, data_1b8a720, data_1b8a734, data_1b8a748, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
            0, 0, 0)
    case 1
        sub_4ef190(result, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$", &data_1b8a720)
        enum MESSAGEBOX_RESULT eax_1 = data_1b8a784
        int32_t var_48_2
        int32_t var_44_2
        enum MESSAGEBOX_RESULT var_40_2
        char var_3c_2
        char var_38_2
        int16_t var_34_2
        int16_t var_30_2
        char var_2c_2
        char var_28_2
        char var_24_2
        int16_t var_20_2
        char var_1c_2
        int16_t var_18_2
        char var_14_2
        int16_t var_10
        uint32_t var_c
        
        if (eax_1 u> 0xff)
            var_c = 0
            var_10 = 0
            var_14_2 = 0
            var_18_2 = 0
            var_1c_2 = 0
            var_20_2 = 0
            var_24_2 = 0
            var_28_2 = 0
            var_2c_2 = 0
            var_30_2 = 0
            var_34_2 = 0
            var_38_2 = 0
            var_3c_2 = 0
            var_40_2 = 0
            var_44_2 = 0
            var_48_2 = 0
        else
            int32_t ecx_5 = eax_1 * 3
            var_c = zx.d(*((ecx_5 << 3) + &data_12b7a12))
            var_10 = *((ecx_5 << 3) + &data_12b7a10)
            var_14_2 = *((ecx_5 << 3) + &data_12b7a0e)
            int32_t eax_5 = sx.d(*((ecx_5 << 3) + &data_12b7a0c))
            var_18_2 = (eax_5.w + (eax_5 << 2).w) * 2
            var_1c_2 = *((ecx_5 << 3) + &data_12b7a0a)
            int32_t eax_9 = sx.d(*((ecx_5 << 3) + &data_12b7a08))
            var_20_2 = (eax_9.w + (eax_9 << 2).w) * 2
            var_24_2 = *((ecx_5 << 3) + &data_12b7a06)
            var_28_2 = *((ecx_5 << 3) + &data_12b7a05)
            var_2c_2 = *((ecx_5 << 3) + &data_12b7a04)
            var_30_2 = *((ecx_5 << 3) + &data_12b7a02)
            var_34_2 = *((ecx_5 << 3) + &data_12b7a00)
            var_38_2 = *((ecx_5 << 3) + &data_12b79fe)
            var_3c_2 = *((ecx_5 << 3) + &data_12b79fd)
            eax_1 = zx.d(*((ecx_5 << 3) + &data_12b79fc))
            var_40_2 = eax_1
            var_44_2 = data_1b8a770
            var_48_2 = data_1b8a75c
        
        return sub_47e310(eax_1, arg3, data_1b8a720, data_1b8a734, data_1b8a748, var_48_2, 
            var_44_2, var_40_2, var_3c_2, var_38_2, var_34_2, var_30_2, var_2c_2, var_28_2, 
            var_24_2, var_20_2, var_1c_2, var_18_2, var_14_2, var_10, var_c)
    case 2
        eax = sub_4ef190(result, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$$$", &data_1b8a720)
        var_14_1 = 0
        var_18_1 = 0
        var_1c_1 = 0
        var_20_1 = 0
        var_24_1 = 0
        var_28_1 = 0
        var_2c_1 = 0
        var_30_1 = 0
        var_34_1 = 0
    label_501d86:
        return sub_47e310(eax, arg3, data_1b8a720, data_1b8a734, data_1b8a748, data_1b8a75c, 
            data_1b8a770, data_1b8a784, (data_1b8a798).b, (data_1b8a7ac).b, (data_1b8a7c0).w, 
            (data_1b8a7d4).w, var_34_1, var_30_1, var_2c_1, var_28_1, var_24_1, var_20_1, var_1c_1, 
            var_18_1, var_14_1)
    case 3
        sub_4ef190(result, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$$$$$$$$$$$$", &data_1b8a720)
        var_14_1 = data_1b8a888
        int32_t eax_20 = data_1b8a84c
        var_18_1 = (data_1b8a874).w
        var_1c_1 = (data_1b8a860).b
        var_20_1 = (eax_20.w + (eax_20 << 2).w) * 2
        var_24_1 = (data_1b8a838).b
        eax = data_1b8a824 * 0xa
        var_28_1 = eax.w
        var_2c_1 = (data_1b8a810).b
        var_30_1 = (data_1b8a7fc).b
        var_34_1 = (data_1b8a7e8).b
        goto label_501d86
