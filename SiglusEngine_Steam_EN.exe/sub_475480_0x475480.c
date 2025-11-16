// 函数: sub_475480
// 地址: 0x475480
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg3

if (arg7 != 0 && data_13702a9 != 0)
    sub_42d590()
    return 1

int32_t esi = 1
int32_t eax_3
int32_t eax_4
int32_t esi_1

if (arg4 == 0xffffffff && arg5 == 0xffffffff)
    if (arg6 != arg5)
        eax_4 = sub_466d80(arg5, arg3, arg6, arg2)
        goto label_47553b
    
    int32_t eax_2 = sub_466d80(arg5, arg3, 0, arg2)
    esi_1 = eax_2
    eax_3 = sub_466d80(eax_2, arg3, 1, arg2)
    goto label_4754e5

if (arg6 != 0xffffffff)
    eax_4 = sub_466cd0(arg5, arg5, arg4, arg6, arg3, arg2)
label_47553b:
    
    if (eax_4 == 0)
        goto label_475546
else
    int32_t eax_5 = sub_466cd0(arg5, arg5, arg4, 0, arg3, arg2)
    esi_1 = eax_5
    eax_3 = sub_466cd0(eax_5, arg5, arg4, 1, arg3, arg2)
label_4754e5:
    
    if (esi_1 == 0 && eax_3 == 0)
        esi = eax_3 + 1
    label_475546:
        
        if (data_1af1768 != 0)
            data_1af177c = 1
            data_1af1768 = 0
        
        sub_48d140()
        int32_t eax_6 = data_1af1788
        
        if (data_71929c == 0x11)
            eax_6 = esi
        
        data_1af1788 = eax_6

return 0
