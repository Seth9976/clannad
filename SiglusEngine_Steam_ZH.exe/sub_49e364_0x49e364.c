// 函数: sub_49e364
// 地址: 0x49e364
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = arg3
int32_t result
int32_t esi_1

if (esi s>= 0)
    result = sub_49df5b(arg1, esi, &arg3)
    
    if (result s>= 0)
        esi_1 = arg3
        goto label_49e39e
else
    esi_1 = neg.d(esi)
label_49e39e:
    
    while (true)
        void arg_10
        result = sub_49b6ee(esi_1, arg2, &arg_10, 1, 0)
        
        if (result s< 0)
            break
        
        esi_1 = *(esi_1 + 0x24)
        
        if (esi_1 == 0)
            return 0
return result
