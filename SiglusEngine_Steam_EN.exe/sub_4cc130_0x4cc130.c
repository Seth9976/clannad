// 函数: sub_4cc130
// 地址: 0x4cc130
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg4 == 0)
    int32_t eax_9
    int32_t edx_3
    edx_3:eax_9 = sx.q(arg1[1])
    int32_t eax_10 = sub_5f0cc8(*arg1, arg2 + eax_9, FILE_BEGIN)
    
    if (eax_10 == 0)
        return eax_10
else
    int32_t* var_10_1
    void* var_c_1
    enum SET_FILE_POINTER_MOVE_METHOD __saved_esi_1
    
    if (arg4 == 1)
        __saved_esi_1 = FILE_CURRENT
        var_c_1 = arg2
        var_10_1 = *arg1
    label_4cc170:
        int32_t eax_7 = sub_5f0cc8(var_10_1, var_c_1, __saved_esi_1)
        
        if (eax_7 == 0)
            return eax_7
    else if (arg4 == 2)
        int32_t eax_3 = arg1[2]
        
        if (eax_3 != 0xffffffff)
            int32_t eax_4
            int32_t edx_1
            edx_1:eax_4 = sx.q(eax_3)
            __saved_esi_1 = FILE_BEGIN
            var_c_1 = eax_4 - arg2
            var_10_1 = *arg1
            arg3 = sbb.d(edx_1, arg3, eax_4 u< arg2)
        else
            __saved_esi_1 = FILE_END
            var_c_1 = arg2
            var_10_1 = *arg1
        
        goto label_4cc170

return 0xffffffff
