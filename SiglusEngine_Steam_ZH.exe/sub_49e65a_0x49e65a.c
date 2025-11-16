// 函数: sub_49e65a
// 地址: 0x49e65a
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = arg3
int32_t result
int32_t esi_1

if (esi s>= 0)
    result = sub_49df5b(arg1, esi, &arg3)
    
    if (result s>= 0)
        esi_1 = arg3
        goto label_49e694
else
    esi_1 = neg.d(esi)
label_49e694:
    
    while (true)
        int16_t x87control
        result, x87control = sub_49c899(x87control, esi_1, arg2, arg4, arg5, 0)
        
        if (result s< 0)
            break
        
        esi_1 = *(esi_1 + 0x24)
        
        if (esi_1 == 0)
            return 0
return result
