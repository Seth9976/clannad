// 函数: sub_49e312
// 地址: 0x49e312
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_8 = edi
int32_t edi_1 = arg3
int32_t result
int32_t edi_2

if (edi_1 s>= 0)
    result = sub_49df5b(arg1, edi_1, &arg3)
    
    if (result s>= 0)
        edi_2 = arg3
        goto label_49e351
else
    edi_2 = neg.d(edi_1)
label_49e351:
    
    while (true)
        result = sub_49b44f(edi_2, arg2, arg4, arg5 u>> 2, 0)
        
        if (result s< 0)
            break
        
        edi_2 = *(edi_2 + 0x24)
        
        if (edi_2 == 0)
            return 0
return result
