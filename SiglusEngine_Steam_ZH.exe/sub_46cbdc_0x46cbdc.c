// 函数: sub_46cbdc
// 地址: 0x46cbdc
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_10 = edi
int32_t* result

if (*(arg1 + 0x8c) u>= arg2 + 2)
    result = *(arg1 + 0x88)
    *result = result
    result[1] = *(arg1 + 0x8c)
else
    int32_t edi_1 = arg2 + 2
    
    if (arg2 + 2 u< 0x2000)
        edi_1 = 0x2000
    
    result = sub_745f3f(edi_1 << 2)
    
    if (result == 0)
        return result
    
    *result = *(arg1 + 0x88)
    result[1] = neg.d(*(arg1 + 0x8c))
    *(arg1 + 0x88) = result
    *(arg1 + 0x8c) = edi_1

*(arg1 + 0x8c) -= arg2 + 2
*(arg1 + 0x88) += (arg2 + 2) << 2
return &result[2]
